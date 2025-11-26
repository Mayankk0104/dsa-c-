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



// void towerOfHanoi(int n  , string src , string help , string dest){
//     if(n == 1){
//         cout<<"transfer disk :" << n << "from :" << src << "to" << dest<<"\n";
//         return;
//     }

//     towerOfHanoi(n-1,src ,dest , help );
//     cout<<"transfer disk :" << n << "from :"  << src << "to" << dest<<"\n";

//     towerOfHanoi(n-1 , help , src ,dest);


// }


// static int first = -1;
// static int last = -1;


// void findOccurences(string str , int idx ,char element){
//     if(idx == str.length()){
//         cout<<first<<"\n";
//         cout<<last<<"\n";
//         return;
//     }

//     char currChar = str.at(idx);

//     if(currChar == element){
//         if(first == -1){
//             first = idx;
//         }
//         else{
//             last = idx;
//         }
//     }

//     findOccurences(str,idx+1,element);

// }



// void movingallX(string str , int idx , string newStr ,int count){


//     if(idx == str.length()){
//         for(int i = 0; i < count; i++){
//             newStr += 'x';
//         }
//         cout<<newStr<<"\n";
//         return;
//     }

//     char currChar = str.at(idx);


//     if(currChar == 'x' ){
//         count++;
//         movingallX(str,idx+1,newStr,count);
//     }
//     else{
//         newStr += currChar;
//         movingallX(str,idx+1,newStr,count);

//     }

// }


// void printPerm(string str , string permutation){
//     if(str.length()== 0){
//         cout<<permutation<<endl;
//         return;
//     }

//     for(int i = 0; i < str.length(); i++){
//         char currChar = str.at(i);

//         string newStr = str.substr(0,i) + str.substr(i+1);
//         printPerm(newStr , permutation+currChar);
//     }

// }

// int countPath(int i , int j , int n , int m){

//     if(i == n || j == m){
//         return 0;
//     }

//     if(i == n-1 || j == m-1){
//         return 1;
//     }

//     int downPath = countPath(i+1 , j , n ,m);

//     int upPath = countPath(i,j+1,n,m);

//     return downPath + upPath;
// }


// int tilingProb( int n , int m){



//   if(n == m ){
//     return 2;
//   }

//   if( n < m){
//     return 1;
//   }
//     //horizontally
//     int horizonCount = tilingProb(n-1 ,m);

//     //vertically
//     int vertCount = tilingProb(n-m , m);

//     return horizonCount + vertCount;


// }

int main(){

    // cout<<tilingProb(4,2);



    // cout<<countPath(0,0,3,3);




//     printPerm("abcd", "");



    // string str = "aabnnjnrbeidad";
    // findOccurences(str,0,'a');

    // string str = "axbcxxd";
    // string newStr = "";
    // movingallX(str,0,newStr,0);


    // towerOfHanoi(3,"A","B","C");
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