#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        cout << "Invalid number of students. Please enter a positive integer less than or equal to " << MAX_STUDENTS << "." << endl;
        return 1;  // Exit with an error code
    }

    // Arrays to store student information
    string names[MAX_STUDENTS];
    double test1[MAX_STUDENTS], test2[MAX_STUDENTS], test3[MAX_STUDENTS], attendance[MAX_STUDENTS];
    double finalGrades[MAX_STUDENTS];

    // Clear the input buffer
    cin.ignore();

    // Input student information and calculate final grades
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter the student's name: ";
        getline(cin, names[i]);

        cout << "Enter test score 1: ";
        cin >> test1[i];

        cout << "Enter test score 2: ";
        cin >> test2[i];

        cout << "Enter test score 3: ";
        cin >> test3[i];

        cout << "Enter attendance percentage: ";
        cin >> attendance[i];

        // Calculate the final grade with the specified weights
        finalGrades[i] = 0.7 * ((test1[i] + test2[i] + test3[i]) / 3.0) + 0.3 * attendance[i];

        // Clear the input buffer
        cin.ignore();
    }

    // Display student information and final grades with proper formatting
    cout << "\nStudent Grades:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student Name: " << setw(20) << left << names[i] << endl;
        cout << "Test Scores: " << setw(5) << right << test1[i] << setw(5) << right << test2[i] << setw(5) << right << test3[i] << endl;
        cout << "Attendance: " << setw(6) << right << attendance[i] << "%" << endl;
        cout << "Final Grade: " << setw(6) << right << fixed << setprecision(2) << finalGrades[i] << "\n" << endl;
    }

    return 0;
}


