//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string s) {
//    int answer = 0;
//    int x = 0;  //첫문자 나온횟수
//    char x_ch='A'; //첫문자
//    int y = 0;//첫문자가 아닌횟수
//    
//    for (int i = 0; i < s.length(); i++) {
//        char temp = s[i];
//
//        if (x_ch < 'a') {   //처음나온 글자일경우
//            x_ch = temp;
//            x++;
//            continue;
//        }
//
//        if (x_ch == temp) {    //첫문자와 지금문자가 동일한경우
//            x++;
//            continue;
//        }
//        else {  //첫문자와 지금문자가 다른경우
//            y++;
//
//            if (x == y) {
//                //첫문자와 지금문자의 수가 같아젔을경우
//
//
//                x = 0;
//                y = 0;
//                x_ch = 'A';
//                answer++;
//            }
//        }
//
//        
//
//
//    }
//
//    if (x_ch != 'A') {
//        answer++;
//    }
//
//    
//
//    return answer;
//}
//
