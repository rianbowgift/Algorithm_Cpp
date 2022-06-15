//#include<iostream>
//#include <vector>
//#include <sstream>
//#include <queue>
//using namespace std;
//
//vector<string> split(string input, char delimiter) {
//    vector<string> answer;
//    stringstream ss(input);
//    string temp;
//
//    while (getline(ss, temp, delimiter)) {
//        answer.push_back(temp);
//    }
//
//    return answer;
//}
//
//int main() {
//
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    vector<string> arr;    //문장형  
//    vector<queue<string>> arr_q;  //단어큐타입
//    
//    queue<string> q;
//    
//    int n;
//
//    cin >> n;
//
//    cin.ignore();
//    for (int i = 0; i < n; i++) {
//        string temp;
//        getline(cin, temp);
//        arr.push_back(temp);
//    }
//
//   
//
//
//    string temp_q;      //정답 맞춰볼 큐의 문자열 분리
//    getline(cin, temp_q);
//    vector<string> answer_q = split(temp_q, ' ');
//    for (int i = 0; i < answer_q.size(); i++) {
//        q.push(answer_q[i]);
//    }
//
//
//    for (int i = 0; i < n; i++) {       //들어온 문자열 분리
//        string temp_q = arr[i];
//        vector<string> answer_q = split(temp_q, ' ');
//        queue<string> tmpq;
//        for (int j = 0; j < answer_q.size(); j++) {
//            tmpq.push(answer_q[j]);
//        }
//        arr_q.push_back(tmpq);
//    }
//
//
//
//
//
//
//
//
//
//
//
//
//    
//
//}
