#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[7]={10,20,30,40,50,87,100};
int lookFound=25;
int Ispresent = false;
for(int i=1;i<7;i++){
    if(arr[i]==lookFound){
        Ispresent=true;
        break;
    }
}
if(Ispresent){
        printf("%d found\n",lookFound);
    }else{
       printf("%d not found\n",lookFound);
    }
 return 0;
}
