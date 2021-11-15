#include <iostream>
#include <string>
using namespace std;

void fun(string letter)

{
    int i;
    char x;
    for ( i = 0; i < letter.length(); i++)
    {
        x= letter.at(i);
    }

    if(x%2!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    //cout << int(x) << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s;
        cin >>s;
        fun(s);
    }
    t--;
    return 0;
}
