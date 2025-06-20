#include <iostream>
#include <fstream>
using namespace std;
int main() {   
 // Step 1: Create ofstream object
ofstream file;
 // Step 2: Open the file (creates it if it doesn’t exist)
    file.open("students.txt");  
    // Step 3: Check if the file opened successfully
    if (file.is_open()) 
    { 
        // Step 4: Write data
        file << "Name: Alice\n";
        file << "Score: 95\n";
        file << "Name: Bob\n";
        file << "Score: 88\n"; 
        // Step 5: Close the file
        file.close(); 
        cout << "Data written to students.txt successfully!\n";   
    } 
else
 {  
     cout << "Error: Could not open the file!\n";  
 }
return 0;
 }
