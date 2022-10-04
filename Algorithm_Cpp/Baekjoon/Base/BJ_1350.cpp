//#include<iostream>
//using namespace std;
//
//int arr[51];
//
//int main() {
//
//	int a;
//	long long size;
//	long long sum = 0;
//
//	cin >> a;
//
//	for (int i = 0; i < a; i++) {
//		int temp;
//		cin >> temp;
//		arr[i] = temp;
//	}
//	
//	cin >> size;
//	double sizes = size;
//
//	for (int i = 0; i < a; i++) {
//		if (arr[i] == 0) {
//			continue;
//		}
//
//		if (size > arr[i]) {
//			sum += size;
//		}
//		else {
//			
//			double temp_double = arr[i]/sizes;
//			int temp_int = arr[i]/size;
//			int mul = 0;
//			if (temp_double > temp_int) {
//				sum += size * (temp_int + 1);
//				
//			}
//			else {
//				sum += size * (temp_int);
//				
//			}
//		}
//
//
//	}
//
//	cout << sum;
//
//
//}