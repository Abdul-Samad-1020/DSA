#include<iostream> 
using namespace std; 
class ectangle 
{ 
private: 
double length; 
public: 
double breadth; 
double area() 
                        { 
return(length*breadth); 
                        } 
doublelen() 
                        { 
return(length); 
                        } 
rectangle(double lenght1,double breadth1) 
                        { 
length=lenght1; 
breadth=breadth1; 
                        } 
}; 
int main() 
 
{ 
rectangle r1(3.5,4.6); 
double a=r1.len(); 
double b=r1.breadth; 
cout<< "The lenght is : " << a <<endl; 
cout<< "The breadth is : " << b <<endl; 
cout<< "The area is : " << r1.area() <<endl; 
return(0); 
 
