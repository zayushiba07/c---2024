#include<iostream>
#include<string.h>
using namespace std;

class detalis {
private:
    char fname[25];
    char mname[25];
    char lname[25];
public:
    detalis(char f[], char m[], char l[]) {
        strcpy(fname, f);
        strcpy(mname, m);
        strcpy(lname, l);
    }
    void show() {
        cout << "First name: " << fname << endl;
        cout << "Middle name: " << mname << endl;
        cout << "Last name: " << lname << endl;
    }
};

class marks {
private:
    int mark1, mark2, ans;
public:
    marks(int m1, int m2) {
        mark1 = m1;
        mark2 = m2;
        ans = mark1 + mark2;
    }
    int getTotal() {
        return ans;
    }
    void show() {
        cout << "Mark 1: " << mark1 << endl;
        cout << "Mark 2: " << mark2 << endl;
        cout << "Total: " << ans << endl;
    }
};

class result : public detalis, public marks {
private:
    float avg;
public:
    result(char f[], char m[], char l[], int m1, int m2)
        : detalis(f, m, l), marks(m1, m2) {
        avg = getTotal() / 2.0;
    }
    void rshow() {
        detalis::show();
        marks::show();
        cout << "Average: " << avg << endl;
    }
};

int main() {
    result r1("zala", "ayushiba", "shivbhdrasinh", 50, 50);
    r1.rshow();
    return 0;
}
