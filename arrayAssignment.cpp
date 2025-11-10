#include <iostream>
#include <climits>
using namespace std;



bool checkDuplicate(int *arr , int n){

    for(int i = 0; i < n; i++){
        int curr = arr[i];

        for(int j = i+1 ; j < n; j++){
            if(curr == arr[j]){
                return true;
            }
        }
    }

    return false;

}



int binSearch(int *arr , int n , int key){
    int start = 0 , end = n-1;

    while ( start <= end){

        int mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[start] < arr[mid] ){
            if(arr[start] <= key && key <= arr[mid]){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }

        }

        else{
            if(arr[mid] <= key && key <= arr[end]){

                start = mid + 1;
            }

            else{
                end = mid-1;
            }

        }


    }

    return -1;

}


void prodSubArray(int *arr , int n){
    int maxProd = INT_MIN;

    for(int start = 0; start < n; start++){

        for(int end = start; end < n; end++){
            int prod = 1;
            for(int i = start ; i <= end; i++){
                prod = prod * arr[i];
            }
            maxProd = max(maxProd, prod);
        }
        cout<<endl;
    }

    cout<<"maximum possible prod of array is :"<<maxProd<<endl;


}

void prodSubArray2(int *arr , int n){
    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){
        int prod = 1;

        for(int end = start; end < n; end++){
            prod *= arr[end];
            maxSum = max(maxSum , prod);
        }
        cout<<endl;
    }

    cout<<"maximum possible prod of array is :"<<maxSum;


}

int maxProductSubarray3(int *arr, int n) {
    int maxProd = arr[0], minProd = arr[0], result = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) swap(maxProd, minProd);

        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);

        result = max(result, maxProd);
    }

    return result;
}



int main(){
    int arr[] = {1,2,2,3,4,1};
    int n = sizeof(arr) / sizeof(int);


    int arr1[] = {4,5,6,7,0,1,2};
    int arr2[] = {4,5,6,7,0,1,2};
    int n1 = sizeof(arr2) / sizeof(int);
    int key = 3;

    int prod[] = {2,3,-2,4};
    int n2 = sizeof(prod) / sizeof(int);


    // cout<<checkDuplicate(arr , n);
    // cout<<binSearch(arr2 , n1 , key) ;
    // prodSubArray(prod , n2);
    // prodSubArray2(prod , n2);
    cout<<maxProductSubarray3(prod , n2);








    return 0;
}