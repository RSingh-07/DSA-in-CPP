#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> majorityEle(vector<int> nums){
    int n = nums.size();

    //sort 
    sort(nums.begin(), nums.end());

    //freq count
    int freq = 1;
    int ans =nums[0];
    for(int i=1;i<n;i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans =nums[i];
        }
        if(freq > n/2){
            return {ans};
        }
    }
   
        return {-1};
    

}
int main(){
    vector<int> nums = {3, 1, 2, 3, 4, 3, 5,3,3};
    vector <int> val = majorityEle(nums);
    for(int x : val){
        cout<< x << endl ; 
    }
    return 0;
}