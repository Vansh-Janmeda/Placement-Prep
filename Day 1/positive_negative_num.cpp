/* Positive or Negative number */
#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter any number: ";
    int a;
    cin>>a;
    if(a>0){
        cout<<"Positive number";
    }
    else if(a==0){
        cout<<"The number is 0";
    }
    else{
        cout<<"The number is negative";
    }

    return 0;
}