class Solution {
public:
    string removeDuplicates(string s, int k) {
      stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty()||st.top().first!=s[i])
            {
            st.push({s[i],1});
            }
            else
            {
                if(st.top().second+1==k)
                {
                    st.pop();
                }
                else
                {
                    st.top().second+=1;
                }
            }
        }
        string str;
        while(!st.empty())
        {
            for(int i=0;i<st.top().second;i++)
            {
            str= st.top().first + str;
            }
            st.pop();
        }
        return str;
    }
};
