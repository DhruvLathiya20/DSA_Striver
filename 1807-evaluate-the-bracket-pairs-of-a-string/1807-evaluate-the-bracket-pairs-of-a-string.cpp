class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for (auto i : knowledge) {
            mp[i[0]] = i[1];
        }
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '(') {
                ans += s[i];
            } else {
                i++;
                string key = "";
                while (s[i] != ')') {
                    key += s[i];
                    i++;
                }
                if (mp.find(key) != mp.end()) {
                    ans += mp[key];
                } else {
                    ans += '?';
                }
            }
        }
        return ans;
    }
};