#ifndef RESERVATION_H
#define RESERVATION_H

#include "main.h"

/* ------ RESERVATION CLASS ------*/

class Reservation
{
    private:
        Date        date;
        Date        date_reservation;
        std::string name;
        std::string surname;
        std::string phone_number;
        int         number_sits;
        Table       table_reserved;

    public:
        /* Inizialize */
        Reservation();

        /* Methods */
        void add_change_reservation_date(__int32 d, __int32 m, __int32 y);
        void add_change_name_surname(std::string name, std::string surname);
        void add_change_phone_number(std::string number);
        void add_change_sit_n(int n_sits);
        void reserve_table();
};


#endif