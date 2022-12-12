//#include<iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//
//string solution(vector<int> food) {
//    string answer = "";
//    string re_answer;
//    for (int i = 0; i < food.size(); i++) {
//        int temp;
//        if (food[i]==1) {//음식1개면 PASS
//            continue;
//        }
//        else{
//            temp = food[i] / 2;
//        }
//        for (int j = 0; j < temp; j++) {
//            answer += to_string(i);
//        }
//
//
//    }
//    
//    re_answer = answer;
//    reverse(re_answer.begin(), re_answer.end());
//
//    answer += "0";
//    answer += re_answer;
//
//
//
//    return answer;
//}
//
