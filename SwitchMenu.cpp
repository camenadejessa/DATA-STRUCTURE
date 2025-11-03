#include <iostream>
using namespace std;
int main ()
{
    
    double radius, length, width, area1, area2;
    const double pi = 3.14159;
    int choice;
     
    cout << "1. Compute Area of Circle.\n";
    cout << "2. Compute Area of Rectangle.\n";
    cout << "3. Exit\n\n";
    cout << "Enter a choice: ";
    cin >> choice;
    
    
    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            
            area1 = pi*radius*radius;
            cout << "Area of Circle: " << area1;
            break;
        case 2:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            
            area2 = length*width;
            cout << "Area of Rectangle: " << area2;
            break;
        case 3:
            cout << "Goodbye!";
            break;
        default:
            cout << "Invalid Choice.";
    }
    
    
    return 0;
}
