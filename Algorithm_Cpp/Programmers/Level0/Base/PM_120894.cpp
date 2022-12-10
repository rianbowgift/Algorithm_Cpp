//#include<iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//long long solution(string numbers) {
//    long long answer;
//    string temp = "";
//
//    string x_all[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
//    
//    while (numbers.length() != 0) {
//        string word = "";
//        for (int i = 0; i < numbers.length(); i++) {
//            word += numbers[i];
//
//            if (word.length() >= 3) {
//                for (int j = 0; j < 10; j++) {
//                    if (x_all[j] == word) {
//                        temp += to_string(j);
//                        numbers = numbers.substr(x_all[j].length(),numbers.length());
//                        break;
//                    }
//                }
//            }
//
//
//        }
//    }
//    answer = stol(temp);
//
//
//
//
//    return answer;
//}
//
//int main() {
//
//	string numbers = "onetwothreefourfivesixseveneightnine";
//    solution(numbers);
//
//}