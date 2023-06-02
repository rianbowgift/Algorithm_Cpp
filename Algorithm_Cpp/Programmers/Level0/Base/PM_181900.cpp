//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string my_string, vector<int> indices) {
//    string answer = "";
//    string temp = "";
//    for (int i = 0; i < my_string.length(); i++) {
//        bool sw = false;
//        for (int j = 0; j < indices.size(); j++) {
//            if (indices[j] == i) {
//                sw = true;
//            }
//        }
//        if (sw == true) {
//            temp += "-";
//        }
//        else {
//            temp += my_string[i];
//        }
//    }
//
//    for (int i = 0; i < temp.length(); i++) {
//        if (temp[i] != '-') {
//            answer += my_string[i];
//        }
//    }
//
//
//    return answer;
//}