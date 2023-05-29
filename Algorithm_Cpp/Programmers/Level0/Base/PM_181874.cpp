//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string myString) {
//    string answer = "";
//    for (int i = 0; i < myString.length(); i++) {
//        if (myString[i] == 65) {
//            answer += "A";
//            continue;
//        }
//        if (myString[i] >= 66 && myString[i] <= 90) {
//            answer += myString[i] + 32;
//            continue;
//        }
//        if (myString[i] == 97) {
//            answer += "A";
//            continue;
//        }
//        if (myString[i] >= 98 && myString[i] <= 122) {
//            answer += myString[i];
//            continue;
//        }
//        if (myString[i] == ' ') {
//            answer += " ";
//        }
//    }
//    return answer;
//}