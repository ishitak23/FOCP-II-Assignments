#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

    string name;

    cout << "Enter name: ";
    getline(cin, name);

    vector<string> roasts = {

        name + " writes code so slowly that even a turtle gets impatient.",

        "If procrastination had a champion, it would be " + name + ".",

        name + " debugs by staring at the screen until the bug disappears.",

        name + " makes syntax errors in comments too.",

        name + " thinks Ctrl+C and Ctrl+V are programming skills.",

        "Even calculator apps fear " + name + "'s coding.",

        name + " once spent 2 hours fixing a missing semicolon.",

        name + "'s code runs only on good luck.",

        name + " can turn simple loops into mysteries.",

        name + " writes bugs faster than code."
    };

    srand(time(0));

    int randomIndex = rand() % roasts.size();

    cout << roasts[randomIndex];

    return 0;
}