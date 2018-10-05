class Solution {
public:
    bool isValid(string s) {
        stack<char> stos;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                stos.push(')');
            } else if(s[i]=='['){
                stos.push(']');
            } else if(s[i]=='{'){
                stos.push('}');
            }else{
                if(stos.empty()){
                    return false;
                }else if(s[i]==stos.top()){
                    stos.pop();
                }else{
                    return false;
                }
            }
        }
        if(!stos.empty()) return false;
        return true;
    }
};
