//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> num_list, int n) {
//    vector<int> answer;
//    vector<int> temp;
//    vector<int> temp2;
//    for (int i = 0; i < num_list.size(); i++) {
//        if (i < n) {
//            temp.push_back(num_list[i]);
//        }
//        else {
//            temp2.push_back(num_list[i]);
//        }
//    }
//    for (int i = 0; i < temp.size(); i++) {
//        temp2.push_back(temp[i]);
//    }
//    answer = temp2;
//    return answer;
//}