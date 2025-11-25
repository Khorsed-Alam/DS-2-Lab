#include <iostream>
#include <string>
using namespace std;

struct person {
    string name;
    int day;
    int month;
    int year;

    void setName(string _name) {
        name = _name;
    }

    void setDOB(int _day, int _month, int _year) {
        day = _day;
        month = _month;
        year = _year;
    }

    void printName() {
        cout << "My name is: " << name << endl;
    }

    void printDOB() {
        cout << "My DOB is: " << day << " / " << month << " / " << year << endl;
    }
};

int main() {
    person person1;
    person1.setName("Khorsed");
    person1.setDOB(1, 4, 2000);

    person1.printName();
    person1.printDOB();

    return 0;
}
