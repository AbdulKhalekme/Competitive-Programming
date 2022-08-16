#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    int arr[]={10,20,36,-50,-1,0,12};
    int n=7;
    set<int> ::iterator it;

    for(int i=0; i<n;i++) st.insert(arr[i]);
     int count=0;

    for(it=st.begin();it!=st.end();it++){

        printf("%d\n",*it);
        count++;
    }
    printf("total value:%d\n",count);
    st.erase(0);
    printf("after erase\n");

    count=0;
    for(it=st.begin();it!=st.end();it++){

        printf("%d\n",*it);
        count++;

    }
    printf("total value:%d\n",count);
    return 0;
}
