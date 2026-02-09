#ifndef RESERVATION_H
#define RESERVATION_H

#include "Date.h"
#include "Reservation.h"

/* ------ RESERVATION CLASS ------*/

class Reservation
{
    private:
        Date date;                  // Date the reservation was added
        Date date_reservation;      // Date of use
        std::string name;           // Name of user
        std::string surname;        // Surname of user
        std::string phone_number;   // Phone number of user
        int number_sits;            // Number of sits reserved
        Table table_reserved;

    public:
        /* Inizialize */
        Reservation();

        /* Methods */
        void add_change_reservation_date(int d, int m, int y);
        void add_change_name_surname(std::string name, std::string surname);
        void add_change_phone_number(std::string number);
        void add_change_sit_n(int n_sits);
        void reserve_table();
};


#endif