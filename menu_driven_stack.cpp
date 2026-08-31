#include<iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top=-1;

//Push Operation
void push(int value){
    if(top==MAX-1){
        cout<<"Stack Overflow! stack is full.\n";
    }
    else{
        top++;
        stack[top]=value;
        cout<<value <<" pushed in stack.\n";
    }
}

//Pop Operation
void pop(){
    if(top==-1){
        cout<<"Stack Underflow! Stack is empty.\n";
    }
    else{
        cout<<stack[top]<<" pushed from stack.\n";
        top--;
    }
}

//isEmpty Operation
void isEmpty(){
     if(top==-1)
        cout<<"Stack is empty.\n";
     else
        cout<<"Stack is not empty.\n";
     
}

//isFull Operation
void isFull(){
    if(top==MAX-1)
       cout<<"Stack is full.\n";
    else
       cout<<"Stack is not full.\n";
}

//Peek Operation
void peek(){
    if(top==-1)
       cout<<"Stack is empty. No top element.\n";
    else
       cout<<"Top element is:" << stack[top] << endl;
}

//Display Operation
void display(){
    if(top==-1){
       cout<<"Stack is empty.\n";
    }
    else{
        cout<<"Stack elements are:"; 
    
        for(int i=top;i>=0;i--){
            cout<<stack[i] <<endl;
        }
    }
}

int main(){
    int choice, value;

    do{
      cout<<"\n-----STACK MENU-----\n";
      cout<<"1. Push\n";
      cout<<"2. Pop\n";
      cout<<"3. isEmpty\n";
      cout<<"4. isFull\n";
      cout<<"5. Peek\n";
      cout<<"6. Display\n";
      cout<<"7. Exit\n";

      cout<<"Enter your choice:";
      cin>>choice;

      switch(choice){
        case 1:
           cout<<"Enter value to push:\n";
           cin>>value;
           push(value);
           break;

         case 2:
           pop();
           break;
           
          case 3:
            isEmpty();
            break;
            
          case 4:
            isFull();
            break;

          case 5:
            peek();
            break;
            
          case 6:
            display();
            break;
            
          case 7:
            cout<<"Exiting program.....\n";
            break;
            
          default:
            cout<<"Invalid choice\n";  
      }
    } while(choice != 7);
  return 0;    
}