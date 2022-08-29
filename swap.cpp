#include<iostream>
using namespace std;

int main()
{
   int x,y,swap;
    cout << "enter value of x and y:";
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"value of"<<x<<"and"<<y<<"after swapping";
    return 0;
}