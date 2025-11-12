#include <iostream>
using namespace std;

// void maxProdSubArray(int *arr, int n)
// {
//     int prefix = 1, suffix = 1, prod = INT16_MIN;

//     for (int i = 0; i < n; i++)
//     {

//         if (prefix == 0)
//         {
//             prefix = 1;
//         }

//         else if (suffix == 0)
//         {
//             suffix = 1;
//         }

//         prefix *= arr[i];
//         suffix *= arr[n - i - 1];
//         prod = max(prod, max(prefix, suffix));
//     }

//     cout << "Maximum product SubArray :" << prod;
// }

// int rotatedSearch(int *arr, int n, int key)
// {

//     int st = 0, end = n - 1;

//     while (st <= end)
//     {
//         int mid = (st + end) / 2;

//         if (arr[mid] == key)
//         {
//             return mid;
//         }

//         if (arr[mid] > arr[st])
//         {
//             if (arr[st] <= key && key <= arr[mid])
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 st = mid + 1;
//             }
//         }

//         else
//         {
//             if (arr[mid] <= key && key <= arr[end])
//             {
//                 st = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

void printArray(int *arr, int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

// int binarySearch(int *arr, int key, int n)
// {

//     int st = 0, end = n - 1;

//     while (st <= end)
//     {

//         int mid = (st + end) / 2;

//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (key > mid)
//         {
//             st = mid;
//         }
//         else
//         {
//             end = mid;
//         }
//     }

//     return -1;
// }

// void maxSubArray(int *array , int n){

//     int maxSum = INT16_MIN;

//     for(int start = 0; start < n; start++){

//         for(int end = start; end < n; end++){
//             int currSum = 0;
//             for(int i = start ; i <= end; i++){
//                 currSum += array[i];

//             }
//             if(maxSum < currSum){
//                 maxSum = currSum;
//             }
//         }

//         cout<<endl;
//     }

//     cout<<maxSum;
// }

// void maxSubArray2(int *array , int n){

//     int maxSum = INT16_MIN;

//     for(int start = 0; start < n; start++){
//         int currSum = 0;

//         for(int end = start; end < n; end++){
//             currSum += array[end];
//             maxSum = max(currSum,maxSum);

//         }

//         cout<<endl;
//     }

//     cout<<maxSum;
// }

// void kadanesAlgo(int arr[] , int n){

//     int currSum = 0;
//     int maxSum = INT16_MIN;
//     for(int i = 0; i < n; i++){
//         currSum += arr[i];
//         maxSum = max(currSum , maxSum);
//         if(currSum < 0){
//             currSum = 0;
//         }
//     }

//     cout<<"Max sum of array is :"<<maxSum<<"\n";

// }

// int linearSearch(int *array , int key , int n){

//     for(int j = 0; j < n; j++){

//     if(array[j] == key){
//         return j;
//     }

//  }

//     return -1;

// }

// void buySell(int *arr , int n){
//      int bestBuy[10000];
//      bestBuy[0] = INT32_MAX;
//      int maxProfit = INT32_MIN;

//      for(int i = 1; i < n; i++){
//         bestBuy[i] = min(arr[i-1] , bestBuy[i-1]);
//      }

//      for(int i = 0; i < n; i++){
//         int currProfit = arr[i] - bestBuy[i];
//         maxProfit = max(currProfit,maxProfit);

//      }

//      cout<<"Max profit is :"<<maxProfit<<"\n";

// }

// void waterTrapped(int *heights , int n){
//     int leftMax[20000] , rightMax[20000];
//     leftMax[0] = heights[0] , rightMax[n-1] = heights[n-1];

//     //leftmax calculations
//     for(int i = 1; i < n; i++){
//         leftMax[i] = max(leftMax[i-1],heights[i-1]);

//     }

//     //rightmax calculations
//     for(int j = n-2; j >= 0; j--){
//         rightMax[j] = max(rightMax[j+1] , heights[j+1]);

//     }

//     int trappedWater = 0;

//     for(int k = 0; k < n; k++){
//         int currWater = min(leftMax[k] , rightMax[k]) - heights[k];

//         if(currWater > 0){
//             trappedWater += currWater;
//         }
//     }

//     cout<<"Maximum trapped water is :" <<trappedWater<<"\n";
// }

// void bubbleSort(int *arr , int n){

//     for(int i = 0; i < n; i++){

//         for(int j = 0; j < n-i-1; j++){
//             if(arr[j] > arr[j + 1]){
//                 swap(arr[j] , arr[j + 1]);
//             }
//         }
//     }

//     printArray(arr,5);

// }

// void selectionSort(int *arr , int n){

//     for(int i = 0; i < n-1; i++){



//         int minIdx = i;

//         for(int j = i + 1; j < n; j++){
//             if(arr[j] < arr[minIdx]){
//                 minIdx = j;
//             }
//         }

//         swap(arr[minIdx] ,arr[i] );
//     }


//     printArray(arr,5);
// }

int main()
{


    int array[] = {2,9,1,0,3};
    // bubbleSort(array,5);
    // selectionSort(array,5);

    // int marks[50];

    // cout<<marks[0]<<"\n"; //garbage values

    // int marks1[50] = {1,2,3};
    // cout<<marks1[1]<<" "<<marks[10]<<"\n";

    // int marks2[] = {2,3,4};
    // cout<<marks2[1]<<" "<<marks2[10]<<"\n";

    // cout<<sizeof(marks)<<" "<<sizeof(marks1)<<" "<<sizeof(marks2)<<"\n";

    // int ages[5];
    // cout<<"Enter ages:"<<"\n";
    // cout<<sizeof(ages)<<"\n";

    // for(int i = 0; i < (sizeof(ages)/sizeof(int)); i++){
    //     cin>>ages[i];
    // }

    // for(int j = 0; j < (sizeof(ages)/sizeof(int)); j++){
    //     cout<<ages[j]<<" ";
    // }

    // int array[8] = {100,30,70,60,20,79,96,42};

    // printArray(array,8);

    // cout<<*array<<" "<<*(array + 1)<<" "<<*(array + 2)<<"\n";

    // int max = INT32_MIN;

    // for(int i = 0; i < (sizeof(array)/sizeof(int)); i++){
    //     if(max < array[i]){
    //         max = array[i];
    //     }
    // }

    // cout<<"Largest element in given array is :"<<max<<"\n";

    // int min = INT32_MAX;

    // for(int j = 0; j < (sizeof(array)/sizeof(int)); j++){
    //     if(min > array[j]){
    //         min = array[j];
    //     }

    // }
    // cout<<"Smallest element in given array is :"<<min<<"\n";

    //  int array[8] = {100,30,70,60,20,79,96,42};
    //  int key = 60;

    //  cout<<linearSearch(array,key,8);

    // int array[] = {0,2,4,6,8};

    // // int revArray[5];
    // int n = 5;

    // for(int j = 0; j < (sizeof(array) / sizeof(int)); j++){
    //     int i =  n -j -1;

    //     revArray[j] = array[i];

    // }

    // int st = 0 , end = n-1;

    // while(st < end){

    //     int temp = array[st];
    //     array[st] = array[end];
    //     array[end] = temp;

    //     // swap(array[st], array[end]);
    //     st++;
    //     end--;

    // }

    // printArray(array , n);

    // int array[] = {2, 4, 6, 9, 10, 12, 30, 50, 90};
    // int key = 50;
    // int n = sizeof(array) / sizeof(int);

    // cout << binarySearch(array, key, n);

    // int a = 10;
    // int *aptr = &a;
    // cout<<aptr<<" ";
    // cout<<++aptr;

    // int array[] = {2,-3,6,-5,4,2};

    // int n = sizeof(array) / sizeof(int);

    // for(int start = 0; start < n; start++){

    //     for(int end = start; end < n; end++){
    //         for(int i = start ; i <= end; i++){
    //             cout<<array[i];
    //         }
    //         cout<<" , ";
    //     }

    //     cout<<endl;
    // }

    // maxSubArray2(array,n);
    // kadanesAlgo(array , n);

    // int array[] = {7,1,5,3,6,9};
    // int n = sizeof(array) / sizeof(int);

    // buySell(array,n);

    // int heights[] = {4,2,0,6,3,2,5};
    // int n = sizeof(heights) / sizeof(int);

    // waterTrapped(heights ,n);

    // int array[5] = {2, 9, -5, -9, 6};
    // int n = sizeof(array) / sizeof(int);

    // maxProdSubArray(array, n);

    // int array[] = {5, 6, 7, 1, 2, 3, 4, 5};
    // int n = sizeof(array) / sizeof(int);

    // cout << rotatedSearch(array, n, 10);

    return 0;
}