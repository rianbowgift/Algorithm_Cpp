//#include<iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int arr[4][300];
//
//
//
//
//int solution(vector<vector<int>> lines) {
//    int answer = 0;
//
//    //출제자의 의도와는 다를것같지만..
//    
//    for (int i = 0; i < 3; i++) {
//        for (int j = lines[i][0] + 100; j < lines[i][1] + 100; j++) {
//            arr[i][j] = 1;
//        }
//    }
//
//    for (int i = 0; i < 200; i++) {
//        int sum = 0;
//        if (arr[0][i] == 1) {
//            sum++;
//        }
//        if (arr[1][i] == 1) {
//            sum++;
//        }
//        if (arr[2][i] == 1) {
//            sum++;
//        }
//
//        if (sum >= 2) {
//            answer++;
//        }
//    }
//
//    
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//    //lines[최소][최대] 관계 생각
//
//    ////포함관계 
//    ////내 최소값이 상대의 최소보다 크거나 같으면서 상대의 최대보다 작거나 같을때
//    //if (lines[0][0] >= lines[1][0] && lines[0][0] <= lines[1][1]) {
//    //    answer += abs(lines[1][1] - lines[0][0]);
//    //}
//    ////또는 내 최대값이 상대의 최소보다 크거나 같으면서 상대의 최대보다 작거나 같을때
//    //else if (lines[0][1] >= lines[1][0] && lines[0][1] <= lines[1][1]) {
//    //    answer += abs(lines[0][1] - lines[1][0]);
//    //}
//
//    ////내 최소값이 상대의 최소보다 크거나 같으면서 상대의 최대보다 작거나 같을때
//    //if (lines[1][0] >= lines[2][0] && lines[1][0] <= lines[2][1]) {
//    //    answer += abs(lines[2][1] - lines[1][0]);
//    //}
//    ////또는 내 최대값이 상대의 최소보다 크거나 같으면서 상대의 최대보다 작거나 같을때
//    //else if (lines[1][1] >= lines[2][0] && lines[1][1] <= lines[2][1]) {
//    //    answer += abs(lines[1][1] - lines[2][0]);
//    //}
//
//    ////내 최소값이 상대의 최소보다 크거나 같으면서 상대의 최대보다 작거나 같을때
//    //if (lines[0][0] >= lines[2][0] && lines[0][0] <= lines[2][1]) {
//    //    answer += abs(lines[2][1] - lines[0][0]);
//    //}
//    ////또는 내 최대값이 상대의 최소보다 크거나 같으면서 상대의 최대보다 작거나 같을때
//    //else if (lines[0][1] >= lines[2][0] && lines[0][1] <= lines[2][1]) {
//    //    answer += abs(lines[0][1] - lines[2][0]);
//    //}
//
//
//
//
//    return answer;
//}
//
//
//
//int main() {
//
//    vector<vector<int>> lines = {{0, 5}, { 3, 9}, { 1, 10}};
//    solution(lines);
//}