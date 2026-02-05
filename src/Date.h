#ifndef DATE_H
#define DATE_H

#include "main.h"


/* ------- CLASS ------*/

class Date
{
    public:
        int d; // Day
        int m; // Month
        int y; // Year

        // Inizialize
        Date (int d, int m, int y);
        
        // Print date function
        std::string getDateString();
};


/* ------ GET DATE OF TODAY (function) ------ */
Date getTodayDate();



#endif