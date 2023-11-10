class Solution{
public:
//iterative
    bool binarySearch(int arr[],int n,int target){
        int start=0,end=n-1,mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==target)return 1;
            else if(arr[mid]<target)start=mid+1;
            else end=mid-1;
            mid=start+(end-start)/2;
        }
        return 0;
    }
    //recursive
    bool binarySearch(int arr[],int n,int start,int end,int target){
        if(start>end)return 0;
        int mid=start+(end-start)/2;
        if(arr[mid]==target)return 1;
        else if(arr[mid]<target)return binarySearch(arr,n,mid+1,end,target);
        else return binarySearch(arr,n,start,mid-1,target);
    }
}