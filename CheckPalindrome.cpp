#include<iostream>
using namespace std;


bool checkpalindrome(int a[],int i, int j)
{
    if(i>j)
        return true;
    else{
        if(a[i]==a[j])
            return checkpalindrome(a,i+1,j-1);
        else
            return false;
    }

}

int main()
{

    int a[6]={4,5,6,6,7,4};
    bool res=false;

    cout<<"Check for palindrome or not "<<endl;
    res=checkpalindrome(a,0,5);

    if(res)
        cout<<"Palindrome"<<endl;
    else
        cout<<"not a palindrome"<<endl;

    //cout<<lastind<<endl;
}
