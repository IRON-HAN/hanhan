#include <iostream>

namespace _0522
{
    bool is_leap(int year)
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100))
            return true;
        else
            return false;
    }
    unsigned days_of_month(unsigned month, int year)
    {
        unsigned day_array[] = {31, static_cast<unsigned int>(is_leap(year) ? 29 : 28),
                                31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return day_array[month - 1];
    }
} // namespace _0522
using namespace std;
using _0522::days_of_month;

int main()
{
    cout << days_of_month(2, 2020) << endl;
    return 0;
}
