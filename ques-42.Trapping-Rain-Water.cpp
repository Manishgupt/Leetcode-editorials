class Solution {
public:
    int trap(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        int maxleft=0,maxright=0,res=0;
        while(low<high)
        {
            if(arr[low]<=arr[high])
            {
                maxleft=max(maxleft,arr[low]);
                res+=maxleft-arr[low];
                low++;
            }
            else
            {
                maxright=max(maxright,arr[high]);
                res+=maxright-arr[high];
                high--;
            }
        }
        return res;
    }
};
