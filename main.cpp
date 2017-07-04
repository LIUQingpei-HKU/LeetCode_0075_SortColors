#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int length = nums.size();
        int middle = 1;
        int lt = -1;//arr[0,...,lt]<middle
        int i = 0;//arr[lt+1,..i-1]==middle
        int gt = length;//arr[gt,....,length-1]>m
        while(i<gt){
            if(nums[i]<middle){
                //swap nums[i] and nums[lt+1]
                int temp = nums[i];
                nums[i] = nums[lt+1];
                nums[lt+1] = temp;
//                swap(nums[i],nums[lt+1]);

                i++;
                lt++;
            }else if(nums[i]>middle){
                //swap nums[i] and nums[gt-1]
                int temp = nums[i];
                nums[i] = nums[gt-1];
                nums[gt-1] = temp;
//                swap(nums[i],nums[gt-1]);

                gt--;
            }else{//nums[i]==middle
                i++;
            }
        }
        return;
    }
};


int main() {
    int arr[10] = {1,1,1,0,0,0,2,0,2,2};
    vector<int> v(arr,arr+10);
    Solution s = Solution();
    s.sortColors(v);
    for(int i=0;i<10;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}

