#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    vector<string> excuses = {

        name + " could not finish the assignment because the laptop battery died.",

        name + " was about to submit the homework when the WiFi stopped working.",

        name + " accidentally deleted the assignment file.",

        name + " tried finishing the assignment but the keyboard stopped working.",

        name + " had a power cut during submission.",

        name + " forgot to save the code before closing the laptop.",

        name + " was updating the system for hours.",

        name + " lost the assignment because the software crashed.",

        name + " spent all night debugging one semicolon error.",

        name + " thought the deadline was tomorrow."
    };

    srand(time(0));

    int randomIndex = rand() % excuses.size();

    cout << excuses[randomIndex];

    return 0;
}