// https://www.geeksforgeeks.org/problems/remove-k-digits/1 
//C
string removeKdigits(string S, int K) {
        stack<char> st;
        for(int i = 0; i<S.length(); i++){
            if(st.empty())
            st.push(S[i]);
            else{
                while(st.size() and K and S[i]<st.top()){
                    st.pop();
                    K--;
                }
                st.push(S[i]);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        //ans will be in reverse so
        reverse(ans.begin(), ans.end());
        ans = ans.substr(0, ans.length() - K);
        int i = 0;
        while(i<ans.length() and ans[i] == '0'){
            i++;
        }
        if(i == ans.length()) return "0";
        else
        return ans.substr(i);
    }
