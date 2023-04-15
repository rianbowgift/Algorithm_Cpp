//#include <string>
//#include <vector>
//
//using namespace std;
//int arr[70];
//int arr2[70];
//int solution(string before, string after) {
//    int answer = 1;
//    for (int i = 0; i < before.length(); i++) {
//        arr[before[i] - 64]++;
//    }
//    for (int i = 0; i < after.length(); i++) {
//        arr2[after[i] - 64]++;
//    }
//    for (int i = 0; i < 70; i++) {
//        if (arr[i] == arr2[i]) {
//            continue;
//        }
//        else {
//            answer = 0;
//            break;
//        }
//    }
//
//    return answer;
//}