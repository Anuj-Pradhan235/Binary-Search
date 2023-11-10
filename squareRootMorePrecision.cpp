class Solution{
private:
    long long int floorSqrt(long long int x) 
    {
        long long int start=0,end=x,mid=start+(end-start)/2,ans=-1;
        while(start<=end){
            long long num=mid*mid;
            if(num==x)return mid;
            else if(num<x){
                ans=mid;
                start=mid+1;
            }else end=mid-1;
            mid=start+(end-start)/2;
        }
        return ans;
    }
public:
  double morePrecision(long long n, long long tempSol,int precision){
    double factor=1;
    double ans=tempSol;
    while(precision--){
        factor/=10;
        double j=ans;
        while(j*j<=n){
            j+=factor;
            ans=j;
        }
    }
    return ans;
  }    
};