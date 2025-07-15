#include <iostream>
#include <string>
using namespace std;

// Class representing details of a Lecture
class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // Constructor to initialize with default values
    Lecture() {
        lecturerName = "Not Assigned";
        subjectName = "Not Assigned";
        courseName = "Not Assigned";
        numberOfLectures = 0;
    }

    // Method to add lecture details (business logic)
    void addLectureDetails() {
        cout << "\nEnter Lecturer's Name: ";
        getline(cin, lecturerName);
        
        cout << "Enter Subject Name: ";
        getline(cin, subjectName);
        
        cout << "Enter Course Name: ";
        getline(cin, courseName);
        
        cout << "Enter Number of Lectures: ";
        cin >> numberOfLectures;
        cin.ignore(); // clear newline character from input buffer
    }

    // Method to display lecture details (business logic)
    void displayLectureDetails() const {
        cout << "\n--- Lecture Information ---" << endl;
        cout << "Lecturer Name     : " << lecturerName << endl;
        cout << "Subject Name      : " << subjectName << endl;
        cout << "Course Name       : " << courseName << endl;
        cout << "No. of Lectures   : " << numberOfLectures << endl;
    }
};

// Main function to interact with the user
int main() {
    const int MAX_LECTURERS = 5;
    Lecture lectures[MAX_LECTURERS];  // Array of 5 Lecture objects
    int choice;
    int currentCount = 0;

    cout << "======== Lecture Management System ========" << endl;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add Lecture Details\n";
        cout << "2. Display All Lecture Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // clear buffer after number input

        if (choice == 1) {
            if (currentCount < MAX_LECTURERS) {
                cout << "\nEntering details for Lecturer " << currentCount + 1 << ":" << endl;
                lectures[currentCount].addLectureDetails();  // Call method to add details
                currentCount++;
            } else {
                cout << "Maximum 5 lecturer details allowed.\n";
            }
        } else if (choice == 2) {
            if (currentCount == 0) {
                cout << "No lecturer details available yet.\n";
            } else {
                for (int i = 0; i < currentCount; ++i) {
                    cout << "\nLecturer " << i + 1 << ":" << endl;
                    lectures[i].displayLectureDetails();  // Call method to display
                }
            }
        } else if (choice == 3) {
            cout << "Exiting the system. Thank you!" << endl;
            break;
        } else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
