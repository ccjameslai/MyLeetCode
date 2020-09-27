class Solution {
public:
    int minOperations(vector<string>& logs) {
        int step = 0;
        for (size_t i = 0; i < logs.size(); i++) {
            if (logs[i] == "../" && i >= 1) {
                if (step != 0) {
                    step--;    
                }
            } else if (logs[i] != "./" && logs[i] != "../") {
                step++;
            }
        }
        return step;
    }
};