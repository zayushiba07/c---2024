#include <iostream>
#include <fstream>
using namespace std;
int main() {   
 // Step 1: Create ofstream object
ofstream file;
 // Step 2: Open the file (creates it if it doesn’t exist)
    file.open("students.txt",ios::app);  
    // Step 3: Check if the file opened successfully
    if (file.is_open()) 
    { 
        // Step 4: Write data
        file<<"my name is ayushiba\n";
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
