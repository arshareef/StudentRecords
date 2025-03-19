#include <iostream>
using namespace std;

struct Student {
    int studentID;
    string firstName;
    string lastName;
    string course;
    float gpa;
};

int main() {
    int num;
    cout << "Enter number of students: ";
    cin >> num;
    cin.ignore();
    
    Student s[num]; 
    
    for (int i = 0; i < num; i++) {
        cout << "\nStudent " << i + 1 << " details:" << endl;
        cout << "ID: ";
        cin >> s[i].studentID;
        cin.ignore();
        cout << "First Name: ";
        getline(cin, s[i].firstName);
        cout << "Last Name: ";
        getline(cin, s[i].lastName);
        cout << "Course: ";
        getline(cin, s[i].course);
        cout << "GPA: ";
        cin >> s[i].gpa;
        cin.ignore();
    }
    
    cout << "\nSTUDENT RECORDS\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < num; i++) {
        cout << "ID: " << s[i].studentID << endl;
        cout << "Name: " << s[i].firstName << " " << s[i].lastName << endl;
        cout << "Course: " << s[i].course << endl;
        cout << "GPA: " << s[i].gpa << "\n";
        cout << "---------------------------------------------\n";
    }
    
    return 0;
}
