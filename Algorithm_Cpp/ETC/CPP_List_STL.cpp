//#include<iostream>
//#include<algorithm>
//#include<list>
//using namespace std;
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	list<int> L = { 1,2 };
//	list<int>::iterator t = L.begin(); // L�� 0��°��ġ
//	L.push_front(10); // 10,1,2
//
//	cout << *t << "\n";	// t�� ��������� 0����ġ���� 1�� ���
//
//	L.push_back(5); // 10,1,2,5
//	L.insert(t, 6); //t�� ����Ű�°��� �տ� 6������(�� �ƴ�) 10,6,1,2,5\
//
//	t++;	//t�� ����Ű�°� -> 2����ġ
//	t = L.erase(t); //t�� ����Ű�°��� ����. �� 2������.  ���� t�� 2���ڸ��� ���� 5�� ����Ŵ
//						// 10,6,1,5  t=5
//
//	cout << *t << "\n"; //5���
//
//	for (auto i : L) {
//		cout << i << ' ';	//10,6,1,5
//	}
//	cout << "\n";
//
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++) {	//�̷��� �ϸ� �迭ó�� ������������.
//		cout << *it << ' '; //10,6,1,5
//	}
//
//}