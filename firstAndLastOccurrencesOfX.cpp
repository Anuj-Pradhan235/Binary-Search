class Solution
{
private:
    int firstOcc(int arr[],int n,int x){
        int ans=-1;
        int start=0,end=n-1,mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==x){
                ans=mid;
                end=mid-1;
            }else if(arr[mid]<x)start=mid+1;
            else end=mid-1;
            mid=start+(end-start)/2;
        }
        return ans;
    }
    int lastOcc(int arr[],int n,int x){
        int ans=-1;
        int start=0,end=n-1,mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==x){
                ans=mid;
                start=mid+1;
            }else if(arr[mid]<x)start=mid+1;
            else end=mid-1;
            mid=start+(end-start)/2;
        }
        return ans;
    }
public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        return {firstOcc(arr,n,x),lastOcc(arr,n,x)};
    }
};