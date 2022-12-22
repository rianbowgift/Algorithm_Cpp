//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> solution(string my_str, int n) {
//    vector<string> answer;
//    string temp;
//    for (int i = 0; i < my_str.length(); i++) {
//        temp += my_str[i];
//        if ((i+1) % n == 0) {
//            answer.push_back(temp);
//            temp = "";
//            continue;
//        }
//        
//    }
//    if (temp.length() >= 1) {
//        answer.push_back(temp);
//    }
//
//
//    return answer;
//}