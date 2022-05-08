#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <sstream>
#include<queue>
#include<hash_map>


using namespace std;



vector<string> split(string input, char delimiter) {
	vector<string> answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)) {
		answer.push_back(temp);
	}

	return answer;
}



vector<string> solution(vector<string> record) {
	vector<string> answer;
	queue<pair<string, bool>> input;
	hash_map<string, string> maps;



	for (int z = 0; z< record.size(); z++) {
		vector<string> result = split(record[z], ' ');
		string action = result[0];
		string uuid = result[1];
		string names = result[2];

		
		if (action == "Enter") {
			hash_map<string,string>::iterator pos = maps.find(uuid);
			if (pos == maps.end()) {	//pos�� �ߺ��Ȱ��� ã�� ���Ͽ��ٸ�
				maps.insert(uuid, names);
			}
			input.push({ uuid, true });
			
		}
		else if (action == "Leave") {
			input.push({ uuid, false });
		}
		else if (action == "Change") {
			hash_map<string, string>::iterator pos = maps.find(uuid);
			if (pos != maps.end()) {	//pos�� �ߺ��Ȱ��� ã�Ҵٸ�
				pos->second = names;
			}
	
		}


		
	}
	
	while (!input.empty()) {
		pair<string, bool> temp = input.front();
		input.pop();
		
		hash_map<string, string>::iterator pos = maps.find(temp.first);
		if (pos != maps.end()) {	//pos�� �ߺ��Ȱ��� ã�Ҵٸ�
			cout << pos->second << "���� ";
			if (temp.second == 1) {
				cout << "���Խ��ϴ�.";
			}
			else {
				cout << "�������ϴ�.";
			}
		}
		
		
	}


	return answer;
}




int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<string> record = { "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" };
	
	solution(record);

	











}