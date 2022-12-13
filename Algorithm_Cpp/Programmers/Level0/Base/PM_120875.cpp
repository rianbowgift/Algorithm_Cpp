//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
//int solution(vector<vector<int>> dots) {
//    int answer = 0;
//
//    if (((double)(dots[0][1] - dots[1][1]) / (double)(dots[0][0] - dots[1][0])) == ((double)(dots[2][1] - dots[3][1]) / (double)(dots[2][0] - dots[3][0]))) {
//        
//        answer++;
//    }
//    else if (((double)(dots[0][1] - dots[2][1]) / (double)(dots[0][0] - dots[2][0])) == ((double)(dots[1][1] - dots[3][1]) / (double)(dots[1][0] - dots[3][0]))) {
//        answer++;
//    }
//    else if (((double)(dots[0][1] - dots[3][1]) / (double)(dots[0][0] - dots[3][0])) == ((double)(dots[1][1] - dots[2][1]) / (double)(dots[1][0] - dots[2][0]))) {
//        answer++;
//    }
//
//
//
//    return answer;
//}
//
//int main() {
//
//    //vector<vector<int>> dots = { {1, 4},{9, 2},{3, 8},{11, 6}};
//    //vector<vector<int>> dots = { {2,3},{4,5},{8,9},{9,10} };
//    vector<vector<int>> dots = { {3, 5},{4, 1},{2, 4},{5, 10} };
//    solution(dots);
//
//}