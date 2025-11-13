#include <iostream>
using namespace std;
#include <algorithm>

// void printArray(int *arr, int n)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cout << arr[j] << " ";
//     }
//     cout << endl;
// }

// void insertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int curr = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > curr)
//         {
//             swap(arr[j], arr[j + 1]);

//             j--;
//         }

//         arr[j + 1] = curr;
//     }

//     printArray(arr, n);
// }

// void countingSort(int arr[], int n)
// {

//     int freq[10000];
//     int minVal = INT32_MAX, maxVal = INT32_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         freq[arr[i]]++;
//         minVal = min(minVal, arr[i]);
//         maxVal = max(maxVal, arr[i]);
//     }

//     for (int i = minVal, j = 0; i <= maxVal; i++)
//     {

//         while (freq[i] > 0)
//         {
//             arr[j++] = i;
//             freq[i]--;
//         }
//     }

//     printArray(arr, 8);
// }

// void printSpiralMatrix(int arr[][4] ,int n, int m){

//     int sRow = 0 , sCol = 0 , eRow = n - 1 , eCol = m - 1;

//     while(sRow <= eRow && sCol <= eCol){

//     //top
//     for(int j = sCol ; j <= eCol; j++){
//         cout<<arr[sRow][j]<<" ";
//     }

//     //right
//     for(int i = sRow + 1; i <= eRow; i++){
//         cout<<arr[i][eCol]<<" ";
//     }

//     //bottom
//     for(int j = eCol - 1; j >= sCol; j--){
//         if(sRow == eRow){
//             break;
//         }
//         cout<<arr[eRow][j]<<" ";
//     }

//     //left
//     for(int i = eRow - 1; i > sRow; i--){
//         if(sCol == eCol){
//             break;
//         }
//         cout<<arr[i][sCol]<<" ";
//     }

//     sRow++;
//     sCol++;
//     eRow--;
//     eCol--;

//     }

// }

// void diagonalSum(int mat[][4] , int n , int m){
//     int sum = 0;

//     for(int i = 0; i < n; i++){

//         for(int j = 0; j < n; j++){

//             if(i == j){
//                 sum += mat[i][j];
//             }
//             else if(j == n - i -1){
//                 sum += mat[i][j];
//             }

//         }
//     }

// cout<<sum<<"\n";
// }

// void diagonalSum1(int mat[][4] , int n , int m){

//     int sum = 0;

//     for(int i = 0; i < n; i++){
//         sum += mat[i][i];

//         if(i != n-i-1){
//             sum += mat[i][n-i-1];
//         }

//     }

//     cout<<sum<<"\n";

// }

// bool stairCaseSearch(int mat[][4] , int n , int m , int key){

//     int i = 0 ,  j = m - 1;

//     while( i < n && j >= 0){
//         if(mat[i][j] == key){
//             cout<<"Found at :"<<i<<" "<<j<<"\n";\
//             return true;

//         }

//         else if(mat[i][j] > key)
//         {
//             j--;
//         }
//         else{
//             i++;
//         }
//     }

//     cout<<"Value not found"<<" \n";
//     return false;
// }

// bool stairCaseSearch2(int mat[][4] , int n , int m , int key){

//     int i = n - 1 , j = 0;

//     while(i >= 0 && j < m){
//         if(mat[i][j] == key){
//             cout<<"Found at :"<<i<<" "<<j<<"\n";\
//             return true;

//         }

//         else if(mat[i][j] > key)
//         {
//             i--;
//         }
//         else{
//             j++;
//         }
//     }

//     cout<<"key not found"<<"\n";
//     return false;

// }

// void oneDimToTwo(int *arr ,int size , int n , int m){

//     int mat[n][m];

//     if( n * m != size){
//         cout<<"Not possible .";
//     }
//     else{
//         int idx = 0;

//         for(int i = 0; i < n; i++){

//             for(int j = 0; j < m; j++){
//                 mat[i][j] = arr[idx++];
//                 cout<<mat[i][j]<<" ";
//             }

//             cout<<endl;

//         }

//     }

// }


// void rotate90deg(int arr[][3] , int n , int m){

//     for(int i = 0; i < 2; i++){

//         for(int j = i+1; j < 3 ; j++){

//             swap(arr[i][j] , arr[j][i]);
//         }

//     }

//     for(int i = 0; i < n; i++){
//         int st = 0 ,  end = n - 1;


//          while(st < end){
//         swap(arr[i][st] , arr[i][end]);
//         st++;
//         end--;


//     }

//     }




//     for(int i = 0; i < n; i++){
//         for(int j = 0; j  < m; j++){
//             cout<<arr[i][j]<<" ";
//         }

//         cout<<endl;
//     }



// }
int main()
{
    // int array[] = {2,3,5,1,0,2,5,0,4};
    // int size = sizeof(array) / sizeof(int);

    // int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // rotate90deg(array,3,3);


    // oneDimToTwo(array,size, 3,3);


    // int array[2][3] = {{10,20,30}, {50,60,70}};

    // int array1[3][2];

    // for(int i = 0; i < 3; i++){

    //     for(int j = 0; j < 2; j++){
    //         array1[i][j] = array[j][i];
    //         cout<<array1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }






    // int array[] = {2,9,1,0,3};
    // insertionSort(array,5);

    // int array1[] = {1,3,1,1,4,5,7,2};
    // countingSort(array1,8);

    // sort(array , array + 3);
    // printArray(array,5);

    // sort(array , array + 5 , greater<int>());
    // printArray(array , 5);

    // int multiArray[2][3] = {{20, 40, 60}, {100, 120, 140}};

    // int multiArray1[2][3];

    // for(int i = 0; i < 2; i++){

    //     for(int j = 0; j < 3; j++){
    //         cout<<multiArray[i][j]<<" ";
    //     }

    //     cout<<endl;
    // }

    // for (int i = 0; i < 2; i++)
    // {

    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> multiArray1[i][j];
    //     }

    //     cout << endl;
    // }

    // for (int i = 0; i < 2; i++)
    // {

    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << multiArray1[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    // int Matrix[4][4] = { {1, 2, 3, 4},
    //                         {5, 6, 7, 8},
    //                         {9, 10, 11, 12},
    //                         {13, 14, 15, 16} };

    // printSpiralMatrix(spiralMat,4, 4);

    // diagonalSum(Matrix,4,4);
    // diagonalSum1(Matrix,4,4);

    // int Matrix[4][4] = { {10, 20, 30, 40},
    //                         {15, 25, 35, 45},
    //                         {27, 29, 37, 48},
    //                         {32, 33, 39, 50} };

    // stairCaseSearch2(Matrix,4,4,69);


    return 0;
}