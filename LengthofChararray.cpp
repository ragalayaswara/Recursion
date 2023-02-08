
#include <bits/stdc++.h>
using namespace std;

int lengthofchararray(char a[])
{
    if(a[0]=='\0')
        return 0;
    else
       return (1+ lengthofchararray(a+1));
}

int main()
{

    char str[]="abcde";

    cout<<"Length of char array "<<endl;
    cout<<lengthofchararray(str)<<endl;
}
