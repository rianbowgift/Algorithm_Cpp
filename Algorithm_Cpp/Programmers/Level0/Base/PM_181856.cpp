//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> arr1, vector<int> arr2) {
//    int answer = 0;
//    if (arr1.size() > arr2.size()) {
//        answer = 1;
//    }
//    else if (arr1.size() < arr2.size()) {
//        answer = -1;
//    }
//    else {
//        int temp1 = 0;
//        int temp2 = 0;
//        for (int i = 0; i < arr1.size(); i++) {
//            temp1 += arr1[i];
//        }
//        for (int i = 0; i < arr2.size(); i++) {
//            temp2 += arr2[i];
//        }
//        if (temp1 > temp2) {
//            answer = 1;
//        }
//        else if (temp1 < temp2) {
//            answer = -1;
//        }
//        else {
//            answer = 0;
//        }
//
//    }
//
//    return answer;
//}