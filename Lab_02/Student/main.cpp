#include <iostream>
#include "Student.h"
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int studentIndex;
    vector<Student> students;

    // Creating Student objects and adding them to the vector
    Student student1("Yehria", "Yevhenii", 3674545, 8.20);
    students.push_back(student1);

    Student student2("Anasablu", "Vlad", 4565634, 4.20);
    students.push_back(student2);

    Student student3("Bnasablu", "Vlad", 4565634, 5.20);
    students.push_back(student3);

    Student student4("Cnasablu", "Vlad", 4565634, 9.20);
    students.push_back(student4);

    cout << "------------------------------------------" << endl;

    // Sort students by last name
    sort(students.begin(), students.end(), comparaNume);

    // Print sorted list of students
    cout << "Sorted by Last Name:" << endl;
    for (const auto &student : students) {
        student.Print();
    }
    cout << "------------------------------------------" << endl;

    // Prompt user to enter index of student
    cout << "Enter the index of the student you are looking for: ";
    cin >> studentIndex;
    cout << "------------------------------------------" << endl;

    // Validate index and print corresponding student information
    if (studentIndex >= 0 && studentIndex < students.size()) {
        students[studentIndex].Print();
    } else {
        cout << "No student found at this index." << endl;
    }
    cout << "------------------------------------------" << endl;

    // Sort students by average grade
    sort(students.begin(), students.end(), comparaMedie);

    // Print sorted list of students by average grade
    cout << "Sorted by Average Grade:" << endl;
    for (const auto &student : students) {
        student.Print();
    }
    cout << "------------------------------------------" << endl;

    return 0;
}