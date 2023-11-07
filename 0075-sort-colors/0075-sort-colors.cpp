class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*int zero=0;
        int one=0;
        int two=0;
        int i=0;
        int n=nums.size();
        while(i<n)
        {
            if(nums[i]==0)
            {
            zero++;
            i++;
            }
            else if(nums[i]==1)
            {
            one++;
            i++;
            }
            else
            {
            two++;
            i++;
            }
        }
        for(i=0;i<zero;i++)
        {
            nums[i]=0;
        }
        for(i=zero;i<zero+one;i++)
        {
            nums[i]=1;
        }
        for(i=zero+one;i<n;i++)
        {
            nums[i]=2;
        }*/
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};