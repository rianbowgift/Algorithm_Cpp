//#include<iostream>
//#include<list>
//#include<string>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a;
//	cin >> a;
//
//	for (int z = 0; z < a; z++) {
//
//		string temp;
//		cin >> temp;
//		list<char> keylog_list;
//		list<char> keylog_out;
//		for (int i = 0; i < temp.size(); i++) {
//			keylog_list.push_back(temp[i]);
//		}
//
//		list<char>::iterator list_iter = keylog_out.begin();
//		
//
//		for (list<char>::iterator i = keylog_list.begin(); i != keylog_list.end(); i++){ 
//			
//			if (*i == '-') {
//		
//				if (list_iter != keylog_out.begin()) {
//					//--list_iter;
//					list_iter = keylog_out.erase(--list_iter);
//					//이부분에서 실수할 여지많음. 조심
//
//				}
//
//			}
//			else if (*i == '<') {
//		
//
//				if (list_iter != keylog_out.begin()) {
//					list_iter--;
//				}
//
//			}
//			else if (*i == '>') {
//
//				if (list_iter != keylog_out.end()) {
//					list_iter++;
//				}
//			}
//			else {
//
//				keylog_out.insert(list_iter, *i);
//				
//				
//			}
//
//		}
//		
//
//		for (list<char>::iterator i = keylog_out.begin(); i != keylog_out.end();i++) {
//			
//			cout << *i;
//		}
//
//		cout << "\n";
//
//
//
//
//	}
//
//
//
//	
//}