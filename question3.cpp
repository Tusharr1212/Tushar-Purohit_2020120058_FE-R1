#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>&prices){
int n=prices.size();

if(n<=1){
    return 0;
}

int maxProfit=0;
int minPrice=prices[0];

for(int i=0;i<n;i++){
    minPrice=min(minPrice,prices[i]);
    int currentProfit=prices[i]-minPrice;
    maxProfit=max(maxProfit,currentProfit);
}
return maxProfit;
}

int main(){
    vector<int>prices=(7,1,5,3,6,4);
    int result=maxProfit(prices);
    cout<<"Maximum Profit is : "<<result;
    return 0;
}