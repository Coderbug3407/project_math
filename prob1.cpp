//chau van kim cuong 20ES
#include <iostream>
#include <string>
#include "prob1.h"
using namespace std;
int main()
{
    int day,month,year;
    Date check; 
    cout << "Enter the day: ";
	cin >> day;
	while (day < 1 || day > 31)
	{
	cout << "Enter valid day: ";
	cin >> day;
	}
    check.set_day(day);
	cout << "Enter the month: " ;
	cin >> month;
	while (month < 1 || month > 12)
	{
	cout << "Enter the valid month: " ;
	cin >> month;
	}
    check.set_month(month);
	cout << "Enter the year: ";
	cin >> year;
    check.set_year(year);
	cout<<"DISPLAY\n";
    check.display1();
    check.display2();
    check.display3();
    return 0;
}