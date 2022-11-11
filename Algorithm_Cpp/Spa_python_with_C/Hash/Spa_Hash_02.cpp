//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//
//
////프로그래머스 https://school.programmers.co.kr/learn/courses/30/lessons/42579
////제출 안했다. 해쉬문법과 해쉬규칙에대한 확실한 이해후 다시풀어보고 제출하기로하자
//
//
//int main() {
//	//해쉬맵대신 맵을쓰는이유 = 어차피 정렬해야함
//		//장르,  재생횟수 인덱스
//	map<string, map<int,int>> music;
//	map<string, int> sumd;
//	vector<int> answer;
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		string name;
//		int plays;
//		cin >> name >> plays;
//		
//		sumd[name] += plays;
//		music[name][i] = plays;
//		//단순히 생각해볼때 키=재생횟수 벨류=index가 더 잘맞고
//		//굳이 순서가 상관없을것같다. 그러나 키가 index인경우
//		//즉시 검색이 가능해진다
//
//	}	
//	while (sumd.size() > 0) {
//		int max = 0;
//		string max_name;
//		for (auto i : sumd) {		//최대재생수 구하기
//			if (i.second > max) {
//				max_name = i.first;
//				max = i.second;
//			}
//
//
//		}
//
//
//		for (int j = 0; j < 2; j++) {
//			int max_songs = -1;
//			int max_index = -1;
//			for (auto i : music[max_name]) {
//				if (i.second > max_songs) {
//					max_index = i.first;
//					max_songs = i.second;
//					
//				}
//			}
//			if (max_index == -1) {
//				break;
//			}
//			else {
//				answer.push_back(max_index);
//				music[max_name].erase(max_index);
//			}
//
//
//		}
//
//		sumd.erase(max_name);
//
//		
//
//	}
//
//
//	for (int i = 0; i < answer.size(); i++) {
//		cout << answer[i];
//	}
//
//
//}
//
//
////genres = ["classic", "pop", "classic", "classic", "pop"]
////plays = [500, 600, 150, 800, 2500]
//
//
//
//
//// 결과로[4, 1, 3, 0] 가 와야 합니다!