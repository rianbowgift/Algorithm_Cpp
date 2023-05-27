//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> solution(string my_string) {
//    vector<string> answer;
//    string x = "";
//    for (int i = 0; i < my_string.length(); i++) {
//        if (my_string[i] == ' ') {
//            answer.push_back(x);
//            x = "";
//        }
//        else {
//            x += my_string[i];
//        }
//    }
//    if (x.length() > 0) {
//        answer.push_back(x);
//    }
//    return answer;
//}