class Solution {
    public:
        int binarysearch(int arr[], int n, int k) {
            
            int low=0;
            int high=n-1;
            int pos=-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(arr[mid]==k){
                    pos = mid;
                    break;
                }
                else if(arr[mid]>k){
                    high = mid -1;
                }
                else {
                    low = mid+1;
                }
            }
            return pos;
        }
    
};