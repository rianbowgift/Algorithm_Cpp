/*

#include<iostream>
using namespace std;
int f[41];
int count1 = 0;
int count2 = 0;


int fib(int n) {
    if (n == 1 || n == 2) {
        count1++;
        return 1;
    }
    else {
        return (fib(n - 1) + fib(n - 2));
    }
       
}

int fibonacci(int n) {
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++) {
        count2++;
        f[i] = f[i - 1] + f[i - 2];
        
    }
    return f[n];
}


int BJ_24416() {
	int n;
	cin >> n;
    fib(n);
    fibonacci(n);
    cout << count1 << endl; cout << count2;

    return 0;

}

*/