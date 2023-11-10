class Solution
{
public:
    int peakElement(int arr[], int n)
    {
       int start=0,end=n-1,mid=start+(end-start)/2;
       while(start<end){
           if(arr[mid]<arr[mid+1])start=mid+1;
           else end=mid;
           mid=start+(end-start)/2;
       }
       return start;
    }
};
