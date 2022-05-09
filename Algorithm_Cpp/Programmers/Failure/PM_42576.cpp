//#include<iostream>
//#include <string>
//#include <vector>
//#include<unordered_map>
//#include<unordered_set>
//
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//	string answer = "";
//
//
//
//	
//	unordered_set<string> sets;
//
//	for (int i = 0; i < completion.size(); i++) {
//		sets.insert(completion[i]);
//	}
//	
//	
//	for (int i = 0; i < participant.size(); i++) {
//		
//		
//		unordered_set<string>::iterator pos = sets.find(participant[i]);
//		if (pos != sets.end()) {
//			sets.erase(pos);
//
//		}
//		else {
//		
//			answer = participant[i];
//			break;
//			
//		}
//
//		
//
//
//
//	}
//	
//
//
//
//	cout << answer;
//
//	
//	return answer;
//}
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	vector<string> participant = { "leo", "kiki", "eden" };
//	vector<string> completion = { "eden", "kiki" };
//
//	solution(participant, completion);
//
//
//}