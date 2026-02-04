#include "main.h"

/* Inizialize */
Reservation::Reservation()
{
    this->date = getTodayDate();
    this->date_reservation = Date(0, 0, 0);
    this->name = "";
    this->surname = "";
    this->phone_number = "";
    this->number_sits = 0;
}


/* Methods */

void Reservation::add_change_reservation_date(__int32 d, __int32 m, __int32 y)
{
    this->date_reservation = Date(d, m, y);

    /* Print the successfully message */
    std::cout << "The date is change/added successfully!\n";
}

void Reservation::add_change_name_surname(std::string name, std::string surname)
{
    /* Check validation of data */
    if (name.length() < 4 || surname.length() < 4)
    {
        std::cout << "Error! Name/surname is/are uncorrect.\n";
        return; // Exit from method
    }

    
    this->name = name;
    this->surname = surname;

    /* Print the successfully message */
    if (this->name.length() < 1 || this->surname.length() < 1)
        std::cout << "Data is added successfully!\n";
    else 
        std::cout << "Data is changing successfully!\n";
}

void Reservation::add_change_phone_number(std::string number)
{
    /* Check number */
    bool correctly_number {true};
    
    if (number.length() < 9)             correctly_number = false;
    if (number[0] != '+')                correctly_number = false;
    if (number[1] < 0 || number[1] > 9)  correctly_number = false;


    if (correctly_number)
    {
        this->phone_number = number;

        /* Print the successfully message */
        std::cout << "The number is added/change correctly!\n";
    }
    else
        /* Print the error message */
        std::cout << "Error! The number is uncorrect.\n";
}

void Reservation::add_change_sit_n(int n_sits)
{
    if (n_sits > 0 && n_sits < 30)
    {
        this->number_sits = n_sits;

        /* Print the successfully message */
        std::cout << "The number of sits is added/change correctly!\n";
    }
    else
        /* Print the error message */
        std::cout << "Error! The number is uncorrect.\n";
}

void Reservation::reserve_table()
{
    this->reserve_table = assign_table(
        this->date_reservation, 
        this->name, 
        this->surname, 
        this->phone_number
    );
}
