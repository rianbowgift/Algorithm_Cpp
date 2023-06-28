#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for (int i = 0; i < str_list.size(); i++) {
        bool sw = true;
        int temp = 0;
        int count = ex.length();
        for (int j = 0; j < str_list[i].length(); j++) {
            if (str_list[i][j] == ex[temp]) {
                count--;
                temp++;
            }
            else {
                temp = 0;
            }
            if(count==0){
                sw = false;
                break;
            }
        }
        if (sw == true) {
            answer += str_list[i];
        }
    }
    return answer;
}

