#include <iostream>
using namespace std;

#define SIZE 10

struct Student {
    int roll;
    string name;
    string courses[5];
    int count;
    Student* next;
};

Student* table[SIZE] = {NULL};

// Register Student
void addStudent() {
    Student* s = new Student;

    cout << "Enter Roll Number: ";
    cin >> s->roll;

    cout << "Enter Name: ";
    cin >> s->name;

    s->count = 0;

    int index = s->roll % SIZE;

    s->next = table[index];
    table[index] = s;

    cout << "Student Registered!\n";
}

// Display Students
void displayStudents() {
    for (int i = 0; i < SIZE; i++) {
        Student* temp = table[i];

        while (temp != NULL) {
            cout << "\nRoll Number: " << temp->roll;
            cout << "\nName: " << temp->name;
            cout << "\nCourses: ";

            for (int j = 0; j < temp->count; j++)
                cout << temp->courses[j] << " ";

            cout << endl;
            temp = temp->next;
        }
    }
}

// Search Student
void searchStudent() {
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;

    int index = roll % SIZE;
    Student* temp = table[index];

    while (temp != NULL) {
        if (temp->roll == roll) {
            cout << "Student Found!";
            cout << "\nName: " << temp->name << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Student Not Found!\n";
}

// Update Student
void updateStudent() {
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;

    int index = roll % SIZE;
    Student* temp = table[index];

    while (temp != NULL) {
        if (temp->roll == roll) {
            cout << "Enter New Name: ";
            cin >> temp->name;

            cout << "Student Updated!\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Student Not Found!\n";
}

// Enroll Course
void enrollCourse() {
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;

    int index = roll % SIZE;
    Student* temp = table[index];

    while (temp != NULL) {
        if (temp->roll == roll) {
            if (temp->count == 5) {
                cout << "Course Limit Reached!\n";
                return;
            }

            cout << "Enter Course Name: ";
            cin >> temp->courses[temp->count];

            temp->count++;

            cout << "Course Enrolled!\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Student Not Found!\n";
}

// Withdraw Course
void withdrawCourse() {
    int roll;
    string course;

    cout << "Enter Roll Number: ";
    cin >> roll;

    int index = roll % SIZE;
    Student* temp = table[index];

    while (temp != NULL) {
        if (temp->roll == roll) {
            cout << "Enter Course Name: ";
            cin >> course;

            for (int i = 0; i < temp->count; i++) {
                if (temp->courses[i] == course) {
                    for (int j = i; j < temp->count - 1; j++)
                        temp->courses[j] = temp->courses[j + 1];

                    temp->count--;

                    cout << "Course Withdrawn!\n";
                    return;
                }
            }

            cout << "Course Not Found!\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Student Not Found!\n";
}

// Remove Student
void removeStudent() {
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;

    int index = roll % SIZE;

    Student* temp = table[index];
    Student* prev = NULL;

    while (temp != NULL) {
        if (temp->roll == roll) {
            if (prev == NULL)
                table[index] = temp->next;
            else
                prev->next = temp->next;

            delete temp;
            cout << "Student Removed!\n";
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    cout << "Student Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- STUDENT REGISTRATION ---";
        cout << "\n1. Register Student";
        cout << "\n2. Update Student";
        cout << "\n3. Enroll Course";
        cout << "\n4. Withdraw Course";
        cout << "\n5. Display Students";
        cout << "\n6. Search Student";
        cout << "\n7. Remove Student";
        cout << "\n8. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: updateStudent(); break;
            case 3: enrollCourse(); break;
            case 4: withdrawCourse(); break;
            case 5: displayStudents(); break;
            case 6: searchStudent(); break;
            case 7: removeStudent(); break;
            case 8: cout << "Exiting...";
                    break;
            default: cout << "Invalid Choice!";
        }

    } while (choice != 8);

    return 0;
}
