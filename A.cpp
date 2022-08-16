#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    sort(begin(arr),end(arr),greater<>());
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
