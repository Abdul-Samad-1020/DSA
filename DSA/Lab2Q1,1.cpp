#include <iostream>
using namespace std;

class rectangle {
private:
    double length;
public:
    double breadth;

    double area() {
        return (length * breadth);
    }

    double len() {  // Corrected method name
        return length;
    }

    rectangle(double length1, double breadth1) {  // Corrected spelling
        length = length1;
        breadth = breadth1;
    }
};

int main() {
    rectangle r1(3.5, 4.6);
    double a = r1.len();  
    double b = r1.breadth;
    
    cout << "The length is : " << a << endl;
	cout << "The breadth is : " << b << endl;
    cout << "The area is : " << r1.area() << endl;

    return 0;
}
