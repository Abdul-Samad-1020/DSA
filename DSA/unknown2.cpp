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
    
    cout <<"Personal Details:\n";
    
    cout<<"Enter your first name: ";
	cin>>firstName;
	cout << "First Name: "<< firstName << endl;
	
	cout <<"Enter your last name: ";
    cin>>lastName;
    cout << "Lsajfast Name: "<< lastName << endl;
    
    cout <<"Enter your complete registration number: ";
    cin>>regNumber; 
    cout << "Registration number: "<< regNumber << endl;
     cin.ignore();
    cout << "Enter your institution name: ";
    getline(cin, institutionName);
    cout << "Institution Name: " << institutionName << endl;
     cin.ignore();
    cout << "Enter your department name: ";
    getline(cin, departmentName);
    cout << "Department Name: " << departmentName << endl;
    
    cout << "Enter your section (A/B): ";
    cin>>section;
    cout << "Section: " << section << endl;
    
    cout << "Enter your percentage in intermediate: ";
    cin >> percentage;
    cout << "Percentage in Intermediate: " << percentage << "%"<< endl;
 return 0;
}