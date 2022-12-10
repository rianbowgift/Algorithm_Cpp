//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> board) {
//    int answer = 0;
//
//    for (int i = 0; i < board.size(); i++) {
//        for (int j = 0; j < board[i].size(); j++) {
//            if (board[i][j] == 1) {
//                if (i > 0 && j > 0) {
//                    if (board[i - 1][j - 1] != 1) {
//                        board[i - 1][j - 1] = -1;
//                    }
//                }
//                if (i > 0) {
//                    if (board[i - 1][j] != 1) {
//                        board[i - 1][j] = -1;
//                    }
//                }
//                if (j > 0) {
//                    if (board[i][j - 1] != 1) {
//                        board[i][j - 1] = -1;
//                    }
//                }
//                if (j < board[i].size() - 1) {
//                    if (board[i][j + 1] != 1) {
//                        board[i][j + 1] = -1;
//                    }
//                }
//                if (i < board.size() - 1) {
//                    if (board[i + 1][j] != 1) {
//                        board[i + 1][j] = -1;
//                    }
//                }
//                if (j < board[i].size() - 1 && i > 0) {
//                    if (board[i - 1][j + 1] != 1) {
//                        board[i - 1][j + 1] = -1;
//                    }
//                }
//                if (i < board.size() - 1 && j > 0) {
//                    if (board[i + 1][j - 1] != 1) {
//                        board[i + 1][j - 1] = -1;
//                    }
//                }
//                if (i < board.size() - 1 && j < board[i].size() - 1) {
//                    if (board[i + 1][j + 1] != 1) {
//                        board[i + 1][j + 1] = -1;
//                    }
//                }
//                
//
//            }
//        }
//    }
//
//    for (int i = 0; i < board.size(); i++) {
//        for(int j=0;j<board[i].size();j++){
//            if (board[i][j] == 0) {
//                answer++;
//            }
//        }
//    }
//
//
//    return answer;
//}
//
//int main() {
//
//
//
//
//}