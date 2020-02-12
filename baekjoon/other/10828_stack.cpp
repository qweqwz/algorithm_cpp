#include <iostream>
#include <string.h>
using namespace std;

int stack[10001];
int top_count = -1;
void push(int x){
    stack[++top_count]=x;
}
int pop(){
    if(top_count<0)
    return -1;
    else
    return stack[top_count--];
}
int size(){
    return top_count+1;
}
int empty(){
    if(top_count<0)
    return 1;
    else
    return 0;
}
int top(){
    if(top_count<0)
    return -1;
    else
    return stack[top_count];

}
int main(){
    int N;
    cin>>N;
    string str;
    for(int i=0;i<N;i++){
        cin>>str;
        if(str=="push"){
            int x;
            cin>>x;
            push(x);
        }
        else if(str=="pop"){
            cout<<pop()<<"\n";
        }
        else if(str=="size"){
            cout<<size()<<"\n";
        }
        else if(str=="empty"){
            cout<<empty()<<"\n";
        }
        else if(str=="top"){
            cout<<top()<<"\n";
        }
    }
    return 0;
}