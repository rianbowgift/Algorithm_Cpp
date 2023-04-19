//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int arr[150];
//int solution(vector<string> spell, vector<string> dic) {
//    int answer = 0;
//    bool is_true = false;
//    for (int i = 0; i < spell.size(); i++) {
//        arr[spell[i][0]] += 1;
//    }
//
//    for (int i = 0; i < dic.size(); i++) {
//        int temp[150];
//        for (int i = 0; i < 150; i++) {
//            temp[i] = arr[i];
//        }
//
//
//        for (int j = 0; j < dic[i].length(); j++) {
//            if (temp[dic[i][j]]) {
//                temp[dic[i][j]]--;
//                if (j + 1 == dic[i].length() && j==spell.size()-1) {
//                    is_true = true;
//                }
//            }
//            else {
//                break;
//            }
//        }
//    }
//
//    if (is_true) {
//        answer = 1;
//    }
//    else {
//        answer = 2;
//    }
//
//
//    return answer;
//}
//
//int main() {
//    vector<string> spell;
//    vector<string> dic;
//    spell.push_back("s");
//    spell.push_back("o");
//    spell.push_back("m");
//    spell.push_back("d");
//    dic.push_back("def");
//    dic.push_back("dzx");
//    solution(spell, dic);
//
//}