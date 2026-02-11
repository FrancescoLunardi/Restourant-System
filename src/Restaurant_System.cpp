#include "Restaurant_System.h"


bool Restaurant_System::add_table(int table_id, int min_sits, int max_sits)
{
    if (this->tables_list.count(table_id) > 0) return false;

    // Else...

    Table t;
    t.add_change_n(table_id);
    t.add_change_n_max_min_sits(min_sits, max_sits);
    this->tables_list[table_id] = t;

    return true;
}

int Restaurant_System::create_reservation(const Reservation& reservation)
{
    int id = this->next_reservation_id;
    this->reservations_list[id] = reservation;
    ++this->next_reservation_id;

    return id;
}

bool Restaurant_System::assign_table_to_reservation(int reservation_id, int table_id)
{
    auto r_it = this->reservations_list.find(reservation_id);
    if (r_it == this->reservations_list.end()) return false;

    auto t_it = this->tables_list.find(table_id);
    if (t_it == this->tables_list.end()) return false;

    r_it->second.set_table_reserved_id(table_id);
    t_it->second.add_reservation(reservation_id);
    return true;
}

std::map<int, Table>& Restaurant_System::get_tables()
{
    return this->tables_list;
}

const std::map<int, Reservation>& Restaurant_System::get_reservations() const
{
    return this->reservations_list;
}