class Solution {
public:
    bool isValid(string s) {
        if (s.size()%2 != 0) {
            return false;
        }
        
        stack<char> parens;
        for (auto& p : s) {
            if (p == '(' || p == '[' || p == '{') {
                parens.push(p);
                continue;
            } 
            
            if (parens.empty()) return false;
            
            if (p == ')' && parens.top() != '(') return false;
            if (p == ']' && parens.top() != '[') return false;
            if (p == '}' && parens.top() != '{') return false;
            
            parens.pop();
        }
        
        return parens.empty();
    }
};