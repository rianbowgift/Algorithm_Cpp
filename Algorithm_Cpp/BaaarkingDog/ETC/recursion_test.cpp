#include<iostream>
using namespace std;

int c;
int re(int a, int b) {
	if (b == 1) {
		return a;
	}
	
	return (a * (re(a,b-1) % c)%c);
	
	

}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;

	cin >> a >> b >> c;

	cout << re(a, b);


}