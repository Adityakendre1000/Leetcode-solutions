class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        int n = bloomDay.size();
        long long j = (long long)m * k;
        if(j > n) return -1;

        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;
        
        while(left <= right){
            int mid = left + (right - left) / 2;
            int kcount = 0;
            int mcount = 0;

            for(int day : bloomDay) {
                if(day <= mid) {
                    ++kcount;
                    if(kcount == k) {
                        ++mcount;
                        kcount = 0;
                    }
                } 
                else {
                    kcount = 0;
                }

                if(mcount == m) break;
            }

            if(mcount == m) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }
};