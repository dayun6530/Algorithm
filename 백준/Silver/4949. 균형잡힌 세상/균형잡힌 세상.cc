#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void){

    while (1){

        string s;

        getline(cin, s);

        stack<char> st;

        if (s.length() == 1 && s[0] == '.') {
            break;
        }

        bool flag = true;

        for (int i = 0; i < s.length(); i++){

            if (s[i] == '(') {
                st.push(s[i]);
            }
            else if (s[i] == '[') {
                st.push(s[i]);
            }
            else if (s[i] == ']'){
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                }else{
                    flag = false;
                    break;
                }
            }
            else if (s[i] == ')'){

                if (!st.empty() && st.top() == '(') {
                    st.pop();
                }
                else {
                    flag = false;
                    break;
                }
            }
        }

        if (flag && st.empty())

            cout << "yes\n";

        else

            cout << "no\n";

    }

    return 0;

}



