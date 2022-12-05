//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> solution(vector<string> quiz) {
//    vector<string> answer;
//
//    for (int i = 0; i < quiz.size(); i++) {
//
//        string arr[4];
//        //0 = x , 1 = iter, 2 = y, 3 = answer
//
//        int index = 0;
//        int real_count = quiz[i].length();;
//        int list_index = 0;//공백 만난 횟수
//        string temp;
//       
//        while (quiz[i].length() != 0) {
//        
//            if (quiz[i][index] == ' ') {
//                if (temp == "=") {
//                    temp = "";
//                    quiz[i] = quiz[i].substr(index + 1, quiz[i].length());
//                    index=0;
//                    real_count--;
//                    continue;
//                }
//                arr[list_index] = temp;
//                list_index++;
//                temp = "";
//                quiz[i] = quiz[i].substr(index+1, quiz[i].length());
//                index = -1;
//            }
//            else {
//                temp += quiz[i][index];
//            }
//            if (real_count == 1) {
//                arr[list_index] = temp;
//                break;
//            }
//
//            index++;
//            real_count--;
//        }
//
//        if (arr[1][0] == '-') {
//            if (stoi(arr[0]) - stoi(arr[2]) == stoi(arr[3]) ) {
//                answer.push_back("O");
//            }
//            else {
//                answer.push_back("X");
//            }
//        }
//        else {
//            if (stoi(arr[0]) + stoi(arr[2]) == stoi(arr[3])) {
//                answer.push_back("O");
//            }
//            else {
//                answer.push_back("X");
//            }
//        }
//
//
//
//    }
//
//
//
//
//    return answer;
//}
//
//
//int main() {
//    vector<string> quiz = { "3 - 4 = -3", "5 + 6 = 11" };
//    solution(quiz);
//
//}