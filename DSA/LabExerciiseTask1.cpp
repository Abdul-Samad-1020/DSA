# include <iostream> 
using namespace std; 
struct date  
{ 
int day; 
int month; 
int year; 
}; 
int main ( ) 
{ 
struct date today; 
today.day=4; 
today.month=10; 
today.year=2000; 
cout<<"\nToday\s day is : "<<today.day<<"/"<<today.month<<"/"<<today.year; 
return 0; 
}