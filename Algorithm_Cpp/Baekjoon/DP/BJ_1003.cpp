#include<iostream>
#include<string>
using namespace std;

int dp_1003[41];

int fibonacci_1003(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {

        return 1;
    }
    else {
        if (dp_1003[n]) {

            return dp_1003[n];
        }
        else {

            return dp_1003[n] = fibonacci_1003(n - 1) + fibonacci_1003(n - 2);
        }
        
    }
}

int BJ_1003() {
	int a;
	cin >> a;
    string* arr = new string[a];
    
	for (int i = 0; i < a; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            arr[i] = "1 0";
        }

        if ( n==1){
            arr[i] = "0 1";
        }

        if (n == 2) {
            arr[i] = "1 1";
        }


        if(n>=3) {
            fibonacci_1003(n);
            arr[i] = to_string(dp_1003[n - 1]) + " " + to_string(dp_1003[n]);
            
        }


	}

    for (int i = 0; i < a; i++) {
        cout << arr[i] << endl;
    }





	return 0;
}