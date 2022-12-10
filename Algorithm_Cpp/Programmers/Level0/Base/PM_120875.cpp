#include<iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;

}

int solution(vector<vector<int>> dots) {
    int answer = 0;



  
    
    if ((abs(dots[0][0] - dots[1][0]) == abs(dots[2][0] - dots[3][0])) &&
        abs(dots[0][1] - dots[1][1]) == abs(dots[2][1] - dots[3][1])) {
        
        answer++;
    }
    else if ((abs(dots[0][0] - dots[2][0]) == abs(dots[1][0] - dots[3][0])) &&
        abs(dots[0][1] - dots[2][1]) == abs(dots[1][1] - dots[3][1])) {
        answer++;
    }
    else if ((abs(dots[0][0] - dots[3][0]) == abs(dots[1][0] - dots[2][0])) &&
        abs(dots[0][1] - dots[3][1]) == abs(dots[1][1] - dots[2][1])) {
        answer++;
    }



    //1.두개의 점을 몇번 이어봐야하는가
    //12 34   13 24    14 23 3번!


    //평행인지 어떻게 판단하는가







    return answer;
}

int main() {

    //vector<vector<int>> dots = { {1, 4},{9, 2},{3, 8},{11, 6}};
    //vector<vector<int>> dots = { {2,3},{4,5},{8,9},{9,10} };
    vector<vector<int>> dots = { {3, 5},{4, 1},{2, 4},{5, 10} };
    solution(dots);

}