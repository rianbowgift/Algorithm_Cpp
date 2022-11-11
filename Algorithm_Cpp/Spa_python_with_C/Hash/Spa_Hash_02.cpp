#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
	//해쉬맵대신 맵을쓰는이유 = 어차피 정렬해야함
				//장르,     재생횟수  인덱스
	map<string, map<int,int>> music;
	map<string, int> sumd;
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string name;
		int plays;
		cin >> name >> plays;
		
		sumd[name] += plays;
		music[name][i] = plays;

	}	

	int max = 0;
	string max_name;
	for (auto i : sumd) {		//
		if (i.second > max) {
			max_name = i.first;
			max = i.second;
		}
			

	}





}


//genres = ["classic", "pop", "classic", "classic", "pop"]
//plays = [500, 600, 150, 800, 2500]




// 결과로[4, 1, 3, 0] 가 와야 합니다!