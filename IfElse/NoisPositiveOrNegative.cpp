#include <iostream>
using namespace std;

int main()
{
    int a ;
    cout<< "Enter the no. of a" << endl;
    cin>> a;

    if(a<0)
    {
        cout <<" A is negative" << endl;
    }
    else if(a>0)
    {
        cout<< "A is positive" << endl;
    }
        
    else
    {
        cout<<"A is 0" << endl;
    }
}
