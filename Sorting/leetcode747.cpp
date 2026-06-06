class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int n =nums.size();
       int firstMax=-1;
       int secondMax=-1;
       int index;
       for(int i=0;i<n;i++)
       {
        if(nums[i]>firstMax)
        {
            secondMax=firstMax;
            firstMax=nums[i];
             index=i;
        }
        else if(nums[i]>secondMax) secondMax=nums[i];
       }
       if(firstMax>=secondMax*2)
       {
        return index;
       }
       else
       {
        return -1;
       }
    }
};