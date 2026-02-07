#include "Table.h"
#include "Date.h"
#include "Reservation.h"


std::vector<Table> table_list = {};


void Table::add_change_n(int new_n)
{
    bool n_table_already_existing {false};
    for (const Table& t : table_list) if (t.get_n() == new_n) n_table_already_existing = true;

    if (!n_table_already_existing)
    {
        this->n = new_n;

        /* Print successfully message */
        std::cout << "Number of table added/changed succesfully!\n";
    }
    else
        /* Print error message */
        std::cout << "Error! The number of table already existing.\n";
}

void Table::add_change_n_max_min_sits(int n_min, int n_max)
{
    if (n_min >= n_max)
    {
        std::cout << "Error! The n. min of site is >= to n. max of sits.\n";
        return;
    }

    else 
    {
        this->n_min_sits = n_min;
        this->n_max_sits = n_max;

        /* Print successfully message */
        std::cout << "The number of sits is added/changed successfully!\n";
    }
}

void Table::add_reservation(const Reservation& reservation)
{
    this->reservation_list.push_back(reservation);

    /* Print successfully message */
    std::cout << "The reservation is added at reservation_list of table!\n";
}

void Table::remove_reservation(const Reservation& reservation)
{
    for (size_t r {}; r < this->reservation_list.size(); r++)
        if (this->reservation_list[r] == &reservation)
        {
            this->reservation_list.erase(this->reservation_list.begin() + r);

            /* Print successfully message */
            std::cout << "The reservation is removed succesfully!\n";
            
            return;
        }

    /* Print error message */
    std::cout << "Error! The riservation isn't in the list!\n";
}


Table assign_table( Date date_reservation, std::string name, std::string surname, std::string phone_number)
{
    // Serch a free table for n. of people and for houar
}