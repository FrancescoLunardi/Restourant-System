#include "Reservation.h"

Reservation::Reservation()
{
    this->date = getTodayDate();
    this->date_reservation = Date(0, 0, 0);
    this->name = "";
    this->surname = "";
    this->phone_number = "";
    this->number_sits = 0;
    this->table_reserved_id = -1;
}

void Reservation::add_change_reservation_date(int d, int m, int y)
{
    this->date_reservation = Date(d, m, y);
    std::cout << "The date is changed/added successfully!\n";
}

void Reservation::add_change_name_surname(std::string name, std::string surname)
{
    if (name.length() < 3 || surname.length() < 3)
    {
        std::cout << "Error! Name/surname is incorrect.\n";
        return;
    }

    this->name = name;
    this->surname = surname;
    std::cout << "Data is added/changed successfully!\n";
}

void Reservation::add_change_phone_number(std::string number)
{
    bool ok = true;

    if (number.length() < 9) ok = false;
    if (number.empty() || number[0] != '+') ok = false;

    for (size_t i = 1; i < number.size(); ++i)
    {
        if (!std::isdigit(static_cast<unsigned char>(number[i]) || number[i] != ' '))
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        this->phone_number = number;
        std::cout << "The number is added/changed correctly!\n";
    }
    else
        std::cout << "Error! The number is incorrect.\n";

}

void Reservation::add_change_sit_n(int n_sits)
{
    if (n_sits > 0 && n_sits < 30)
    {
        this->number_sits = n_sits;
        std::cout << "The number of sits is added/changed correctly!\n";
    }
    else
    {
        std::cout << "Error! The number is incorrect.\n";
    }
}

void Reservation::set_table_reserved_id(int table_id)
{
    this->table_reserved_id = table_id;
}

int Reservation::get_table_reserved_id() const
{
    return this->table_reserved_id;
}

int Reservation::get_number_sits() const
{
    return this->number_sits;
}
