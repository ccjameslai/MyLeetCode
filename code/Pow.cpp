class Solution {
public:
    unordered_map<int, double> cache;
    
    double myPow(double x, int n) {
        if (n == 0) return 1;
        if (n == 1) return x;
        if (n == 2) return x * x;
                
        int a = 0, b = 0;
        if (n < 0) {
            x = 1 / x;
            a = -1 * (n / 2);
            b = -1 * (n + a);
        } else {
            a = n / 2;
            b = n - a;
        }
        
        auto p = cache.find(n);
        if (p != end(cache)) return p->second;
        cache[n] = myPow(x, a) * myPow(x, b);
        
        return cache[n];
    }
};