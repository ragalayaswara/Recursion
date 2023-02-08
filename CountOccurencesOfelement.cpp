#include<iostream>
using namespace std;

void countoccurences(int a[],int n, int key, int i,int &cnt)
{
    //int cnt=0;
    if (i==n)
        return;

    else if(a[i]==key)
        cnt++;

    countoccurences(a,n,key,i+1,cnt);


}

int main()
{

    int a[6]={4,5,5,5,7,8};
    int cnt=0;

    cout<<"Count of occurrence of element "<<endl;
    countoccurences(a,6,5,0,cnt);

    cout<<cnt<<endl;
}
