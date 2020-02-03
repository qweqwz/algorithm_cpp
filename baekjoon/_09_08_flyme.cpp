#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int T;
    int x, y;
    int temp;
    int a, b;
    cin>>T;

    for(int i=0;i<T;i++){
        cin>>x>>y;
        temp = y-x;
        a= sqrt(temp);
        b = ((a+1)*(a+1)-a*a)/2;
        if(temp==a*a)
        cout<<a+a-1<<"\n";
        else if (temp<=a*a+b)
        cout<<a+a<<"\n";
        else
        cout<<a+a+1<<"\n";
    }
    return 0;
}