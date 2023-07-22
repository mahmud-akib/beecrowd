#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}
