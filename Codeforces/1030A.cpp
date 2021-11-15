#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int easy=1;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==1)
        {
            easy=0;
        }
    }
    if(easy==0)
    {
        cout<<"HARD"<<endl;

    }
    else
    {
        cout<<"EASY"<<endl;
    }

    return 0;
}
