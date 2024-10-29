#include <iostream>
#include <string> 
using namespace std;

int main() 
{
    string firstName, lastName;
    int regNumber;
    string institutionName, departmentName;
    char section;
    float percentage;

    cout << "Personal Details:\n";

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "First Name: " << firstName << endl;
    
    cout << "Enter your last name: ";
    getline(cin, lastName);
    cout << "Last Name: " << lastName << endl;
    
    cout << "Enter your complete registration number: ";
    cin >> regNumber;
    
    cout << "Registration Number: " << regNumber << endl;
    cin.ignore();
    
    cout << "Enter your institution name: ";
    getline(cin, institutionName);
    cout << "Institution Name: " << institutionName << endl;
    
    cout << "Enter your department name: ";
    getline(cin, departmentName);
    cout << "Department Name: " << departmentName << endl;
    
    cout << "Enter your section (A/B): ";
    cin >> section;
    cout << "Section: " << section << endl;
    
    cout << "Enter your percentage in intermediate: ";
    cin >> percentage;
    if (percentage < 0 || percentage > 100) {
        cout << "Invalid percentage! Please enter a value between 0 and 100." << endl;
        return 1;
    }
    cout << "Percentage in Intermediate: " << percentage << "%" << endl;

    return 0;
}
