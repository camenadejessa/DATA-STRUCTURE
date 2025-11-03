#include <iostream>
using namespace std;
int main () 
{
    
    int grade;
    int course_name;
    cout << "Enter grade(0-100): ";
    cin >> grade;
    cout << "Enter course code(1-3): ";
    cin >> course_name;
    
    if (grade>=75&&grade<=100){
        cout << "Result: Pass" << endl;
    } else if (grade>=0&&grade<75) {
        cout << "Result: Fail" << endl;
    } else {
        cout << "Invalid Grade\n";
    }
    
    switch (course_name){
        case 1:
            cout << "Course: Intermediate Programming";
            break;
        case 2:
            cout << "Course: Data Structure";
            break;
        case 3:
            cout << "Course: Fundamentals of Programming";
            break;
        default:
            cout << "Invalid course code";
    }
    return 0;
}
