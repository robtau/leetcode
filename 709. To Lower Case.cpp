class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;str[i];i++) str[i]=tolower(str[i]);
        return str;
    }
};
