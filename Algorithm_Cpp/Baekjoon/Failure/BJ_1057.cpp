//#include<iostream>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int answer = 0;
//	int n;
//	cin >> n;
//	int x, y;
//	cin >> x >> y;
//	int sm = min(x, y);
//	int big = max(x, y);
//
//	//서로 대결하지않는경우가?????
//	while (true) {
//		
//		
//		if ((n / 2) < big) {
//			//둘이 다른조,n=짝수
//			n = n / 2;
//			answer++;
//			sm = 1;
//			big = n+1;
//		}
//		else if((n / 2) >= big) {
//			//둘이 같은조,n=짝수
//			n = n / 2;
//			answer++;
//		}
//
//	
//		if (big - sm == 1) {
//			break;
//		}
//		
//		
//
//
//	}
//
//	cout << answer;
//
//}