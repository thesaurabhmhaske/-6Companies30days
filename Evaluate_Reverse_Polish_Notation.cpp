#include <cstdlib>
class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> st;

        for(int i=0;i<s.size();i++){
            if(s[i]!="+" && s[i]!="-" && s[i]!="*" && s[i]!="/"){
                st.push(stoi(s[i]));
            }
            else{
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                int ans;
                if(s[i]=="+") ans = a+b;
                else if(s[i]=="-") ans = b-a;
                else if(s[i]=="*") ans = a*b;
                else ans = b/a;
                st.push(ans);
                //cout<<a<<" "<<b;
            }
            //cout<<endl;
        }
        return st.top();
    }
};
