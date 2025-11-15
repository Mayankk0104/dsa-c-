#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


// vector<int> twoPairSum(vector<int> vec , int keySum){
//    //only work for sorted data , if unsorted indexes get lost after sorting
//     int start = 0 , end = vec.size() - 1;

//     sort(vec.begin() , vec.end());

//     while(start <= end){
//         if(vec[start] + vec[end] == keySum){
//             cout<<"Sum  :"<<vec[start]<<" "<<vec[end]<<"\n";
//             break;
//         }
//         else if(vec[start] + vec[end] > keySum){
//             end--;

//         }
//         else{
//             start++;

//         }
//     }


// }



// vector<int> errorInt(vector<int> vec){
//     int freq[vec.size()+1] = {0};
//     vector<int> ans;

//     for(int i = 0; i < vec.size(); i++){
//         freq[vec[i]]++;
//     }

//     int sizeFreq = sizeof(freq) / sizeof(int);

//     for(int i = 1; i < sizeFreq; i++ ){
//         if(freq[i] == 1 ){
//             continue;
//         }
//         else if(freq[i] == 2){
//             ans.push_back(i);
//         }
//         else if(freq[i] == 0){
//             ans.push_back(i);

//         }

//     }

//     return ans;

// }




// int mostWater(vector<int> vec ){

//     int left = 0 , right = vec.size()-1 , maxArea = 0;
//     while(left < right){

//         int currArea = min(vec[left] , vec[right]) * (right - left);
//         maxArea = max(currArea , maxArea);

//         if(vec[left] < vec[right]){
//             left++;
//         }
//         else{
//             right--;
//         }
//     }

//     return maxArea;
// }



// vector<vector<int>> threeSum(vector<int> vec) {

//     vector<vector<int>> ans;
//     sort(vec.begin(), vec.end());  // ascending

//     for(int i = 0; i < vec.size(); i++) {

//         if(i > 0 && vec[i] == vec[i-1]) continue;

//         int j = i + 1, k = vec.size() - 1;

//         while(j < k) {
//             int sum = vec[i] + vec[j] + vec[k];

//             if(sum < 0) j++;
//             else if(sum > 0) k--;
//             else {
//                 ans.push_back({vec[i], vec[j], vec[k]});
//                 j++; k--;

//                 while(j < k && vec[j] == vec[j-1]) j++;
//                 while(j < k && vec[k] == vec[k+1]) k--;
//             }
//         }
//     }

//     return ans;

// }


int main(){




    // vector<int> vec = {-1,0,1,2,-1,-4};
    // vector<vector<int>> ans = threeSum(vec);

    // for(int i = 0; i < ans.size(); i++){

    //     for(int j = 0; j <ans[i].size(); j++){

    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // vector<int> height = {1,8,6,2,5,4,8,3,7};
    // vector<int> testCase = {1,1};
    // cout<<"Max water it can hold is :"<<mostWater(height)<<"\n";
    // cout<<"max water it can hold is :"<<mostWater(testCase);


    // vector<int> vec = {1,1};
    // vector<int> ans = errorInt(vec);

    // for(int i = 0; i <ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }


    // int size;
    // cout<<"Enter size of array:"<<" ";
    // cin>>size;

    // int *arr = new int[size];
    // int x = 1;

    // for(int i = 0; i < size; i++){
    //     arr[i] = x;
    //     x++;
    //     cout<<arr[i]<<" ";
    // }


    // int rows,cols;
    // cout<<"Enter rows:"<<" ";
    // cin>>rows;

    // cout<<"Enter columns:"<<" ";
    // cin>>cols;

    // int **matrix = new int *[rows];

    // for(int i = 0; i < rows; i++){
    //     matrix[i] = new int[cols];
    // }
    // int x = 1;
    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++){
    //         matrix[i][j] = x++;
    //         cout<<matrix[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }

    // cout<<matrix[3][3]<<" ";
    // cout<<*(*(matrix+3)+3)<<" ";


    // vector<int> vec = {1,2,3,4,5,6,7,8,9,10};

    // for(int i = 0; i < vec.size(); i++){
    //     cout<<vec[i]<<" ";

    // }
    // cout<<vec[4]<<"\n";
    // cout<<*(vec.data() + 4)<<" \n";
    // cout<<*(&vec[0] + 4)<<"\n";

    // vector <int> vec = {3,2,4};
    // int keySum = 6;
    // vector<int> ans = twoPairSum(vec,keySum);
    // for(int i = 0; i < ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }

    // vector <vector<int>> matrix = {{2,4,6,8},{10,20,30},{5,10,15,20,25}};

    // for(int i = 0; i < matrix.size(); i++){

    //     for(int j = 0; j < matrix[i].size(); j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
















    return 0;
}