#include <iostream>
using namespace std;

class Bank {
    string id[100];     // store user IDs
    int balance[100];   // store balances
    int size = 0;       // number of users

public:
    // find index of user
    int findUser(string x) {
        for (int i = 0; i < size; i++) {
            if (id[i] == x)
                return i;
        }
        return -1;
    }

    // CREATE
    bool create(string x, int y) {
        int idx = findUser(x);
        if (idx == -1) {
            id[size] = x;
            balance[size] = y;
            size++;
            return true;
        } else {
            balance[idx] += y;
            return false;
        }
    }

    // DEBIT
    bool debit(string x, int y) {
        int idx = findUser(x);
        if (idx == -1 || balance[idx] < y)
            return false;

        balance[idx] -= y;
        return true;
    }

    // CREDIT
    bool credit(string x, int y) {
        int idx = findUser(x);
        if (idx == -1)
            return false;

        balance[idx] += y;
        return true;
    }

    // BALANCE
    int getBalance(string x) {
        int idx = findUser(x);
        if (idx == -1)
            return -1;

        return balance[idx];
    }
};

int main() {
    Bank b;
    int Q;

    cout << "Enter number of queries: ";
    cin >> Q;

    while (Q--) {
        string type;
        cout << "\nEnter query: ";
        cin >> type;

        if (type == "CREATE") {
            string id;
            int amt;
            cout << "Enter ID and amount: ";
            cin >> id >> amt;
            cout << b.create(id, amt) << endl;
        }
        else if (type == "DEBIT") {
            string id;
            int amt;
            cout << "Enter ID and amount: ";
            cin >> id >> amt;
            cout << b.debit(id, amt) << endl;
        }
        else if (type == "CREDIT") {
            string id;
            int amt;
            cout << "Enter ID and amount: ";
            cin >> id >> amt;
            cout << b.credit(id, amt) << endl;
        }
        else if (type == "BALANCE") {
            string id;
            cout << "Enter ID: ";
            cin >> id;
            cout << b.getBalance(id) << endl;
        }
        else {
            cout << "Invalid query!" << endl;
        }
    }

    return 0;
}