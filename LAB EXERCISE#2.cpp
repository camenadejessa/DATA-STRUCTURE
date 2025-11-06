#include <iostream>
using namespace std;
int main () 
{
    double sum = 0;
    double average;
    double sales[]={12.25, 32.50, 16.90, 23.00, 46.68};
    int num= sizeof(sales)/sizeof(sales[0]);
    
    cout << "SALES: " << endl;
    
    for (int i=0;i<num;i++){
        cout << sales[i] << endl;
        sum+=sales[i];
    }
    
    average=sum/num;
    
    cout << "\nAverage sales: " << average << endl;
    
    return 0;
}

//3 VALUES

#include <iostream>
using namespace std;
int main ()
{  
    double sum=0, average;
    double sales[] = {12.25, 32.50, 16.90};
    int num = sizeof(sales)/sizeof(sales[0]);
    
    cout << "Sales: " << endl;
    
    for (int i = 0;i<num;i++){
        cout << sales[i] << endl;
        sum+=sales[i];
    }
    
    average=sum/num;
    
    cout << "\nAverage sales: " << average << endl;
    
    return 0;
}
