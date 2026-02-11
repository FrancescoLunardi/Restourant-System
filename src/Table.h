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
        std::vector<int> reservations_list_id = {};

    public:
        /* Methods*/
        void add_change_n(int new_n);                            // Changing number of table
        void add_change_n_max_min_sits(int n_min, int n_max); 
        void add_reservation(int reservation_id);    // Add to calendar (vactor) of this table
        void remove_reservation(int reservation_id); // Remove from calendar (vector) of this table

        /* Getter */
        int get_n() const { return this->n; }
};



#endif