#include<iostream>
#include<queue>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a;

	cin >> a;

	for (int z = 0; z < a; z++) {


		int n, m;
		int count = 1;
		bool answer = false;

		cin >> n >> m;

		queue<pair<int,int>> que;
		
		for (int i = 0; i < n; i++) {	//찾아야하는것 m==i일때 프린트가능한경우
			int temp;
			cin >> temp;
			que.push({ temp ,i});
		}

		while (answer==false) {
			int max = 0;

			for (int i = 0; i < que.size(); i++) {		//한바퀴 다돌려서 max찾는다
				if (que.front().first > max) {
					max = que.front().first;
				}
				pair<int, int> temp = que.front();
				que.pop();
				que.push(temp);
			}

			while (true) {		//우선순위 가장 높은거 빼내기
				if (max == que.front().first) {
					if (que.front().second == m) {
						cout << count << "\n";
						answer = true;
						break;
					}
					else {
						count++;
						que.pop();
						break;
					}

				}
				else {
					pair<int, int> temp = que.front();
					que.pop();
					que.push(temp);
				}

			}


		}





	}




}