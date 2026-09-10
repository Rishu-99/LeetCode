class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char,int> an;
    if(s.size()!=t.size())
        return false;
    for(char c:s)
    {
        an[c]++;
    }
    for(char c:t)
    {
        an[c]--;
        if(an[c]<0){
            return false;
    }
    }
    return true;         
    }
};