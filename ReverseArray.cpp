#include <iostream>
using namespace std;

int main()
{
    int a[4]={1,2,3,4};

    int size=(sizeof(a)/sizeof(a[0]));

    int low=0;
    int high=size-1;

    cout<<"Printing array "<<endl;
    for(int j=0;j<size;j++)
        cout<<a[j]<<" ";

    for(int i=0;i<size;i++){
        if(low < high)
        {
            int temp=0;
            temp=a[low];
            a[low]=a[high];
            a[high]=temp;
            low++;
            high--;
        }
        else break;
    }

    cout<<"Printing reversed array "<<endl;
    for(int j=0;j<size;j++)
        cout<<a[j]<<" ";



}
