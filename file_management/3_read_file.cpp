#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("students.txt");  // Open file for reading

    if (!file.is_open()) {
        cout << "Error opening file" <<endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {  // Read line by line
        cout << line <<endl;
    }

    file.close();  // Close the file
    return 0;
}