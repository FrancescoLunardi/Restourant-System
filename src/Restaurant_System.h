#ifndef RESTAURANT_SYSTEM_H
#define RESTAURANT_SYSTEM_H

#include "main.h"
#include "Reservation.h"
#include "Table.h"

class Restaurant_System
{
    private:
        std::map<int, Reservation> reservations_list;
        std::map<int, Table> tables_list;
        int next_reservation_id{1};

    public:
        bool add_table(int table_id, int min_sits, int max_sits);
        int create_reservation(const Reservation& reservation);
        bool assign_table_to_reservation(int reservation_id, int table_id);

        std::map<int, Table>& get_tables();
        const std::map<int, Reservation>& get_reservations() const;
};

#endif
