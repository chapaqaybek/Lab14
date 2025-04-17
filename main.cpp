#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

//int main() {
    // Problem 1
    // ofstream file("output.txt");
    //     file << "Hello, File";
    //     file.close();
    //     return 0;


    // Problem 2
    // ifstream file("greetings.txt");
    // string line;
    //
    // while (getline(file, line)) {
    //     cout << line << endl;
    // }
    //
    // file.close();
    // return 0;

    // Problem 3
    // string name;
    // int age;
    //
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "Enter your age: ";
    // cin >> age;
    //
    // ofstream file("user.txt");
    // file << name << " " << age;
    // file.close();
    //
    // return 0;

    // Problem 4
    //     ifstream file("data.txt");
    //     string line;
    //
    //     while (getline(file, line)) {
    //         cout << line << endl;
    //     }
    //
    //     file.close();
    //     return 0;

    // // Problem 5
    // ifstream source("source.txt");
    // ofstream target("target.txt");
    //
    // string line;
    //
    // while (getline(source, line)) {
    //     target << line << endl;
    // }
    //
    // source.close();
    // target.close();
    //
    // return 0;

    // Problem 6
    // ifstream file("essay.txt");
    //
    // string word;
    // int count = 0;
    //
    // while (file >> word) {
    //     count++;
    // }
    //
    // file.close();
    //
    // cout << "Total words: " << count << endl;
    //
    // return 0;

    // Problem 7
    // ifstream file("numbers.txt");
    //
    // int num, sum = 0;
    //
    // while (file >> num) {
    //     sum += num;
    // }
    // file.close();
    // cout << "Sum: " << sum << endl;
    //
    // return 0;

    // Problem 8
    // ifstream file("values.txt");
    // int num;
    // int maxVal, minVal;
    //
    // if (file >> num) {
    //     maxVal = minVal = num;
    //
    //     while (file >> num) {
    //         if (num > maxVal) maxVal = num;
    //         if (num < minVal) minVal = num;
    //     }
    //
    //     cout << "Max: " << maxVal << ", Min: " << minVal << endl;
    // } else {
    //     cout << "File is empty or can't be read." << endl;
    // }
    // file.close();
    // return 0;
//}

// Problem 9
// struct Student {
//     int id;
//     string name;
//     float gpa;
// };
//
// int main() {
//     Student s;
//     cout << "Enter ID: ";
//     cin >> s.id;
//     cout << "Enter Name: ";
//     cin >> s.name;
//     cout << "Enter GPA: ";
//     cin >> s.gpa;
//
//     ofstream file("student.txt");
//
//     file << s.id << " " << s.name << " " << s.gpa << endl;
//     file.close();
//     cout << "Student data written to student.txt!" << endl;
//     return 0;
// }

// Problem 10
// struct Student {
//     int id;
//     string name;
//     float gpa;
// };
//
// int main() {
//     Student s;
//     ifstream file("student.txt");
//
//     file >> s.id >> s.name >> s.gpa;
//     file.close();  // Close the file
//     cout << "ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << endl;
//
//     return 0;
// }

// Problem 13
// struct Date {
//     int day;
//     int month;
//     int year;
// };
//
// int main() {
//     Date d;
//
//     cout << "Enter Day: ";
//     cin >> d.day;
//
//     cout << "Enter Month: ";
//     cin >> d.month;
//
//     cout << "Enter Year: ";
//     cin >> d.year;
//
//     cout << (d.day < 10 ? "0" : "") << d.day << "-"<< (d.month < 10 ? "0" : "") << d.month << "-"<< d.year << endl;
//     return 0;
// }

// Problem 14
// struct StudentInfo {
//     int ID;
//     int age;
//     string gender;
//     float score;
// };
//
// int main() {
//     StudentInfo s;
//
//     cout << "Enter ID: ";
//     cin >> s.ID;
//
//     cout << "Enter Age: ";
//     cin >> s.age;
//
//     cout << "Enter gender: ";
//     cin >> s.gender;
//
//     cout << "Enter score: ";
//     cin >> s.score;
//
//     cout << "Id = " << s.ID << " " << "Age = " << s.age <<" "<< "Gender = " << s.gender << "GGCA = " << s.score << endl;
//
//     return 0;
// }

// Problem 15
// struct StudentGrade {
//     int Lab[5];
//     int Homework[3];
//     int Exam[2];
// };
//
// int main() {
//     StudentGrade student = {
//         {20, 18, 19, 20, 18},
//         {25, 27, 28},
//         {45, 50}
//     };
//
//     int total = 0;
//     float average;
//     int count = 0;
//
//     for (int i = 0; i < 5; i++) {
//         total += student.Lab[i];
//         count++;
//     }
//
//     for (int i = 0; i < 3; i++) {
//         total += student.Homework[i];
//         count++;
//     }
//
//     for (int i = 0; i < 2; i++) {
//         total += student.Exam[i];
//         count++;
//     }
//     average = (float)total / count;
//
//     cout << "Total: " << total << ", Average: " << average << endl;
//
//     return 0;
// }

