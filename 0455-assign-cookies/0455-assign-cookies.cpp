class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int childrenSize=g.size();
        int cookiesSize=s.size();
        int ch=0,ck=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(ch<childrenSize && ck<cookiesSize){
            if(g[ch]<=s[ck]){
                ch++;
            }
            ck++;
        }
        return ch; 
    }
};