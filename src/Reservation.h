#ifndef RESERVATION_H
#define RESERVATION_H

#include "Date.h"
#include "main.h"

class Reservation
{
private:
    Date date;                // Date when reservation was created
    Date date_reservation;    // Date of reservation usage
    std::string name;
    std::string surname;
    std::string phone_number;
    int number_sits;
    int table_reserved_id;    // -1 = not assigned

public:
    Reservation();

    void add_change_reservation_date(int d, int m, int y);
    void add_change_name_surname(std::string name, std::string surname);
    void add_change_phone_number(std::string number);
    void add_change_sit_n(int n_sits);

    void set_table_reserved_id(int table_id);
    
    int get_table_reserved_id() const;
    int get_number_sits() const;
};

#endif
