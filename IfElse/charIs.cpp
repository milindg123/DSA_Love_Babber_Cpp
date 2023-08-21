#include <iostream>
using namespace std;

int main()
{
    char ch;
    // char 9;

    cout << "Enter the character: ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"This is lower case character";

    }
    else if(ch>='A' && ch<='Z'){
        cout<<"This is upper case character";
    }

    else if(ch>='0' && ch<='9'){
        cout<<"This is numeric character";
    }





}