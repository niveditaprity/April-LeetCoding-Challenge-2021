class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
       map<char,int>m1;
        for(int i=0;i<order.size();i++)
            m1[order[i]]=i;
        for(int i=0;i<words.size()-1;i++)
        {
            if(m1[words[i][0]]>m1[words[i+1][0]]){
                  
                    return false;}
            if(words[i][0]==words[i+1][0])
            {
            for(int j=0;j<words[i].size();j++)
            {
                
                if(j>=words[i+1].size())
                    return false;
                if(m1[words[i][j]]>m1[words[i+1][j]]){
                    
                    return false;}
                if(m1[words[i][j]]<m1[words[i+1][j]])
                    break;
            }
            }
        }
        return true;
    }
};
