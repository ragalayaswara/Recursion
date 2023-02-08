#include<iostream>
using namespace std;

int lastIndex(int a[],int n, int key, int i)
{
    int pos=-1;
    if (i==n)
        return -1;

    else{
        pos= lastIndex(a,n,key,i+1);
        if(pos==-1)
        {
            if(a[i]==key)
                return i;
            else
                return -1;
        }
        return pos;

    }

}

int main()
{

    int a[6]={4,5,6,5,7,8};

    cout<<"Position at which element is found "<<endl;
    int lastind=lastIndex(a,6,5,0);

    cout<<lastind<<endl;
}
