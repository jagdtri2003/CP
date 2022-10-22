class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int lo=0;
        int mid=0;
        int hi=n-1;
        
        while(mid<=hi){
            if(a[mid]==0)
            {
                swap(a[mid++],a[lo++]);
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else if(a[mid]==2)
            {
                swap(a[mid],a[hi--]);
            }
        }
    }
    
};