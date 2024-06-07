class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int left = 1;
        int n = piles.size();
        int right = 0;
        for(int pile:piles){
            right = max(right,pile);
        }
        int mid;
        
        while(left <= right){
            mid = left + (right-left)/2;
            long long total = 0;
            
            for(int pile:piles){
                total = total + (pile+mid-1)/mid;
            }
            
            if(total <= h) right = mid-1;
            else left = mid + 1;
            
        }
        return left;
        
    }
};