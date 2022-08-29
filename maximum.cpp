#include<iostream>
using namespace std;

int main()
{
   int x,y,max;
    cout << "enter value of x and y:";
    cin>>x>>y;
   if(x>y)
    cout<<x<<"is maximum than"<<y;
    if(x<y)
    cout<<y<<"is maximum than"<<x;
    return 0;
}