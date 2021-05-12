#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        if(n%i==0)
        {
            count++;

        }
    }
    if(count<=2)
        cout<<" prime number";
    else
        cout<<" not a prime number";
}