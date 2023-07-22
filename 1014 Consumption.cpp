#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a;
    float b;

    cin>>a;
    cin>>b;

    float x = (a/(float)b);

    cout<<fixed<<setprecision(3)<<x<<" "<<"km/l"<<"\n";

    return 0;
}
