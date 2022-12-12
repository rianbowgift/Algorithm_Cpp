//#include<iostream>
//#include <string>
//#include <vector>
//#include<map>
//
//using namespace std;
//
//int solution(vector<int> array) {
//    int answer = 0;
//
//    map<int, int> arr;
//
//    for (int i = 0; i < array.size(); i++) {
//        arr[array[i]] += 1;
//    }
//
//    int maxd = -1;
//    int maxd_num = -1;
//    bool flag = false;
//    for (auto temp : arr) {
//
//        if (temp.second >= maxd) {
//            if (temp.second == maxd) {
//                flag = false;   //공동1위
//                maxd = temp.second;
//                maxd_num = temp.first;
//            }
//            else {
//                flag = true;    //단독1위
//                maxd = temp.second;
//                maxd_num = temp.first;
//            }
//           
//        }
//
//
//    }
//    if (flag) {
//        answer = maxd_num;
//    }
//    else {
//        answer = -1;
//    }
//
//    
//  
//    
//
//    return answer;
//}