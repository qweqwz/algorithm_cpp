#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int x, int y) {
	if (n == 0) return;
	hanoi(n - 1, x, 6 - x - y);
	cout<<x<<" "<<y<<"\n";
	hanoi(n - 1, 6 - x - y, y);

}

int main()
{
	
	int N;
    cin>>N;
    int K = pow(2,N)-1;
    cout<<K<<"\n";
	hanoi(N, 1, 3);
	return 0;
}


