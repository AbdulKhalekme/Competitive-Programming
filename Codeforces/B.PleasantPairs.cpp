#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int ar[n+2];

        for(int i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        long long int ans=0;
        for(int i=2; i<=n; i++)
        {
            int j=i+i-1;
            if(ar[i]>j)continue;

            int z=(j%ar[i]+1);
            int y=i-z;
            while(y>=1)
            {
                if(i+y==ar[i]*ar[y])ans++;
                {
                    y-=ar[i];
                }
            }

        }

        cout<<ans<<endl;
    }
    return 0;
}
