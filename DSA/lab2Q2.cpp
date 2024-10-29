#include<iostream>
using namespace std;

class rectangle 
{
private:
    double length;
public:
    double breadth;
    void lengthDim() 
    {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
    }
    double area() 
    {
        return (length * breadth);
    }
};

int main() 
{
    rectangle r1;
    r1.lengthDim();
    cout << "Enter the breadth of the rectangle: ";
    cin >> r1.breadth;
    cout << "The area is : " << r1.area() << endl;
    return 0;
}