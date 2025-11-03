//Lab 3 – Two-Way Selection (if...else Statement)
#include <iostream>
using namespace std;
int main()
{
    
    int grade;
    
    cout << "Enter Grade(0-100): ";
    cin >> grade;
    
    if (grade>=75){
        cout << "Result: Pass";
    } else {
        cout << "Result: Fail";
    }
        
    return 0;
}

//Lab 4 – Compound Statements

#include <iostream>
using namespace std;
int main()
{
    
    int grade;
    
    cout << "Enter Grade(0-100): ";
    cin >> grade;
    
    if (grade>=75){
        cout << "Result: Pass\n";
        cout << "Congratulations!\n";
        cout << "Keep up the work.";
    } else {
        cout << "Result: Fail";
    }
   
    return 0;
}

