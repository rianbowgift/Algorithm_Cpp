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
//    vector<string> arr;    //������  
//    vector<queue<string>> arr_q;  //�ܾ�ťŸ��
//    
//    queue<string> q;    //����Ȯ���� ť
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
//    string temp_q;      //���� ���纼 ť�� ���ڿ� �и�
//    getline(cin, temp_q);
//    vector<string> answer_q = split(temp_q, ' ');
//    for (int i = 0; i < answer_q.size(); i++) {
//        q.push(answer_q[i]);
//    }
//
//
//    for (int i = 0; i < n; i++) {       //���� ���ڿ� �и�
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
//    while (!q.empty()) {
//        
//        string temp = q.front();
//        q.pop();
//
//        bool sw = false;
//        for (int i = 0; i < n; i++) {
//
//            if (!arr_q[i].empty()) {    //�ش�ť���Ͱ� �Ⱥ���ִٸ� �˻�
//                if (arr_q[i].front() == temp) { //
//                    sw = true;
//                    arr_q[i].pop();
//                    break;
//                }
//            }
//
//
//        }
//
//        if (sw == false) {
//            cout << "Impossible";
//            return 0 ;
//        }
//
//        
//
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (!arr_q[i].empty()) {
//            cout << "Impossible";
//            return 0;
//        }
//    }
//
//    cout << "Possible";
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
