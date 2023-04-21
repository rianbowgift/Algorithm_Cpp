//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> solution(vector<string> strArr) {
//    vector<string> answer;
//
//    for (int i = 0; i < strArr.size(); i++) {
//        bool sw = true;
//        for (int j = 0; j < strArr[i].length() - 1; j++) {
//            if (strArr[i][j] == 'a') {
//                if (strArr[i][j + 1] == 'd') {
//                    sw = false;
//                }
//            }
//        }
//        if (sw == true) {
//            answer.push_back(strArr[i]);
//        }
//    }
//    
//    return answer;
//}