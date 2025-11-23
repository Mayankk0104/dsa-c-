#include <iostream>
#include <string>
#include <vector>
using namespace std;


// int tilingProblem(int n){

//     if(n == 0 || n == 1){
//         return 1;
//     }

//     return tilingProblem(n-1) + tilingProblem(n-2);
// }


// void removeDuplicates(string str , string ans , int i , int map[26]){
//     if(i == str.size()){
//         cout<<"ans:"<<ans<<endl;
//         return;
//     }

//     int mapIdx = str[i] - 'a';

//     if(map[mapIdx]){
//         removeDuplicates(str,ans,i+1,map);
//     }
//     else{
//         map[mapIdx] = true;
//         removeDuplicates(str, ans + str[i] , i + 1, map);
//     }

// }


// void removeDuplicates(string str , string ans , int map[26]){
//     int n = str.size();
//     if(n == 0){
//         cout<<"ans:"<<ans<<endl;
//         return;
//     }


//     int mapIdx = str[n - 1] - 'a';
//     char ch = str[n-1];
//     str = str.substr(0,n-1);

//     if(map[mapIdx]){
//         removeDuplicates(str,ans,map);
//     }
//     else{
//         map[mapIdx] = true;
//         removeDuplicates(str,ch+ ans , map);
//     }

// }


// int friendPairing(int n){
//     if(n == 1 || n == 2 ){
//         return n;
//     }

//     return friendPairing(n - 1) + (n-1) *friendPairing(n - 2);

// }

// void binString(int n , int lastPlace , string ans){
//     if(n == 0){
//         cout<<ans<<"\n";
//         return;
//     }

//     if(lastPlace != 1){
//         binString(n-1 , 0, ans + "0" );
//         binString(n-1 ,1, ans + "1" );
//     }
//     else{
//         binString(n-1 ,0, ans + "0" );
//     }
// }



// int binSearch(int arr[] , int target , int st , int end){
//     if(st > end){
//         return -1;
//     }

//     int mid = (st + end ) /2;



//     if(arr[mid] == target){
//         return mid;
//     }
//     else if(arr[mid] < target){
//         return binSearch(arr,target,mid+1,end);

//     }
//     else{
//         return binSearch(arr,target,st,mid-1);

//     }
// }






// vector<int> findingIndex(int arr[], int n, int i, int key) {

//     if (i == n) {
//         return {};                       // no more elements
//     }

//     vector<int> ans = findingIndex(arr, n, i + 1, key);   // get indices from rest

//     if (arr[i] == key) {
//         ans.insert(ans.begin(), i);      // include current index
//     }

//     return ans;
// }




int main(){
    // int arr[] = {3,2,4,5,6,2,7,2,2};
    // int size = sizeof(arr) / sizeof(int);
    // int indices[] = {0};

    // vector<int> ans = findingIndex(arr,size ,0, 2);
    // for(int i = 0; i < ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }

    // int arr[] = {1,2,3,4,5,6,7};
    // int size = sizeof(arr) / sizeof(int);

    // cout<<binSearch(arr,5,0,size-1);


    // string ans = "";
    // binString(4 , 0 , ans);



    // cout<<tilingProblem(5)<<"\n";
    // cout<<tilingProblem(4)<<"\n";


    // string str = "appnacollege";
    // int map[26] = {false};
    // string ans = "";
    // // removeDuplicates(str , ans , map);


    // cout<<friendPairing(4);






    return 0;
}