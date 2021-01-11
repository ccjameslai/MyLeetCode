class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.size() == 0) {
            return 0;
        }
        int init = timeSeries[0];
        int diff = 0;
        int PoisonedDuration = 0;
        for (int t = 1; t < timeSeries.size(); t++) {
            diff = timeSeries[t] - init;
            if (diff < duration) {
                PoisonedDuration += diff;
            } else {
                PoisonedDuration += duration;
            }
            
            init = timeSeries[t];
        }
        
        return PoisonedDuration + duration;
    }
};