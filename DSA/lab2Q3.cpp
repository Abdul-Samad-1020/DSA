#include<string>
using namespace std;

class CricketPlayer {
private:
    string name;
    int age;
    int wicketsTaken;
    int runsScored;

public:
    CricketPlayer(string playerName = "", int playerAge = 0, int playerWickets = 0, int playerRuns = 0) {
        name = playerName;
        age = playerAge;
        wicketsTaken = playerWickets;
        runsScored = playerRuns;
    }; 

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    int getWicketsTaken() {
        return wicketsTaken;
    }
    int getRunsScored() {
        return runsScored;
    }
    void setName(string newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setWicketsTaken(int newWickets) {
        wicketsTaken = newWickets;
    }

    void setRunsScored(int newRuns) {
        runsScored = newRuns;
    }
};

int main() {
    CricketPlayer player1("Babar azam", 32, 50, 10000);
    cout << "Player Name: " << player1.getName() << endl;
    cout << "Age: " << player1.getAge() << endl;
    cout << "Wickets Taken: " << player1.getWicketsTaken() << endl;
    cout << "Runs Scored: " << player1.getRunsScored() << endl;

    player1.setName(12000);
    player1.setAge(33);
    player1.setWicketsTaken(60);
    player1.setRunsScored(12000);

    cout << "Updated Player Information:" << endl;
    cout << "Player Name: " << player1.getName() << endl;
    cout << "Age: " << player1.getAge() << endl;
    cout << "Wickets Taken: " << player1.getWicketsTaken() << endl;
    cout << "Runs Scored: " << player1.getRunsScored() << endl;

    return 0;
}