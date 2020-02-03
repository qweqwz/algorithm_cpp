#include <iostream>
using namespace std;
int main(){
    int input[8];
    int count=0;
    cin>>input[0];
    for (int i=1;i<8;i++){
        cin>>input[i];
        if(input[i]-input[i-1]==1)
        count++;
        else if(input[i]-input[i-1]==-1)
        count--;
    }
    switch(count){
        case 7:
            cout<<"ascending";
            break;
        case -7:
            cout<<"descending";
            break;
        default:
            cout<<"mixed";
            break;
    }
    return 0;
}