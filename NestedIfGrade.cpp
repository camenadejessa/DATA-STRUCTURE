#include <iostream>
using namespace std;
int main ()
{
    
    int grade;
    
    cout << "Enter grade(0-100): ";
    cin >> grade;
    
    if (grade>=0&&grade<=100){
        if (grade>=90){
            cout << "Remark: Excellent";
        } else if (grade>=80){
            cout << "Remark: Very Good";
        } else if (grade>=75){
            cout << "Remark: Satisfactory";
        } else {
            cout << "Remark: Fail";
        }
    } else {
        cout << "Invalid Grade. Please Enter between 1-100";
    }
    
    return 0;
}
