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
//	list<int>::iterator t = L.begin(); // L의 0번째위치
//	L.push_front(10); // 10,1,2
//
//	cout << *t << "\n";	// t가 만들어질때 0번위치였던 1을 출력
//
//	L.push_back(5); // 10,1,2,5
//	L.insert(t, 6); //t가 가르키는곳의 앞에 6을삽입(뒤 아님) 10,6,1,2,5\
//
//	t++;	//t가 가르키는곳 -> 2의위치
//	t = L.erase(t); //t가 가르키는값을 제거. 즉 2를제거.  이후 t는 2의자리에 들어온 5를 가르킴
//						// 10,6,1,5  t=5
//
//	cout << *t << "\n"; //5출력
//
//	for (auto i : L) {
//		cout << i << ' ';	//10,6,1,5
//	}
//	cout << "\n";
//
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++) {	//이렇게 하면 배열처럼 꺼내쓸수있음.
//		cout << *it << ' '; //10,6,1,5
//	}
//
//}