class Solution {
public:
    int strStr(string haystack, string needle) {
        const char* c = strstr(haystack.c_str(), needle.c_str());

        if(c == nullptr)
        {
            return -1;
        }

        return c - haystack.c_str();
    }
};