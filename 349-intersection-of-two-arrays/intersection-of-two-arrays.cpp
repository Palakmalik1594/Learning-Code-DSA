class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>v;
        int n=nums1.size();
        int nn=nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<nn;j++){
                if(nums1[i]==nums2[j]){
                v.insert(nums1[i]);
                }
            }
        }
        return vector<int>(v.begin(),v.end());
    }
};