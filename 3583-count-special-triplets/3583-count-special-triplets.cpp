class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        // int i = 0;
        // int j = 1;
        // int k = 2;
        long long n = nums.size();
        long long count = 0;

        // unordered_map<int,int> mymap; 
        // unordered_map<int,vector<int>> mymap1;

        // for(int i = 0; i <= n; i++){
        //     mymap[nums[i]]++;
        //     mymap1[nums[i]].push_back(i);
        // }

        // for(auto const& pair: mymap){

        // }

        unordered_map<long long,long long> mp1;
        unordered_map<long long,long long> mp2;

        for(long long i = 1; i < n; i++) mp1[nums[i]]++;

        mp2[nums[0]]++;

        for(long long j = 1; j < n-1; j++){
            mp1[nums[j]]--;
            long long x = nums[j]*2;
            count = count + mp2[x]*mp1[x];
            mp2[nums[j]]++; 
        }

        return count%1000000007;
    }
};