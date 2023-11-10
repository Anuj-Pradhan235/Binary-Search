class Solution{
private:
    int pivotIndex(int arr[],int n){
        int start=0,end=n-1,mid=start+(end-start)/2;
        while(start<end){
            if(arr[0]<=arr[mid])start=mid+1;
            else end=mid;
            mid=start+(end-start)/2;
        }
        return start;
    }
    int binarySearch(int arr[],int s,int e,int key){
        int start=s,end=e,mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==key)return mid;
            else if(arr[mid]<key)start=mid+1;
            else end=mid-1;
            mid=start+(end-start)/2;
        }
        return -1;
    }
public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int n=h+1;
        int p=pivotIndex(A,n);
        if(key>=A[p] && key<=A[h])return binarySearch(A,p,h,key);
        else return binarySearch(A,0,p-1,key);
    }
};