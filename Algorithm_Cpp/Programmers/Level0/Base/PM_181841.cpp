//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//string solution(vector<string> str_list, string ex) {
//    string answer = "";
//    for (int i = 0; i < str_list.size(); i++) {
//        bool sw = true;
//        int temp = 0;
//        for (int j = str_list[i].length() - ex.length(); j<str_list[i].length(); j++) {
//            if (str_list[i].length() < ex.length()) {
//                sw = false;
//                break;
//            }
//            if (str_list[i][j] != ex[temp]) {
//                //cout << str_list[i][j] << " " << ex[temp] << "\n";
//                sw = false;
//                break;
//            }
//            else {
//                temp++;
//            }
//        }
//        if (sw == false) {
//            answer += str_list[i];
//        }
//    }
//    return answer;
//}
//
//int main() {
//    vector<string> str_list = { "abc", "def", "ghi" };
//
//    string ex = "ef";
//    solution(str_list, ex);
//
//}