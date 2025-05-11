#include <iostream>
#include <vector>
using namespace std;


vector<int> majorityEle(vector<int> nums){
    int n = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int el : nums){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            return {val};
        }
        
    }
    return {-1};
}
int main(){
    vector<int> nums = {2, 2, 1, 2, 2};
    vector <int> val = majorityEle(nums);
    for(int x : val){
        cout<< x << endl ; 
    }
    return 0;
}