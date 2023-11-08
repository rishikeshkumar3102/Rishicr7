
class Solution {
public:
    int minEatingSpeed(vector<int> &piles, int h) {
        int low=1;
        int high=maxel(piles);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int Totalhr=TotalHours(piles,mid);
            if(Totalhr<=h){
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
    int maxel(vector<int> &piles)
{
    int maxi=INT_MAX;
    for(int i=0;i<piles.size();i++)
    {
        maxi=max(maxi,piles[i]);
    }
    return maxi;
}
int TotalHours(vector<int> &piles,int hourly)
{
    int Totalhr=0;
    for(int i=0;i<piles.size();i++)
    {
        Totalhr+=ceil((double) piles[i]/(double)hourly);
    }
    return Totalhr;
}
};