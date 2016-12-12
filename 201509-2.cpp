#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using  namespace  std;

int main(int argc, char** argv) 
{
  int year,day;
  int commonYearMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int month,date;
  cin >> year >> day;
  bool  leapYear = ( (!(year % 4) && (year % 100)) || !(year % 400)) ? 1 : 0;
  commonYearMonth[1] = leapYear ? 29 : 28; 

  for (month = 0;day > commonYearMonth[month];++ month)
  {
    day -= commonYearMonth[month];
  }
  ++ month;
  date = day;
  cout << month << endl << date ;
  
	return 0;
}
