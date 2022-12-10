//#include<iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//vector<int> solution(vector<string> keyinput, vector<int> board) {
//    vector<int> answer2;
//    answer2.push_back(board[0] / 2 + 1);
//    answer2.push_back(board[1] / 2 + 1);
//    vector<int> answer = {0,0};
//    
//    for (int i = 0; i < keyinput.size(); i++) {
//        if (keyinput[i] == "up") {
//            if (answer2[1] < board[1]) {
//                answer2[1] += 1;
//                answer[1] += 1;
//            }
//        }
//        else if (keyinput[i] == "down") {
//            if (answer2[1] > 1) {
//                answer2[1] -= 1;
//                answer[1] -= 1;
//            }
//        }
//        else if (keyinput[i] == "left") {
//            if (answer2[0] > 1) {
//                answer2[0] -= 1;
//                answer[0] -= 1;
//            }
//        }
//        else if (keyinput[i] == "right") {
//            if (answer2[0] < board[0]) {
//                answer2[0] += 1;
//                answer[0] += 1;
//            }
//        }
//
//    }
//
//
//    return answer;
//}
//
//
//
//
//int main() {
//
//    //int n = 2;
//    //vector<int> numlist = { 1, 2, 3, 4, 5, 6, 7, 8 };
//    vector<string> keyinput = { "left", "right", "up", "right", "right" };
//    vector<int> board = { 11,11 };
//
//    solution(keyinput, board);
//
//}