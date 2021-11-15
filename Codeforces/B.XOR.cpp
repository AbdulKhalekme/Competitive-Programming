#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int ar[n+4];
        cin>>n;
        for(int i=0; i<n; i++) cin>>ar[i];

        int resl=0;
        if(n%2==0) cout<<"YES"<<endl;
        else
        {
            for(int i=1; i<n; i++)
            {
                if(ar[i]<=ar[i-1])
                {
                    resl=1;
                    break;
                }
            }
            if(resl==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
