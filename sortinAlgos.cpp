#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void printArray(char *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" , ";
    }
    cout<<endl;
}

// void bubbleSort(int *arr, int n)
// {

//     for (int i = 0; i < n - 1; i++)
//     {

//         for (int j = 0; j < n - i - 1; j++)
//         {

//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }


//     }


//     printArray(arr, n);
// }



void selectionSort(int *arr , int n){



    for(int  i = 0; i < n-1; i++){
        int minIdx = i;



        for(int j = i+1; j < n; j++)
        if(arr[j] < arr[minIdx]){
            minIdx = j;
        }



        swap(arr[i] , arr[minIdx]);
    }





}

void insertionSort(int *arr  , int n){

    for(int i = 1 ; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr ){
            swap(arr[prev] , arr[prev+1] );
            prev--;
        }
        arr[prev + 1] = curr;





    }






}


void countingSort(int *arr, int n){
    int freq[100000];
    int minValue = INT_MAX , maxValue = INT_MIN;





    for(int i = 0; i < n; i++){
       freq[arr[i]]++;
        minValue = min(minValue , arr[i]);
        maxValue = max(maxValue , arr[i]);

    }

    for(int i = minValue ,j=0; i <= maxValue; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;

        }
    }


}



void  insertionSortChar(char *arr  , int n){

    for(int i = 1 ; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] < curr ){
            swap(arr[prev] , arr[prev+1] );
            prev--;
        }
        arr[prev + 1] = curr;
    }

    printArray(arr,n);

}




int main()
{

    char ch[] = {'f','b','a','e','c','d'};
    insertionSortChar(ch,6);

    // int arr1[] = {5, 4, 1, 3, 2};

    // int n1 = sizeof(arr1) / sizeof(int);
    //    sort(arr1 + 1  , arr1+4 );
    //    printArray(arr1,n1);

    // bubbleSort(arr1, n1);
    // selectionSort(arr1 , n1);
    // insertionSort(arr1 , n1);

    // int arr2[] ={1,4,1,3,2,4,3,7};
    // int n2 = sizeof(arr2) / sizeof(int);



    // countingSort(arr2,n2);

    return 0;
}