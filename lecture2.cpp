#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*vector<int> vec;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);

    }
    for(int i=0;i<n;i++){
        printf("%d\n",vec[i]);

    }

    deque<int>dq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        dq.push_back(a);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",dq.back());
    }*/

    priority_queue<int>pq;

    int arr[20]={20,50,10,3,5,500,-20,-1,0};
    int n=9;
    printf("max heap\n");
    for(int i=0; i<n;i++){
        pq.push(arr[i]);
    }
    while(!pq.empty()){
        printf("%d\n",pq.top());
        pq.pop();
    }

    printf("min heap\n");

    for(int i=0; i<n;i++){
        pq.push(-arr[i]);
    }
    while(!pq.empty()){
        printf("%d\n",-pq.top());
        pq.pop();
    }
    return 0;
}
