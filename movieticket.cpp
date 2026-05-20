#include<iostream>
#include<set>
#include<map>
using namespace std;

class MovieTicket {

private:

    set<pair<int,int>> bookings;
    map<int,int> movieCount;

public:

    bool book(int customerID, int movieID) {

        if(bookings.count({customerID,movieID}))
            return false;

        if(movieCount[movieID] >= 100)
            return false;

        bookings.insert({customerID,movieID});
        movieCount[movieID]++;

        return true;
    }

    bool cancel(int customerID, int movieID) {

        if(!bookings.count({customerID,movieID}))
            return false;

        bookings.erase({customerID,movieID});
        movieCount[movieID]--;

        return true;
    }

    bool is_booked(int customerID, int movieID) {

        return bookings.count({customerID,movieID});
    }

    int available_tickets(int movieID) {

        return 100 - movieCount[movieID];
    }
};

int main() {

    int Q;
    cin >> Q;

    MovieTicket m;

    while(Q--) {

        string query;
        cin >> query;

        if(query == "BOOK") {

            int x,y;
            cin >> x >> y;

            if(m.book(x,y))
                cout << "true\n";
            else
                cout << "false\n";
        }

        else if(query == "CANCEL") {

            int x,y;
            cin >> x >> y;

            if(m.cancel(x,y))
                cout << "true\n";
            else
                cout << "false\n";
        }

        else if(query == "IS_BOOKED") {

            int x,y;
            cin >> x >> y;

            if(m.is_booked(x,y))
                cout << "true\n";
            else
                cout << "false\n";
        }

        else if(query == "AVAILABLE_TICKETS") {

            int y;
            cin >> y;

            cout << m.available_tickets(y) << endl;
        }
    }

    return 0;
}