#include<iostream>
using namespace std;
int main(){
    int i,n;
    int arr[10];
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    cout<<"Reversed Array: ";
    for(i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
 
    return 0;
}
