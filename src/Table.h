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
        void add_change_n(int new_n);
        void add_change_n_max_min_sits(int n_min, int n_max);
        void add_reservation(const Reservation& reservation);
        void remove_reservation(const Reservation& reservation);

        /* Getter */
        int get_n() const
            { return this->n; }
};


Table assign_table(
    Date date_reservation, std::string name, std::string surname, std::string phone_number
);



#endif