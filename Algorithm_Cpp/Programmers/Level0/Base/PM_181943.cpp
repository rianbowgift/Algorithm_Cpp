//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string my_string, string overwrite_string, int s) {
//    string answer = "";
//    int x = 0;
//
//    for (int i = 0; i < my_string.length(); i++) {
//        if (i<s || x>= overwrite_string.length()) {
//            answer += my_string[i];
//        }
//        else {
//            answer += overwrite_string[x];
//            x++;
//        }
//    }
//    return answer;
//}