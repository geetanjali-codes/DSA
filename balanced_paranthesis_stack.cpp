#include<iostream>
#include<string>
using namespace std;

#define MAX 100

char stack[MAX];
int top=-1;

int main(){

string exp;
cout<<"Enter an expression:";
cin>>exp;

for(int i=0;i<exp.length();i++){
   if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
     stack[++top]=exp[i];
   }
   
   else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
    if(top == -1){
        cout<<"Not Balanced";
        return 0;
    }
    if(exp[i]==')' && stack[top]=='(' ||
    exp[i]=='}' && stack[top]=='{'||
    exp[i]==']' && stack[top]=='['){
        top--;
    }
    else{
        cout<<"Not Balanced";
        return 0;
    }
   }
}

if(top==-1)
    cout<<"Balanced";
else
    cout<<"Not Balanced";

return 0;
}