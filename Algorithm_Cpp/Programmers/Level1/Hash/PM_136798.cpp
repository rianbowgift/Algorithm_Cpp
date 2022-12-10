//#include <string>
//#include <vector>
//#include<iostream>
//#include<math.h>
//#include<map>
//
//using namespace std;
//
//
//
//
//int solution(int number, int limit, int power) {
//    int answer = 0;
//    
//
//    for (int i = 1; i <= number; i++) {
//
//        map<int, int> arr;
//        int man = i;
//        int count = 2;
//        int sum = 0;
//        while (true) {
//            if (man % count == 0) {
//                man /= count;
//                arr[count]++;
//                continue;
//            }
//            else {
//                count++;
//            }
//            if (man == 1) {
//                break;
//            }
//            if (count == man) {
//                arr[count]++;
//                break;
//            }
//        }
//
//        int real_sum = 1;
//        for (auto temp : arr) {
//            real_sum *= temp.second + 1;
//        }
//
//        if (real_sum > limit) {
//            answer += power;
//        }
//        else {
//            answer += real_sum;
//        }
//
//
//
//    }
//
//   
//
//
//    return answer;
//}
//
//int main() {
//
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//
//    solution(10,3,2);
//
//
//
//}