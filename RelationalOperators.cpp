#include <iostream>
using namespace std;
int main() 
{
    
    int a = 5;
    int b = 10;
    int c = 5;
    
    cout << "RELATIONAL OPERATOR: \n\n";
    cout << "a == b: " << (a == b) << endl;
    cout << "a != c: " << (a != c) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "b > c: " << (b > c) << endl;
    cout << "(a + c) <= b: " << ((a + c) <= b) << endl;
    cout << "'A' < 'a': " << ('A' < 'a');
    cout << "\nExplanation: In C++, characters are compared using their ASCII values." << endl;
    cout << "The ASCII value of 'A' is 65, while 'a' is 97." << endl;
    cout << "Since 65 < 97, the expression ('A' < 'a') is TRUE (outputs 1)." << endl;
    
    return 0;
}
