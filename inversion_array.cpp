#include<iostream>
using namespace std;
int main(){
    int arr[10],n,count=0;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int j=0;j<n-1;j++){
         for(int k=j+1;k<n;k++){
            if(j<k && arr[j]>arr[k]){
                
               count++;
            }
          
         }
        }
    
    cout<<"Inversion:"<<count;
    return 0;
}