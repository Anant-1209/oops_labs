#include <iostream>
#include <cstdio>
using namespace std;

class date {
    int day, month, year;

public:
    date(const char* d); // Corrected the constructor declaration
    date(int m, int d, int y);
    void show_date();
};

// Initialize using string.
date::date(const char* d) { // Corrected the constructor definition
    sscanf(d, "%d/%d/%d", &month, &day, &year); // Fixed the sscanf format specifier
}

// Initialize using integers.
date::date(int m, int d, int y) {
    day = d;
    month = m;
    year = y;
}

void date::show_date() {
    cout << month << "/" << day << "/" << year << "\n";
}

int main() {
    date ob1(12, 4, 2003), ob2("10/22/2003");
    ob1.show_date();
    ob2.show_date();
    return 0;
}
