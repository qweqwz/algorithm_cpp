#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A, B, V;
    cin>>A>>B>>V;
    int answer = ceil(double(V-A)/double(A-B))+1;
    cout<<answer;
    return 0;
} 