class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> ar(n);
        for(int i = 0;i<n;i++){
            ar[i] = make_pair(nums[i],i);
        }
        sort(ar.begin(),ar.end());
        vector<int> v;
        int i = 0;
        int j = n-1;
        while(i<j){
            int x = ar[i].first;
            int y = ar[j].first;
            if(target>x + y){
                i++;
            }else if(target<x + y){
                j--;
            }else{
                v.push_back(ar[i].second);
                v.push_back(ar[j].second);
                break;
            }
        }
        return v;
    }
};