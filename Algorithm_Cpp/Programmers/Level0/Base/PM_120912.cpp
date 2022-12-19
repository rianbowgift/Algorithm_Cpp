//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> array) {
//    int answer = 0;
//
//    for (int i = 0; i < array.size(); i++) {
//
//        while (true) {
//            if (array[i] >= 10) {
//                int temp = array[i] % 10;
//                if (temp == 7) {
//                    answer++;
//                }
//                array[i] /= 10;
//            }
//            else {
//                if (array[i] == 7) {
//                    answer++;
//                }
//                break;
//            }
//        }
//    }
//
//
//    return answer;
//}