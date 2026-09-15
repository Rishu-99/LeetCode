class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        string fans = "";

        for (int i = 0; i < s.size(); i++) {
            ans = "";

            for (int j = i; j < s.size(); j++) {
                ans.push_back(s[j]);

                string rev = ans;
                reverse(rev.begin(), rev.end());

                if (ans == rev) {
                    if (ans.size() > fans.size()) {
                        fans = ans;
                    }
                }
            }
        }

        return fans;
    }
};