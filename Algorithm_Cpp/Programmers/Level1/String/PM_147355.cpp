//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string t, string p) {
//    int answer = 0;
//
//
//    for (int i = 0; i < t.length() - p.length()+1; i++) {
//        string temp;
//        long long num = 0;
//        for (int j = i; j < i+p.length(); j++) {
//            temp += t[j];
//        }
//        
//        num = stol(temp);
//        
//        if (num <= stol(p)) {
//            answer++;
//        }
//        
//
//    }
//
//    
//
//    return answer;
//}
//
//
//int main() {
//    string t = "10203";
//    string p = "15";
//    solution(t, p);
//
//
//}