#include<bits/stdc++.h>
using namespace std;


void printChararray1(char a[])
{
    if(a[0]=='\0')
        return;
    else
        cout<<a[0]<<endl;
    printChararray1(a+1);
}
void printChararray2(char a[],int s, int i)
{
    if(s==i)
        return;
    else
        cout<<a[i]<<endl;
    printChararray2(a,s,i+1);
}


void printreverseChararray1(char a[],int s, int i)
{
    if(i<0)
        return;
    else
        cout<<a[i]<<endl;
    printreverseChararray1(a,s,i-1);
}

void printreverseChararray2(char a[])
{
    if(a[0]=='\0')
        return;
    else

    printreverseChararray2(a+1);
     cout<<a[0]<<endl;
}

int main()
{

 char str[]="abcd";
 int len=strlen(str);

 cout<<"Printing recursively array-1"<<endl;
 printChararray1(str);

 cout<<"Printing recursively array-2"<<endl;
 printChararray2(str,len,0);

 cout<<"printing reverse recursively-1"<<endl;
 printreverseChararray1(str,len,len-1);

  cout<<"printing reverse recursively-2"<<endl;
 printreverseChararray2(str);

}
