#include <iostream>
using namespace std;

class employee {
    int num, basic;
    long da, it, netsal, gsal;
    char name[20];

public:
    void read();
    void disp();
    void calc();
};

void employee::read() {
    cout << "Enter employee id, name & basic salary: ";
    cin >> num >> name >> basic;
}

void employee::calc() {
    da = (0.52) * basic;
    gsal = da + basic;
    it = (0.3) * gsal;
    netsal = basic + da - it;
}

void employee::disp() {
    cout << num << "\t" << name << "\t\t\t" << basic << "\t\t" << da << "\t\t" << it << "\t\t"
         << gsal << "\t" << netsal << "\n";
}

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    employee e[n], *p;
    for (int i = 0; i < n; i++) {
        p = &e[i];
        p->read();
        p->calc();
    }

    cout << " Eid\t\tName\t\tBasic Salary\tDA\t\tGross Salary\tIncome Tax\tNet Salary\n";
    for (int i = 0; i < n; i++) {
        p = &e[i];
        p->disp();
    }
    return 0;
}
