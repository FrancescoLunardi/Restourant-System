#include "Date.h"


/* ------- CLASS ------*/

Date::Date():d(0), m(0), y(0) {} // Inizialize date
Date::Date(int d, int m, int y)
{
    this->d = d;
    this->m = m;
    this->y = y;
};

std::string Date::getDateString()
{
    return {
        std::to_string(this->d) + "/" + 
        std::to_string(this->m) + "/" + 
        std::to_string(this->y)
    };
}


/* ------ GET DATE OF TODAY (function) ------ */

Date getTodayDate()
{
    time_t now = std::time(NULL);
    tm* date = std::localtime(&now);

    /* Get date from library*/
    
    int d = date->tm_mday;
    int m = date->tm_mon;
    int y = date->tm_year;

    return {d, m, y};
};
