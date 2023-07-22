#include<iostream>
using namespace std;

int main()
{
    long long int a, b;
    long long int sum=0;

    cin>>a>>b;

    sum = (a+b)*(b-a+1)/2;
    
    cout<<sum<<endl;
    return 0;
}
