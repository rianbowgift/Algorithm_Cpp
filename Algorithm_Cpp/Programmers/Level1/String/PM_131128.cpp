//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//int arr_X[10];
//int arr_Y[10];
//string solution(string X, string Y) {
//    string answer = "";
//    
//    
//    for (int i = 0; i < X.length(); i++) {
//        
//        char temp = X[i];
//
//        int num = temp - '0';
//        
//        arr_X[num]++;
//
//    }
//    
//    for (int i = 0; i < Y.length(); i++) {
//        
//        char temp = Y[i];
//        
//        int num = temp - '0';
//
//        if (arr_X[num] > 0) {
//            arr_X[num]--;
//            arr_Y[num]++;
//        }
//
//    }
//
//    for (int i = 9; i >= 0; i--) {
//        //앞자리 00 예외처리
//        if (i == 0 && answer.size()==0 && arr_Y[0]>0) {
//            answer += "0";
//            break;
//        }
//
//        while (arr_Y[i] > 0) {
//            answer += to_string(i);
//            arr_Y[i]--;
//        }
//    }
//
//    if (answer.size() == 0) {   //공백 예외처리
//        answer = "-1";
//    }
//
//
//    
//
//
//    
//
//
//    return answer;
//}
//
//int main() {
//    string X = "100";
//    string Y = "2345";
//    solution(X, Y);
//
//}
