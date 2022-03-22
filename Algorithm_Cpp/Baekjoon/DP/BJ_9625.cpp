#include<iostream>
#include<string>
using namespace std;

//string dp_9625[46];
int dp_9625_a[46];
int dp_9625_b[46];
int main() {
	int k;
	cin >> k;
	int a=0, b=0;
	//dp_9625[0] = "A";
	dp_9625_a[0] = 1;
	dp_9625_b[0] = 0;
	//dp_9625[1] = "B";
	dp_9625_a[1] = 0;
	dp_9625_b[1] = 1;
	//dp_9625[2] = "BA";
	dp_9625_a[2] = 1;
	dp_9625_b[2] = 1;
	


	for (int i = 3; i <= k; i++) {


		//dp_9625[i] = dp_9625[i - 1] + dp_9625[i - 2];
		dp_9625_a[i] = dp_9625_a[i - 1] + dp_9625_a[i - 2];
		dp_9625_b[i] = dp_9625_b[i - 1] + dp_9625_b[i - 2];
	}

	

	cout << dp_9625_a[k] << " " << dp_9625_b[k];




	return 0;
}