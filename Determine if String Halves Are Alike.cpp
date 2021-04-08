class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int ah=0,bh=0;
for(int i=0;i<n/2;i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
{
ah++;
}
}
            for(int i=(n/2);i<n;i++)
        {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
               {
                   bh++;
               }
        }
           if(ah==bh)
           {
               return true;
           }
           else
           {
               return false;
           }
        
    }
};
