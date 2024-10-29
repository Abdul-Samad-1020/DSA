#include <iostream>
#include <string>
using namespace std;
class CricketPlayer {
private:
    string name;
    int age;
    int wickets_taken;
    int runs_scored;

public:
   
    CricketPlayer( string name, int age, int wickets_taken, int runs_scored) {
        this->name = name;
        this->age = age;
        this->wickets_taken = wickets_taken;
        this->runs_scored = runs_scored;
    }
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    int getWicketsTaken() const {
        return wickets_taken;
    }

    int getRunsScored() const {
        return runs_scored;
    }

    void setName(const  string& name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setWicketsTaken(int wickets_taken) {
        this->wickets_taken = wickets_taken;
    }

    void setRunsScored(int runs_scored) {
        this->runs_scored = runs_scored;
    }

    void displayInfo() const {
         cout << name << " is " << age << " years old and has taken " << wickets_taken << " wickets and scored " << runs_scored << " runs." <<  endl;
    }
};
int main() {
    CricketPlayer player1("Abdul samad", 19, 800, 10000);
    player1.displayInfo();
    player1.setName("Baber Azam");
    player1.setAge(45);
    player1.setWicketsTaken(900);
    player1.displayInfo();

    return 0;
}