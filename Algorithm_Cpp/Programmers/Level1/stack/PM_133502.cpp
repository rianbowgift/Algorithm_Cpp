//#include<iostream>
//#include <string>
//#include <vector>
//#include<stack>
//
//using namespace std;
//
//int solution(vector<int> ingredient) {
//    int answer = 0;
//
//    stack<int> st;
//    //1 = 빵
//    //2 = 야채
//    //3 = 고기
//    //순서  1231
//
//
//    for (int i = 0; i < ingredient.size(); i++) {
//
//        //if (st.empty()) {   //비어있으면 바로채우기
//        //    st.push(ingredient[i]);
//        //    continue;
//        //}
//
//        st.push(ingredient[i]);
//        
//
//
//        if (st.top() ==  1 && st.size()>=4) {
//            st.pop();
//            if (st.top() == 3) {
//                st.pop();
//                if (st.top() == 2) {
//                    st.pop();
//                    if (st.top() == 1) {
//                        st.pop();
//                        answer++;
//                    }
//                    else {
//                        st.push(2);
//                        st.push(3);
//                        st.push(1);
//                    }
//                }
//                else {
//                    st.push(3);
//                    st.push(1);
//                }
//            }
//            else {
//                st.push(1);
//            }
//        }
//        
//
//        
//        
//        
//
//    }
//
//
//    return answer;
//}
//
//int main() {
//    vector<int> ingredient = { 2, 1, 1, 2, 3, 1, 2, 3, 1 };
//    solution(ingredient);
//
//}