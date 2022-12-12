//#include<iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//
//
//
//
//
//int solution(vector<int> number) {
//    int answer = 0;
//    int arr[15];
//
//    
//    for (int i = 0; i < number.size(); i++) {
//        if (i <= 2) {
//            arr[i] = 0;
//        }
//        else {
//            arr[i] = 1;
//        }
//    }
//
//
//
//    do {
//        int sum = 0;
//        for (int i = 0; i < number.size(); i++) {
//            if (arr[i] == 0) {
//                sum += number[i];
//                cout << number[i];
//            }
//
//        }
//        if (sum == 0) {
//            answer++;
//        }
//        cout << "\n";
//        }while (next_permutation(arr,arr+number.size()));
//    
// 
//
//
//
//
//    //cout <<"답은" << answer;
//    return answer;
//}
//
//
//int main() {
//
//    vector<int> number = { -2, 3, 0, 2, -5 };
//
//    solution(number);
//
//
//
//}