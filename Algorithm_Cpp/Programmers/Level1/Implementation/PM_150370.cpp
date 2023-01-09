//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
//	vector<int> answer;
//
//	for (int i = 0; i < privacies.size(); i++) {
//		
//		char temp = privacies[i][11]; //유형 구분 
//		int mon = 0; //유효기간 저장변수 
//		for (int j = 0; j < terms.size(); j++) {
//			if (terms[j][0] == temp) {	//유형 찾았으면
//				
//				string tem_mon;
//				for (int z = 2; z < terms[j].length(); z++) {
//					tem_mon += terms[j][z];
//				}
//				mon = stoi(tem_mon);
//				break;
//			}
//		}
//
//		string st_day;
//		int it_day;
//		st_day += privacies[i][8];
//		st_day += privacies[i][9];
//		it_day = stoi(st_day);
//
//		string st_year;
//		int it_year;
//		st_year += privacies[i][0];
//		st_year += privacies[i][1];
//		st_year += privacies[i][2];
//		st_year += privacies[i][3];
//		it_year = stoi(st_year);
//
//		string st_mons;
//		int it_mons;
//		st_mons += privacies[i][5];
//		st_mons += privacies[i][6];
//		it_mons = stoi(st_mons) + mon;
//
//		///
//		string st_today;
//		int it_today;
//		st_today += today[8];
//		st_today += today[9];
//		it_today = stoi(st_today);
//
//		string st_toyear;
//		int it_toyear;
//		st_toyear += today[0];
//		st_toyear += today[1];
//		st_toyear += today[2];
//		st_toyear += today[3];
//		it_toyear = stoi(st_toyear);
//
//		string st_tomons;
//		int it_tomons;
//		st_tomons += today[5];
//		st_tomons += today[6];
//		it_tomons = stoi(st_tomons);
//
//
//
//
//
//
//		while (it_mons > 12) {
//			it_mons -= 12;
//			it_year++;
//		}
//		
//
//		//cout << st_year << " " << st_toyear;
//		if (i == 1) {
//			cout << it_year << " " << it_toyear << "\n";
//			cout << it_mons << " " << it_tomons << "\n";
//			cout << it_day << " " << it_today;
//		}
//
//
//		if (it_year == it_toyear) {
//			if (it_mons == it_tomons) {
//				if (it_day > it_today) {
//					
//					
//					continue;
//				}
//				else {
//					answer.push_back(i + 1);
//					continue;
//				}
//			}
//			else if (it_mons > it_tomons) {
//				continue;
//			}
//			else {
//				answer.push_back(i + 1);
//				continue;
//			}
//		}
//		else if (it_year > it_toyear) {
//			continue;
//		}
//		else {
//			answer.push_back(i + 1);
//			continue;
//		}
//
//		
//	
//
//	}
//
//	
//
//	
//
//
//	return answer;
//}
//
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	string today = "2022.05.19";
//	vector<string> terms = { {"A 6"},{"B 12"},{"C 3"}};
//	vector<string> privacies = { {"2021.05.02 A"},{"2021.07.01 B"}, {"2022.02.19 C"},{"2022.02.20 C"} };
//
//	solution(today, terms, privacies);
//
//}