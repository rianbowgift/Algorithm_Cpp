#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <sstream>
#define uid first
#define nickname second 

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
	vector<pair<string, string>> name;




	for (int z = 0; z< record.size(); z++) {
		vector<string> result = split(record[z], ' ');
		string action = result[0];
		string uuid = result[1];
		string names = result[2];

		
		if (action == "Enter") {

		}
		else if (action == "Leave") {

		}
		else if (action == "Change") {

			for (int i = 0; i < name.size(); i++) {

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