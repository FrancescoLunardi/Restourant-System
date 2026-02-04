#include "main.h"


/* ------- CLASS ------*/

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
    
    __int32 d = date->tm_mday;
    __int32 m = date->tm_mon;
    __int32 y = date->tm_year;

    return {d, m, y};
};