// Problem 16
// struct StudentInfo {
//     int Id;
//     int Age;
//     char Gender;
//     float CGA;
// };
//
// int main() {
//     StudentInfo students[3];
//
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter info for Student " << i + 1 << ":\n";
//         cout << "ID: ";
//         cin >> students[i].Id;
//         cout << "Age: ";
//         cin >> students[i].Age;
//         cout << "Gender (M/F): ";
//         cin >> students[i].Gender;
//         cout << "CGA: ";
//         cin >> students[i].CGA;
//         cout << endl;
//     }
//
//     cout << "Student Details:\n";
//     for (int i = 0; i < 3; i++) {
//         cout << "ID: " << students[i].Id << ", Age: " << students[i].Age << ", Gender: " << students[i].Gender
//         << ", CGA: " << students[i].CGA << endl;
//     }
//
//     return 0;
// }

// Problem 17
// struct StudentInfo {
//     int Id;
// };
//
// int main() {
//     StudentInfo student1;
//     student1.Id = 1;
//
//     StudentInfo student2 = student1;
//
//     cout << "Student1: Id = " << student1.Id << endl;
//     cout << "Student2: Id = " << student2.Id << " (copied)" << endl;
//
//     return 0;
// }

//Problem 18
// struct StudentInfo {
//     int Id;
//     int Age;
//     char Gender;
//     float GPA;
// };
//
// int main() {
//     StudentInfo students[5];
//
//     students[2].Id = 103;
//     students[2].Age = 18;
//     students[2].Gender = 'F';
//     students[2].GPA = 3.9;
//
//     students[4] = students[2];
//
//     cout << "Student 3:";
//     cout << "Id: " << students[2].Id
//          << ", Age: " << students[2].Age
//          << ", Gender: " << students[2].Gender
//          << ", GPA: " << students[2].GPA << endl;
//
//     cout << "Student 5 (copied from student 3):";
//     cout << "Id: " << students[4].Id
//          << ", Age: " << students[4].Age
//          << ", Gender: " << students[4].Gender
//          << ", GPA: " << students[4].GPA << endl;
//
//     return 0;
// }

// Problem 19
// struct DateBirthday {
//     int day;
//     int month;
//     int year;
// };
//
// struct BankAccount {
//     char Name[15];
//     int AccountNo;
//     float balance;
//     DateBirthday dob;
// };
//
// int main() {
//     BankAccount acc;
//
//     cout << "Enter Name: ";
//     cin >> acc.Name;
//
//     cout << "Enter Account Number: ";
//     cin >> acc.AccountNo;
//
//     cout << "Enter Balance: ";
//     cin >> acc.balance;
//
//     cout << "Enter Birth Day: ";
//     cin >> acc.dob.day;
//
//     cout << "Enter Birth Month: ";
//     cin >> acc.dob.month;
//
//     cout << "Enter Birth Year: ";
//     cin >> acc.dob.year;
//
//     cout << "\nAccount Info:\n";
//     cout << "Name: " << acc.Name << endl;
//     cout << "Account No: " << acc.AccountNo << endl;
//     cout << "Balance: $" << acc.balance << endl;
//     cout << "Birthday: " << acc.dob.day << "-" << acc.dob.month << "-" << acc.dob.year << endl;
//
//     return 0;
// }

// Problem 20
// struct Point {
//     float x;
//     float y;
// };
//
// struct Line {
//     Point p1;
//     Point p2;
// };
//
// int main() {
//     Line line;
//
//     // Step 3: Input points from user
//     cout << "Enter x and y for Point 1: ";
//     cin >> line.p1.x >> line.p1.y;
//
//     cout << "Enter x and y for Point 2: ";
//     cin >> line.p2.x >> line.p2.y;
//
//     float dx = line.p2.x - line.p1.x;
//     float dy = line.p2.y - line.p1.y;
//     float distance = ::sqrt(dx * dx + dy * dy);
//
//     cout << "Distance = " << distance << endl;
//
//     return 0;
// }

// Problem 21
// struct Point {
//     float x;
//     float y;
// };
// struct Triangle {
//     Point a, b, c;
// };
//
// float distance(Point p1, Point p2) {
//     return sqrt((p2.x - p1.x) * (p2.x - p1.x) +
//                 (p2.y - p1.y) * (p2.y - p1.y));
// }
//
// int main() {
//     Triangle t;
//
//     cout << "Enter coordinates for Point A (x y): ";
//     cin >> t.a.x >> t.a.y;
//
//     cout << "Enter coordinates for Point B (x y): ";
//     cin >> t.b.x >> t.b.y;
//
//     cout << "Enter coordinates for Point C (x y): ";
//     cin >> t.c.x >> t.c.y;
//
//     float ab = distance(t.a, t.b);
//     float bc = distance(t.b, t.c);
//     float ca = distance(t.c, t.a);
//
//     float perimeter = ab + bc + ca;
//
//     cout << "Perimeter = " << perimeter << endl;
//
//     return 0;
//}

// Problem 22
// struct Point {
//     int x, y;
// };
//
// struct Square {
//     Point vertex[4];
// };
//
// int main() {
//     Square sq;
//
//     cout << "Enter 4 vertices (x y) of the square:" << endl;
//     for (int i = 0; i < 4; i++) {
//         cout << "Vertex " << i + 1 << ": ";
//         cin >> sq.vertex[i].x >> sq.vertex[i].y;
//     }
//     int dx = sq.vertex[1].x - sq.vertex[0].x;
//     int dy = sq.vertex[1].y - sq.vertex[0].y;
//     float side = sqrt(dx * dx + dy * dy);
//
//     float area = side * side;
//     cout << "Area = " << area << endl;
//
//     return 0;
// }