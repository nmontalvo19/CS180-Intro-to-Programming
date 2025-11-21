 // gradesCheck.cpp
  // Inputs and Outputs
 
 #include <iostream>
 #include <cstdio> // for formatted output
 using namespace std;
 
 // Start the program
 int main() {
    // Declare an array for 5 grades
    float grades[5];
    // Initialize total and average
    float total = 0;
    float average;
    // Ask the user to enter 5 grade 
    for (int i = 0; i < 5; i++) {
        cout << "Enter grade #" << (i + 1) << ": ";
        cin >> grades[i];
    }
// Calculate the total
    for (int i = 0; i < 5; i++) {
        total += grades[i];
    }
     // Calculate the average
     average = total / 5;
 
// Display the total and the average
    cout << "Total: " << total << endl;
    printf("Average: %.2f\n", average);
 
// Check the letter grade
     if (average >= 90)
         cout << "Letter Grade: A" << endl;
     else if (average >= 80)
         cout << "Letter Grade: B" << endl;
     else if (average >= 70)
         cout << "Letter Grade: C" << endl;
     else if (average >= 60)
         cout << "Letter Grade: D" << endl;
     else
         cout << "Letter Grade: F" << endl;

return 0;
    }