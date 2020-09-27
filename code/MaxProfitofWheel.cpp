class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        int total = 0;
        for (auto c : customers) {
            total += c;
        }

        int onboard = 0, redundent = 0, maxProfits = 0, temp = 0, order = 0;
        int round = customers.size();
        for (size_t i = 0; i < round; i++) {
            if (customers[i] + redundent >= 4) {
                onboard += 4;
                redundent = total - onboard;
            } else {
                onboard += customers[i];
            }
            
            temp = onboard * boardingCost - (i + 1) * runningCost;
            if (temp > maxProfits) {
                maxProfits = temp;
                order = i + 1;
            }
        }

        while (redundent > 0) {
            if (redundent < 4) {
                onboard += redundent;
            } else {
                onboard += 4;
            }
            
            round++;
            temp = onboard * boardingCost - round * runningCost;
            
            if (temp > maxProfits) {
                maxProfits = temp;
                order = round;
            }
            
            redundent -= 4;
        }
        
        if (order == 0) {
            return -1;
        }
        
        return order;
    }
};