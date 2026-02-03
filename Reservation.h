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
        Table       table_reserved;
        int         number_sits;

    public:
        /* Inizialize */
        Reservation(
            /* Today Date */
            __int32 date1_d, __int32 date1_m, __int32 date1_y,
            /* Reservation Date */
            __int32 date2_d, __int32 date2_m, __int32 date2_y,
            /* User Data*/
            std::string name, std::string surname, std::string phone_number,

        )
};




#endif