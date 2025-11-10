#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;



vector<int> func(vector<int> set){

    vector<int> result;

    int n = set.size();

    int freq[n+1] = {0};

    for(int i = 0; i < n; i++){\

        freq[set[i]]++;

    }



    for(int i = 1; i <= n; i++){

        if(freq[i] == 2){
            result.push_back(i);

        }

        else if(freq[i] == 0){
            result.push_back(i);
        }

    }

    return result;
}




int maxArea(vector<int>& height){
    int left = 0 , right = height.size()-1 , maxArea = 0;

    while(left < right){
        int currArea = min(height[left] , height[right]) * (right - left);
        maxArea = max(maxArea , currArea);

        if(height[left] < height[right]){
            left++;
        }
        else{
            right--;
        }
    }

    return maxArea;


}

vector<vector<int>> threeSum(vector<int>& nums){

    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin() , nums.end());


    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i - 1]){
            continue;
        }

        int j = i + 1 , k = n - 1;

        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];

            if(sum < 0){
                j++;
            }

            else if(sum > 0){
                k--;
            }

            else{
                vector<int> temp = {nums[i] , nums[j] , nums[k]};
                ans.push_back(temp);
                j++;
                k--;

                while( j < k && nums[j] == nums[j-1] ){
                    j++;
                }
                while(j < k && nums[k] == nums[k+1]){
                    k--;
                }
            }
        }
    }

    return ans;
}



int main(){

    vector<int> set = {1,2,3,3,5,6,7,8,9,10};
    vector<int> ans = func(set);
    // cout<<ans[0]<<" "<<ans[1];


    vector<int> height = {1,8,6,2,5,4,8,3,7};
    // cout<<maxArea(height);

    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> res = threeSum(nums);

    for(int i = 0 ; i < res.size(); i++){

        for(int j = 0 ; j < res[i].size(); j++){
            cout<<res[i][j]<<" ";
        }

        cout<<endl;

    }


    return 0;
}