/*3.12 ( Date Class) Create a class called Date that includes three pieces
 of information as data members—a month (type int ), a day (type int ) and 
a year (type int ). Your class should have a constructor with three parameters
that uses the parameters to initialize the three data members. For the purpose 
of this exercise, assume that the values provided forthe year and day are correct,
but ensure that the month value is in the range 1–12; if it isn’t, set the month to 1.
Provide a set and a get function for each data member. Provide a member function 
displayDate that displays the month, day and year separated by forward slashes ( / ).
Write a test program that demonstrates class Date ’s capabilities.(c++ how to program)*/
//program display the date .

#include <iostream>
using namespace std ;
#include "date-class.h"
int main(){
date test(15,1,2020) ; 
cout << test.getMonth()<<"/"<<test.getDay()<<"/"<<test.getYear() << endl ;


cout << test.displayDate() << endl ;
int month (0) , day(0) , year(0) ;
cout << " set new date mm:dd:yyyy " ;
cin >> month >>day >>year ; 
test.setMonth(month) ;
test.setDay(day);
test.setYear(year) ;

cout << test.displayDate() << endl ;

    

}