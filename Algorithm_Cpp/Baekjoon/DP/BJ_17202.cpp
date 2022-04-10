//#include<iostream>
//#include<string>
//using namespace std;
//// 자바랑다르게 string 에서 arr[i] 하면 바로 at처럼 접근가능. 이때 char로 반환되기때문에 -'0' 을 해줘서 int로 바꿔야함.
//// int형을 string에 저장할떄 반드시 to_string으로 바꿔줘야한다. 자바와 다르게 double-int정도가 아니면 대부분 자동변환이 안된다
//// #include<string> 을 써야 to_string라던가 at등이 활성화된다
//
//int sum[20];
//int BJ_17202() {
//
//	string a, b;
//	string a_b;
//	string a_b_temp;
//	cin >> a >> b;
//	
//	for (int i = 0; i < 10; i++) {	//DP를위한 배열초기화. 각숫자에맞는 값이 입력된다
//		sum[i] = i;
//		sum[i + 10] = i;
//	}
//	
//	
//
//	for (int i = 0; i < 8; i++) {	//번호 2개를 1개로 병합
//		a_b += a.at(i);
//		a_b += b.at(i);
//		
//	}
//
//
//
//
//	for (int j = 15; j > 1; j--) {
//		for (int i = 0; i < j; i++) {
//			a_b_temp += to_string(sum[((a_b[i] - '0') + (a_b[i + 1] - '0'))]);		//i와 i+1을 더한배열에 -'0'을 연산하여 int로 변환한후 배열에서 해당하는값을 찾아 넣는다
//			
//		}
//		swap(a_b_temp, a_b);
//		a_b_temp = "";
//	}
//
//	cout << a_b << endl;
//
//
//	return 0;
//}
//
