/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,3,12,5,45,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            flag=false;
        }
    }
    if(flag==true) cout<<"yes";
    else cout<<"no";

    return 0;
}
