//#include <string>
//#include <vector>
//#include<iostream>
//
//using namespace std;
//
//
//
//
//vector<int> solution(string s) {
//    vector<int> answer(s.length(), -1); //정답저장
//    vector<int> arr(26, -1);//마지막 위치 저장
//
//    for (int i = 0; i < s.length(); i++) {
//        char word = s[i];
//
//        //1.이전에 문자가 나왔던적이 있는지 확인
//        if (arr[word-'a'] == -1) {//나온적이 없다면
//            arr[word - 'a'] = i;  //현재 index 위치를 저장
//            answer[i] = -1; //정답 저장
//            
//        }
//        //이전에 나온적이 있던 문자면
//        else {
//            answer[i] = i - arr[word - 'a'];  //정답 = 현재위치- 이전위치
//            arr[word - 'a'] = i;  //현재 index위치를 저장
//            
//        }
//
//    }
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
//
//    solution("banana");
//
//}
//
