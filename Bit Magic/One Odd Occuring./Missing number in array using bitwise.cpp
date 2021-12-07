class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sum=0,total=0;
        for(int i=0;i<array.size();i++)
        {
            sum=sum^array[i];
        }
       
       for(int i=1;i<=n;i++)
       {
           total=total^i;
       }
        return total^sum;
    }
};
