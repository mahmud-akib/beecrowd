#include<iostream>
using namespace std;

int main()
{


    int n,r,person,flag;
    while(cin>>n>>r)
    {
        flag = 0;

        int track[n+1];
        for(int i = 1; i<n+1; i++)
        {
            track[i] = 0;
        }
        for(int i = 0; i<r; i++)
        {
            cin>>person;
            track[person] = 1;
        }

        for(int i = 1; i<n+1; i++)
        {
            if(track[i]==0)
            {
                cout<<i<<" ";
                flag=1;


            }
        }
        if(flag==0)
            cout<<'*';
        cout<<endl;
    }

    return 0;
}
