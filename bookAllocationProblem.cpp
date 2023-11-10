class Solution 
{
private:
    bool isPossible(int A[],int N,int M,int mid){
        int stdCnt=1,noOfPages=0;
        for(int i=0;i<N;i++){
            if(A[i]+noOfPages<=mid)noOfPages+=A[i];
            else{
                stdCnt++;
                if(stdCnt>M || A[i]>mid)return 0;
                noOfPages=A[i];
            }
        }
        return 1;
    }
public:
    int findPages(int A[], int N, int M) 
    {
        if(M>N)return -1;
        int start=0,end=0,ans=-1;
        for(int i=0;i<N;i++)end+=A[i];
        int mid=start+(end-start)/2;
        while(start<=end){
            if(isPossible(A,N,M,mid)){
                ans=mid;
                end=mid-1;
            }else start=mid+1;
            mid=start+(end-start)/2;
        }
        return ans;
    }
};