//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> solution(string my_string) {
//    vector<string> answer;
//    string temp = "";
//    for (int i = 0; i < my_string.length(); i++) {
//        if (my_string[i] != ' ') {
//            temp += my_string[i];
//        }
//        else {
//            if (temp.length() != 0) {
//                answer.push_back(temp);
//                temp = "";
//            }
// 
//        }
//        
//
//    }
//    if (temp.length() > 0) {
//        answer.push_back(temp);
//    }
//
//    return answer;
//}