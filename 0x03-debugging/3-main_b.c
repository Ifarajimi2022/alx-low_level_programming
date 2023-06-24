#include <stdio.h>

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 60 + day;
            break;
        case 4:
            day = 91 + day;
            break;
        case 5:
            day = 121 + day;
            break;
        case 6:
            day = 152 + day;
            break;
        case 7:
            day = 182 + day;
            break;
        case 8:
            day = 213 + day;
            break;
        case 9:
            day = 244 + day;
            break;
        case 10:
            day = 274 + day;
            break;
        case 11:
            day = 305 + day;
            break;
        case 12:
            day = 335 + day;
            break;
        default:
            break;
    }
    return (day);
}
/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 61)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 61)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

int main(void)
{
    int month;
    int day;
    int year;

    month = 2;
    day = 29;
    year = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}
