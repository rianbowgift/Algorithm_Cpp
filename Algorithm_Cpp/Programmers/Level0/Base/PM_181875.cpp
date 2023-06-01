//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> solution(vector<string> strArr) {
//    vector<string> answer;
//    for (int i = 0; i < strArr.size(); i++) {
//        string temp;
//        if (i % 2 != 0) {
//            for (int j = 0; j < strArr[i].length(); j++) {
//                temp += toupper(strArr[i][j]);
//            }
//            answer.push_back(temp);
//        }
//        else {
//            for (int j = 0; j < strArr[i].length(); j++) {
//                temp += tolower(strArr[i][j]);
//            }
//            answer.push_back(temp);
//        }
//    }
//
//    return answer;
//}