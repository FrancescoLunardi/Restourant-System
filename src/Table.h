#ifndef TABLE_H
#define TABLE_H

#include "main.h"


class Date;
class Reservation;

class Table
{
    private:
        int n {};
        int n_min_sits {};
        int n_max_sits {};
        std::vector<const Reservation*> reservation_list = {};

    public:
        /* Methods*/
        void add_change_n(int new_n);                            // Changing number of table
        void add_change_n_max_min_sits(int n_min, int n_max); 
        void add_reservation(const Reservation& reservation);    // Add to calendar (vactor) of this table
        void remove_reservation(const Reservation& reservation); // Remove from calendar (vector) of this table

        /* Getter */
        int get_n() const { return this->n; }
};


/* Assing table (serch witch table is more addapted and is free) */
Table assign_table(
    Date date_reservation, std::string name, std::string surname, std::string phone_number
);



#endif