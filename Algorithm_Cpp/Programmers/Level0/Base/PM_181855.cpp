//#include <string>
//#include <vector>
//#include<unordered_map>
//
//using namespace std;
//
//int solution(vector<string> strArr) {
//    int answer = 0;
//    unordered_map<int, int> arr;
//    for (int i = 0; i < strArr.size(); i++) {
//        arr[strArr[i].size()]++;
//    }
//    for (int i = 0; i < arr.size(); i++) {
//        if (answer < arr[i]) {
//            answer = arr[i];
//        }
//    }
//    return answer;
//}