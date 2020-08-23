class Solution {
public:
    string transformWords(string s, int idx) {
        if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u'||
                s[0] == 'A'|| s[0] == 'E'|| s[0] == 'I'||s[0] == 'O' || s[0] == 'U') {
                s += "ma";
        } else {
            s = s.substr(1, s.size()-1) + s[0] + "ma";
        }
        for (int j = 0; j < idx; j++) {
            s += "a";
        }
        
        return s;
    }
    
    string toGoatLatin(string S) {
        vector<int> space;
        string result;
        int size = S.size();
        for (size_t i = 0; i < size; i++) {
            if (!isalnum(S[i])) {
                space.push_back(i);
            }
        }
        
        if (space.size() == 0) {
            return transformWords(S, 1);
        }
        
        int idx = 1;
        string temp;
        for (size_t i = 0; i < space.size(); i++) {
            if (i == 0) {
                temp = S.substr(0, space[i]);
                result += transformWords(temp, idx) + " ";
            } else {
                temp = S.substr(space[i-1]+1, space[i] - space[i-1] -1);
                result += transformWords(temp, idx) + " ";
            }
            idx++;
            temp = "";
        }
        temp = S.substr(space[space.size()-1]+1, size);
        result += transformWords(temp, idx);
        
        return result;
    }
};