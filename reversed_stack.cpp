#include<iostream>
#include<string>
using namespace std;

#define MAX 100

char stack[MAX];
int top=-1;

int main(){
    string str;
    cout<<"Enter a string:";
    cin>>str;

    for(int i=0;i<str.length();i++){
        stack[++top]=str[i];
    }

    cout<<"Reversed Stack:";
    while(top!=-1){
        cout<<(char)stack[top];
        top--;  
    }
    return 0;
}