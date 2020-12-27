//Here i have use combination formula which is Ncr
class Solution {
public:
    int uniquePaths(int m, int n) {
        long long int N=m+n-2;
        long long int R=m-1;
        long long int res=1;
        for(int i=1;i<=R;i++)
                res=res*(N-R+i)/i;
        return res;
    }
};