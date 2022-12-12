//#include<iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//
//int comp(int a, int b) {
//    return a > b;
//}
//
//int solution(int k, int m, vector<int> score) {
//    int answer = 0;
//
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    sort(score.begin(), score.end(), comp);
//    
//    int group = 0;  //m까지 갈때까지 더해주다가 m이될때 초기화
//    int min = 10;   //m도달시 초기화
//    for (int i = 0; i < score.size(); i++) {
//
//        if (min > score[i]) {
//            min = score[i];
//        }
//        group++;
//
//        if (group == m) {
//            answer += m * min;
//            group = 0;
//            min = 10;
//        }
//
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