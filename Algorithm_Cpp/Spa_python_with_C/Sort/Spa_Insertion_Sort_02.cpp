//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//
//    vector<int> input = { 4, 6, 2, 9, 1 };
//
//    
//    for (int i = 1; i < input.size(); i++) {
//        
//        for (int j = i; j > 0; j--) {
//            if (input[j] < input[j - 1]) {
//                int temp = input[j];
//                input[j] = input[j - 1];
//                input[j - 1] = temp;
//
//            }
//            else {
//                break;      //시간복잡도 저하
//            }
//
//        }
//
//
//    }
//
//
//    for (int i = 0; i < input.size(); i++) {
//        cout << input[i];
//    }
//
//    // # [1, 2, 4, 6, 9] 가 되어야 합니다!
//
//
//}