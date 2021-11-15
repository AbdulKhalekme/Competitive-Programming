#include<bits/stdc++.h>

using namespace std;
void fun ()
{
    long long a,b,c,d,sp,rm,n,tsp;
    cin>>a>>b>>c>>d;
    tsp = b;
    if(a>b)
    {
        if(c<=d)
        {
            tsp=-1;
        }
        else
        {
            rm=a-b;
            sp=c-d;

            if(rm%sp== 0)

                 n=rm/sp;

            else

                n=rm/sp + 1;
                tsp=tsp + (n * c);

        }

    }
    cout<< tsp << "\n";
}
int main()
{
    int t;
    cout.precision(2);
    cout<<fixed;
    cin>>t;
    while(t--)
    {
        fun();
    }

    return 0;
}

