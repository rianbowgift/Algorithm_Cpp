//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<string> babbling) {
//    int answer = 0;
//
//    vector<string> arr = { "ye", "ma","aya",  "woo" };
//    
//
//    for (int q = 0; q < babbling.size(); q++) {
//        
//        string back_save = "";
//        while (true) {
//    
//            if (babbling[q].length() > 2) { //3,2글자비교
//                if (babbling[q].substr(0, 3) == arr[2] || babbling[q].substr(0, 3) == arr[3]) {
//                    if (back_save == babbling[q].substr(0, 3)) {
//                        break;
//                        //babbling[q] = babbling[q].substr(1, babbling[q].size() + 1);
//                    }
//                    else {
//                        back_save = babbling[q].substr(0, 3);
//                        babbling[q] = babbling[q].substr(3, babbling[q].size() + 1);
//                            
//                    }
//                    
//                }
//                else if ((babbling[q].substr(0, 2) == arr[0] || babbling[q].substr(0, 2) == arr[1])) {
//                    
//                    if (back_save == babbling[q].substr(0, 2)) {
//                        break;
//                        //babbling[q] = babbling[q].substr(1, babbling[q].size() + 1);
//                    }
//                    else {
//                        back_save = babbling[q].substr(0, 2);
//                        babbling[q] = babbling[q].substr(2, babbling[q].size() + 1);
//
//                    }
//                }
//                else {
//                    break;
//                    //babbling[q] = babbling[q].substr(1, babbling[q].size() + 1);    //다 아니면 맨앞 한글자만 자름
//                }
//            }
//            else if (babbling[q].length() > 1) { //2글자 비교
//                if ((babbling[q].substr(0, 2) == arr[0] || babbling[q].substr(0, 2) == arr[1])) {
//                    if (back_save == babbling[q].substr(0, 2)) {
//                        break;
//                        //babbling[q] = babbling[q].substr(1, babbling[q].size() + 1);
//                    }
//                    else {
//                        back_save = babbling[q].substr(0, 2);
//                        babbling[q] = babbling[q].substr(2, babbling[q].size() + 1);
//
//                    }
//                }
//                else {
//                    break;
//                    //babbling[q] = babbling[q].substr(1, babbling[q].size() + 1);    //다 아니면 맨앞 한글자만 자름
//                }
//            }
//            else if(babbling[q].length() == 1) {
//                //실패
//                break;
//
//            }
//            else {
//                answer++;
//                break;
//                //길이 0이면 성공
//            }
//        }
//        
//
//    }
//
//    cout << answer;
//
//    return answer;
//}
//
//
//int main() {
//
//    vector<string> babbling = { "wooyemawooye", "mayaa", "ymaeaya" };
//    solution(babbling);
//
//}