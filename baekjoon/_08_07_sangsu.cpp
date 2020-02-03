#include <iostream>
using namespace std;
int main(){
    int A, B;
    cin>>A>>B;
    int A2, B2;
    A2 = (A/100)+((A%100)/10)*10+((A%100)%10)*100;
    B2 = (B/100)+((B%100)/10)*10+((B%100)%10)*100;
    if(A2>B2)
        cout<<A2;
    else
        cout<<B2;
    
    return 0;
}