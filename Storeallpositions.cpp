#include<bits/stdc++.h>

using namespace std;

void storepositionsusingvector(int a[],int n, int key, int i,vector<int> &v)
{
    //int cnt=0;
    if (i==n)
        return;

    else if(a[i]==key)
        v.push_back(i);
    storepositionsusingvector(a,n,key,i+1,v);


}

void storepositionsusingarray(int a[],int n, int key, int i,int b[],int j)
{
   // int j=0;
    if (i==n)
        return;

    else if(a[i]==key){
        b[j]=i;
        //cout<<"b[j] = "<<b[j]<<endl;
        j++;
        //storepositionsusingarray(a,n,key,i+1,b,j+1);
    }
    storepositionsusingarray(a,n,key,i+1,b,j);


}
int main()
{

    int a[6]={4,5,5,5,7,8};
    int b[6]={-1};
    vector<int> v;

    cout<<"Storage of occurrence of element "<<endl;
    storepositionsusingvector(a,6,5,0,v);

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;

        cout<<"Using array "<<endl;
    storepositionsusingarray(a,6,5,0,b,0);
        for(int i=0;i<6;i++)
        cout<<b[i]<<endl;
   // cout<<cnt<<endl;
}
