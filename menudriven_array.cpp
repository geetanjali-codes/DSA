#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[100];
    int n=0;
    int choice;
    do{
        cout<<"\n------------ARRAY MENU--------------\n";
        cout<<"1.CREATE\n";
        cout<<"2.DISPLAY\n";
        cout<<"3.INSERT\n";
        cout<<"4.DELETE\n";
        cout<<"5.LINEAR SEARCH\n";
        cout<<"6.EXIT\n";
         
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"Enter number of elements: ";
                cin>>n;

                cout<<"Enter" <<" " << n <<" " <<"elements: ";
                for(i=0;i<n;i++){
                    cin>>arr[i];
                }
                cout<<"Array successfully created\n";
                break;
            }
            case 2:
            {
                if(n==0){
                    cout<<"Array is empty\n";
                }
                else{
                    cout<<"Array elements are: ";

                    for(i=0;i<n;i++){
                         cout<<arr[i] <<" ";
                    }
                    cout<<endl;
                }
                break;
            }
            case 3:
            {
                int pos,value;

                cout<<"Enter position to insert: ";
                cin>>pos;

                cout<<"Enter value to be inserted: ";
                cin>>value;

                if(pos<1 || pos>n+1){
                    cout<<"Invalid position.\n";
                }
                else{
                    for(i=n;i>=pos;i--){
                        arr[i]=arr[i-1];
                    }
                    arr[pos-1]=value;
                    n++;
                    cout<<"Element inserted successfully.\n";

                    cout<<"Updated array: ";
                    for(i=0;i<n;i++){
                        cout<<arr[i] <<" ";
                    }
                    cout<<endl;
                }
                break;
            }
            case 4:
            {
                int pos;
                
                cout<<"Enter position to delete: ";
                cin>>pos;

                if(pos<1 || pos>n){
                    cout<<"Invalid position.\n";
                }
                else{
                    for(i = pos-1; i<n-1 ; i++){
                        arr[i]=arr[i+1];
                    }
                    n--;
                    cout<<"Element deleted successfully.\n";

                    cout<<"Updated array: ";
                    for(i=0;i<n;i++){
                        cout<<arr[i] <<" ";
                    }
                    cout<<endl;
                }
                break;
            }
            case 5:
            {
                int value;
                bool found= false;

                cout<<"Enter element to search: ";
                cin>>value;

                for(i=0;i<n;i++){
                    if(arr[i]==value){
                        cout<<"Element found at position" <<" " <<i+1 <<endl;
                        found = true;
                        break;
                    }
                }
                if(found==false){
                    cout<<"Element not found.\n";
                }
                break;
            }
            case 6:
            {
                cout<<"Program exited successfully.\n";
                break;
            }
            default:
            {
                cout<<"Invalid choice.\n";
                break;
            }
        }
    }
    while(choice != 6);

    return 0;
}