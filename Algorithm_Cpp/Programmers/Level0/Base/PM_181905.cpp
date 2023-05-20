//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string my_string, int s, int e) {
//    string answer = "";
//    int temp = 0;
//    
//    for (int i = 0; i < my_string.length(); i++) {
//        if (i >= s && e >= i) {
//            answer += my_string[e - temp];
//            temp++;
//        }
//        else {
//            answer += my_string[i];
//        }
//    }
//    return answer;
//}