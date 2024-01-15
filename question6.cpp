#include<iostream>
#include<vector>
using namespace std;

int robHelper(vector<int>&nums,int start,int end){
    int prevMax=0;
    int currMax=0;

    for(int i=start;i<=end;i++){
        int temp=currMax;
        currMax=max(prevMax+nums[i],currMax);
        prevMax=temp;
    }
    return currMax;
}

int rob(vector<int>&nums){
    int n=nums.size();

    if(n==1){
        return nums[0];
    }
    else if(n==2){
        return max(nums[0],nums[1]);
    }
    else{
        int result1=robHelper(nums,0,n-2);
        int result2=robHelper(nums,1,n-1);
        return max(result1,result2);
    }

}

int main(){
    vector<int>houses={2,3,2};
    int result=rob(houses);
    cout<<result;
    return 0;
}