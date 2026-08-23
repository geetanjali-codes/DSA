#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int n;
    cout<<"Enter size of matrix: ";
    cin>>n;

   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             cout<<"Enter elements[" << i << "][" << j << "]: ";
            cin>>arr[i][j];
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(i != j && arr[i][j] != 0) {
                cout << "Above is not a diagonal matrix.";
                return 0;
            }
        }
    }

    cout << "Above is a diagonal matrix.";
        
    
    return 0;
}