class Solution {
public:
    string modifyString(string s) {
        if (s[0] == '?') {
            if (s[1] == '?') {s[0] = 'a';}
            int d = 1;
            do {
                s[0] = static_cast<char>('a' + d);
                d++;
            } while (s[0] == s[1]);
        }
        
        for (size_t i = 1; i < s.size(); i++) {
            if (s[i] != '?') { continue; }
            int d = 0;
            do {
                s[i] = static_cast<char>('a' + d);
                d++;
            } while ((s[i] == s[i-1]) || (s[i] == s[i+1]));
        }
        return s;
    }
};