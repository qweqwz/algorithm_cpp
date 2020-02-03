#include <iostream>
using namespace std;
int d(int a){
    int result = a;
    while(a!=0){
    int b = a%10;
    result+=b;
    a=a/10;}
    return result;
}
int main(){
    int arr[10000]={0};
    arr[0]=1;
    for(int i=1;i<10001;i++){
       
        int ans = d(i);
        if(ans<10000){
            arr[ans]++;
        }
        if(arr[i-1]==0){
            cout<<i-1<<"\n";
        }
    }
    return 0;
}


