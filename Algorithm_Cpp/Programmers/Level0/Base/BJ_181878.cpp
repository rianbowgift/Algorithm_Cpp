//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string myString, string pat) {
//    int answer = 0;
//    string temp;
//    string temp_pat;
//    
//    for (int i = 0; i < myString.length(); i++) {
//        temp += tolower(myString[i]);
//    }
//    for (int i = 0; i < pat.length(); i++) {
//        temp_pat += tolower(pat[i]);
//    }
//    if (temp.find(temp_pat) != std::string::npos) {
//        answer = 1;
//    }
//    return answer;
//}
//
//int main() {
//    string myString = "aaAA";
//    string pat = "aaaaa";
//    solution(myString, pat);
//
//}