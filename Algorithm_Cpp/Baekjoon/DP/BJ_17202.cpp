//#include<iostream>
//#include<string>
//using namespace std;
//// �ڹٶ��ٸ��� string ���� arr[i] �ϸ� �ٷ� ató�� ���ٰ���. �̶� char�� ��ȯ�Ǳ⶧���� -'0' �� ���༭ int�� �ٲ����.
//// int���� string�� �����ҋ� �ݵ�� to_string���� �ٲ�����Ѵ�. �ڹٿ� �ٸ��� double-int������ �ƴϸ� ��κ� �ڵ���ȯ�� �ȵȴ�
//// #include<string> �� ��� to_string����� at���� Ȱ��ȭ�ȴ�
//
//int sum[20];
//int BJ_17202() {
//
//	string a, b;
//	string a_b;
//	string a_b_temp;
//	cin >> a >> b;
//	
//	for (int i = 0; i < 10; i++) {	//DP������ �迭�ʱ�ȭ. �����ڿ��´� ���� �Էµȴ�
//		sum[i] = i;
//		sum[i + 10] = i;
//	}
//	
//	
//
//	for (int i = 0; i < 8; i++) {	//��ȣ 2���� 1���� ����
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
//			a_b_temp += to_string(sum[((a_b[i] - '0') + (a_b[i + 1] - '0'))]);		//i�� i+1�� ���ѹ迭�� -'0'�� �����Ͽ� int�� ��ȯ���� �迭���� �ش��ϴ°��� ã�� �ִ´�
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
