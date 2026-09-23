#include<iostream>
using namespace std;
int main(){
    int queue[5];
    int front=-1;
    int rear=-1;
    int choice,value;

    do{
        cout<<"\n-----QUEUE MENU------"<<endl;
        cout<<"1. Enqueue\n";
        cout<<"2. Dequeue\n";
        cout<<"3. isEmpty\n";
        cout<<"4. is Full\n";
        cout<<"5. Display\n";
        cout<<"6. Peek\n";
        cout<<"7. Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case 1: 
            if(rear==4){
                cout<<"Queue Overflow!";
            }
            else{
                cout<<"Enter value:";
                cin>>value;

                if(front==-1)
                    front=0;
                    rear++;
                    queue[rear]=value;
                    cout<<"Element inserted.\n";
            }
                    break;
                case 2:
                if(front==-1 || front>rear){
                    cout<<"Queue Underflow!\n";

            }
            else{
                cout<<"Deleted element: "<<queue[front]<<endl;
                front++;

                if(front>rear){
                    front=-1;
                    rear=-1;
                }
            }
            break;
            case 3: 
            if(front==-1){
                cout<<"Queue is empty.\n";
            }
            else{
                cout<<"Queue is not empty.\n";
            }
            break;

            case 4:
               if(rear==4){
                cout<<"Queue is full.\n";
               }
               else{
                cout<<"Queue is not full.\n";
               }
               break;

               case 5:
                if(front==-1){
                    cout<<"Queue is empty.\n";
                }
                else{
                    cout<<"Queue elements: ";
                    for(int i=front;i<=rear;i++){
                        cout<<queue[i]<<" ";
                    }
                    cout<<endl;
                }
                break;

                case 6:
                 if(front==-1){
                    cout<<"Queue is empty.\n";
                 }
                 else{
                    cout<<"Front elements:"<<queue[front]<<endl;
                    
                 }
                 break;

                 case 7:
                 cout<<"Exiting...\n";
                 break;

                 default:
                 cout<<"Invalid choice!\n";
        }

        
    }while(choice!=7);

    return 0;
}