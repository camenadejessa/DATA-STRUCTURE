#include <iostream>
using namespace std;
int main ()
{
    
    int my_list[5]={10,20,30,40,50};
    
    cout << "Valid Index: " << my_list[1] << endl;
    cout << "Invalid Index: " << my_list[5] << endl;
    
    return 0;
}

//to prevent accessing invalid indices
#include <iostream>
using namespace std;
int main ()
{
    
    int my_list[5]={5,10,15,20,25};
    int my_index;
    
    cout << "Enter index(0-4): ";
    cin >> my_index;
    
    if (my_index>=0&&my_index<5){
        cout << "Element at index " << my_index << " is " << my_list[my_index] << endl;
    } else {
        cout << "Invalid Index!!!";
    }
    
    return 0;
}
