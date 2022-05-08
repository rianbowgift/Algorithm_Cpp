//#include<iostream>
//#include<vector>
//#include<string>
//#include<sstream>
//#include<queue>
//#include<unordered_map>
//
//
//
//using namespace std;
//
//
//
//vector<string> split(string input, char delimiter) {
//	vector<string> answer;
//	stringstream ss(input);
//	string temp;
//
//	while (getline(ss, temp, delimiter)) {
//		answer.push_back(temp);
//	}
//	return answer;
//}
//
//
//
//vector<string> solution(vector<string> record) {
//	vector<string> answer;
//	queue<pair<string, bool>> input;
//	unordered_map<string, string> maps;
//
//
//
//	for (int z = 0; z< record.size(); z++) {
//		vector<string> result = split(record[z], ' ');
//		string action = result[0];
//		string uuid = result[1];
//		string names;
//		if (action != "Leave") {
//			names = result[2];
//		}
//		
//
//		
//		if (action == "Enter") {
//			unordered_map<string,string>::iterator pos = maps.find(uuid);
//			if (pos == maps.end()) {	//pos가 중복된값을 찾지 못하였다면
//				maps.insert(unordered_map<string, string>::value_type(uuid, names));
//				
//			}
//			else {	//찾았으면
//				pos->second = names;
//			}
//			input.push({ uuid, true });
//			
//			
//		}
//		else if (action == "Leave") {
//			input.push({ uuid, false });
//		}
//		else if (action == "Change") {
//			unordered_map<string, string>::iterator pos = maps.find(uuid);
//			if (pos != maps.end()) {	//pos가 중복된값을 찾았다면
//				pos->second = names;
//			}
//		}
//
//
//		
//	}
//	int count = 0;
//	while (!input.empty()) {
//		pair<string, bool> temp = input.front();
//		input.pop();
//		
//		unordered_map<string, string>::iterator pos = maps.find(temp.first);
//		if (pos != maps.end()) {	//pos가 중복된값을 찾았다면
//			answer.push_back(pos->second + "님이 ");
//			if (temp.second == 1) {
//				answer[count] += "들어왔습니다.";
//			}
//			else {
//				answer[count] += "나갔습니다.";
//			}
//		}
//		
//		count++;
//	}
//
//
//	//for (int i = 0; i < answer.size(); i++) {
//	//	cout << answer[i];
//	//}
//
//	return answer;
//}
//
//
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	vector<string> record = { "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" };
//	
//	solution(record);
//
//	
//
//
//
//
//
//
//
//
//
//
//
//}