#include<vector>
#include<stack>
#include<string>
#include<unordered_map>
#include<iostream>

using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            int n = s.size();
            if(n % 2 != 0) 
                return false;
            stack<char> st;
            unordered_map<char, char> mp = {
                {')', '('},
                {']', '['},
                {'}', '{'}
            };
            for(char c : s) {
                if(mp.count(c)){
                    if(st.empty() || st.top() != mp[c]){
                        return false;
                    }
                    st.pop();
                }else{
                    st.push(c);
                }
            }
            return st.empty();     
        }
    };

    int main(){
        Solution s;
        string str = "()[]{}";
        cout<<s.isValid(str)<<endl;
        return 0;
    }