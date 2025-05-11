#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl;

    return 0;
}

//using arrays
/* #include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
    int arr[]={2, 7, 11, 15, -2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target =13;
    int index1 = -1, index2=-1, i=0, j=n-1;
    sort(arr,arr+n);

    while(i<j){
        int pairSum = arr[i]+arr[j];
        if(pairSum>target){
            j--;
        }else if(pairSum<target){
            i++;
        }else{
            index1=i;
            index2=j;
            break;
        }
    }
    if(index1!=-1){
    cout<<"Pair Sum values are  "<<arr[index1]<<" and "<<arr[index2]<<" with target = "<<target <<" found at indices "<<index1 <<" and "<< index2<<endl;
    }else{
        cout<<"No pairs found with such target";
    }

    return 0;
} */