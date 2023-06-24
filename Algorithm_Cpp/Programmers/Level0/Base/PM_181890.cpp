//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> solution(vector<string> str_list) {
//    vector<string> answer;
//    vector<string> temp;
//    for (int i = 0; i < str_list.size(); i++) {
//        if (str_list[i][0] == 'l') {
//            answer = temp;
//            break;
//        }
//        if (str_list[i][0] == 'r') {
//            for (int j = i + 1; j < str_list.size(); j++) {
//                answer.push_back(str_list[j]);
//            }
//            break;
//        }
//        if (str_list[i][0] != 'l' || str_list[i][0] != 'r') {
//            temp.push_back(str_list[i]);
//        }
//
//    }
//
//    return answer;
//}