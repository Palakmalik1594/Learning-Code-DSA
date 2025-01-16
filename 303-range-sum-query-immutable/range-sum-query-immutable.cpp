class NumArray {
public:
vector<int>prefix;
    NumArray(vector<int>& nums) {
        //O(n)
        //build prefix array
        int n=nums.size();
        prefix.resize(n+1,0);
        for(int i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i-1];
        }
        
    }
    
    int sumRange(int left, int right) {

        //O(1)
        //sum from left to right
        
        return prefix[right+1]-prefix[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */