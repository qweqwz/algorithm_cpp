#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    int arr[T-1];
    for (int i=0;i<T;i++){
        int a,b;
        cin>>a>>b;
        arr[i]=a+b;
    }
    for (int i=0;i<T;i++){
        cout<<arr[i]<<'\n';
    }
}