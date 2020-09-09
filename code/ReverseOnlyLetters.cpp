class Solution {
public:
    string reverseOnlyLetters(string S) {
        if (S.size() <= 1) {
            return S;
        }
        size_t j = S.size() - 1;
        for (size_t i = 0; i < S.size(); i++) {
            if (i >= j) {
                break;
            }
            if (!isalpha(S[i])) {
                continue;
            }
            while (!isalpha(S[j])) {
                j--;
            }
            swap(S[i], S[j]);
            j--;
        }
        return S;
    }
};