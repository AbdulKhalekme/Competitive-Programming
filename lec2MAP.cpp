#include<bits/stdc++.h>

using namespace std;

map<pair<int, int>,int>mmp;
int main()
{
    int q;
    scanf("%d",&q);
    while(q--){
        pair<int,int>pp;
        scanf("%d%d",&pp.first,&pp.second);
//    int ans;
//    if(mmp[pp]==1)ans=1;
//    else{
//        ans=0;
//        mmp[pp]=1;
//    }
//    printf("%d\n",ans);
     mmp[pp]++;
     printf("%d\n",mmp[pp]);
    }
    return 0;
}
