//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(string myString) {
//    vector<int> answer;
//    int count = 0;
//    for (int i = 0; i < myString.length();i++) {
//        if (myString[i] != 'x') {
//            count++;
//        }
//        else {
//            answer.push_back(count);
//            count = 0;
//        }
//    }
//    if (count==0) {
//        answer.push_back(0);
//    }
//    else {
//        answer.push_back(count);
//    }
//    return answer;
//}