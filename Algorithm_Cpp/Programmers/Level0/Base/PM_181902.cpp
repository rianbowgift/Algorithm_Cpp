//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(string my_string) {
//    vector<int> answer;
//    for (int i = 0; i < 52; i++) {
//        answer.push_back(0);
//    }
//
//    for(int i = 0; i < my_string.size(); i++) {
//        if (my_string[i] >= 65 &&  my_string[i] <= 90) {
//            answer[my_string[i] - 65]++;
//            
//        }
//        else {
//            answer[my_string[i] + 26 - 97]++;
//        }
//        
//    }
//    return answer;
//}