#include<iostream>
using namespace std;
int main(){
   int arr[10],n,count=0;
   cout<<"Enter number of elements:";
   cin>>n;
   cout<<"Elements in an array:";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
int temp;
   for(int j=0; j<n-1; j++){
    for(int k=0; k<n-j-1;k++){
        if(arr[k]>arr[k+1]){
        int temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
     
    }
   } 
}
 cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   
cout<<"\nDistinct Elements:";  
 for(int a = 0; a < n-1; a++){
    if( arr[a] != arr[a+1]){
        cout<< arr[a] <<" ";
    }
}

cout<<arr[n-1];

    return 0;
}