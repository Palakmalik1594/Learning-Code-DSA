class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int inc=1;
        int dec=1;
        int maxlen=1;
        if(n==1){
            return 1;
        }
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                inc++;
                dec=1;
            }else if(nums[i]<nums[i-1]){
                dec++;
                inc=1;
            }else{
                inc=1;
                dec=1;
            }
        
        maxlen=max(maxlen,max(inc,dec));
        }
        return maxlen;
    }
};