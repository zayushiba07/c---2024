#include<iostream>
#include<string>
using namespace std;

class info {
private:
    int age;
    float weight;
    string name;
public:
    info() {
        cout << "Default constructor" << endl;
    }

    info(int a, string n, float w) {
        cout << "Parameterized constructor" << endl;
        age = a;
        name = n;
        weight = w;
    }

    ~info() {
        cout << "Destructor is called" << endl;
    }

    void display() {
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
        cout << "Weight is: " << weight << endl;
    }
};

class mark : public info {
private:
    int subj1, subj2;
public:
    mark() {
        cout << "Marks default constructor is called" << endl;
    }

    mark(int a, string n, float w, int m1, int m2) : info(a, n, w) {
        cout << "Marks parameterized constructor" << endl;
        subj1 = m1;
        subj2 = m2;
    }

    ~mark() {
        cout << "Marks destructor is called" << endl;
    }

    void display1() {
        cout << "Marks:" << endl;
        cout << subj1 << endl << subj2 << endl;
    }
};

int main() {
    int age, m1, m2;
    float weight;
    string name;

    cout << "Enter your name: ";
    cin >> name; // Accepts only one word (e.g., "Krushnraj")
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your weight: ";
    cin >> weight;
    cout << "Enter two subject marks: ";
    cin >> m1 >> m2;

    // Using parameterized constructor with collected data
    mark m1obj(age, name, weight, m1, m2);

    m1obj.display();
    m1obj.display1();

    return 0;
}
