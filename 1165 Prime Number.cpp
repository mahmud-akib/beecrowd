#include<iostream>
using namespace std;

int main()
{
    int a, n;
    cin>>n;
    for(int i=0; i<n; i++){
    int count=0;
    cin>>a;
    for(int i=2; i<a; i++){
        if(a%i==0){
            count++;
            break;
        }
    }
    if(count == 0){
        cout<<a<<" "<<"eh primo"<<endl;
    }
    else{
        cout<<a<<" "<<"nao eh primo"<<endl;
    }
    }
    return 0;
}
