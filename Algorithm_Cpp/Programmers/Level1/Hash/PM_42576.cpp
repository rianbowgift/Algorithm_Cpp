//#include<iostream>
//#include <string>
//#include <vector>
//#include<map>
//
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//    string answer = "";
//
//    map<string, int> arr;
//
//    for (int i = 0; i < participant.size(); i++) {
//        arr[participant[i]]+= 1;
//    }
//
//    for (int i = 0; i < completion.size(); i++) {
//        if (arr[completion[i]] > 1) {
//            arr[completion[i]]--;
//        }
//        else {
//            arr.erase(completion[i]);
//        }
//        
//    }
//
//    for (auto temp : arr) {
//        answer =  temp.first;
//    }
//
//
//
//    return answer;
//}
//
