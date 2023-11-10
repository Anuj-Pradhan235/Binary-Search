class Solution {
    private:
    bool isPossible(vector<int>&stalls,int n,int k,int mid){
        int cowCnt=1,lastPos=stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-lastPos>=mid){
                cowCnt++;
                if(cowCnt>=k)return 1;
                lastPos=stalls[i];
            }
        }
        return 0;
    }
public:

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int start=0,end=stalls[n-1]-stalls[0];
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(isPossible(stalls,n,k,mid)){
                ans=mid;
                start=mid+1;
            }else end=mid-1;
            mid=start+(end-start)/2;
        }
        return ans;
    }
};