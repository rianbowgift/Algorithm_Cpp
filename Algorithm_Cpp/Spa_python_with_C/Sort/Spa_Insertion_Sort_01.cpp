//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//
//    vector<int> input = { 4, 6, 2, 9, 1 };
//    vector<int> output = { 0,0,0,0,0};
//        
//    for (int i = 0; i < input.size(); i++) {
//        output[i] = input[i];
//        for (int j = i; 0 < j; j--) {
//            if (output[j] < output[j - 1]) {
//                int temp = output[j];
//                output[j] = output[j - 1];
//                output[j - 1] = temp;
//            }
//        }
//
//    }
//        for (int i = 0; i < output.size(); i++) {
//        cout << output[i];
//    }
//
//      // # [1, 2, 4, 6, 9] 가 되어야 합니다!
//
//
//}