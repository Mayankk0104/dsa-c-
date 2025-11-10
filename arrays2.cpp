#include <iostream>
#include <climits>
using namespace std;


void printSubArray(int *arr ,int  n){
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            for(int i = start; i <= end; i++){
                cout<<arr[i];
            }
            // cout<<"("<<start<<","<<end<<")";
            cout<<",";
        }
        cout<<endl;

    }

}

void printMaxSubArray(int *arr , int n){
    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){

        for(int end = start; end < n; end++){
            int sum = 0;
            for(int i = start ; i <= end; i++){
                sum = sum + arr[i];
            }
            maxSum = max(maxSum , sum);
        }
        cout<<endl;
    }

    cout<<"maximum possible sum of array is :"<<maxSum;


}

void printMaxSubArray2(int *arr , int n){
    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){
        int sum = 0;

        for(int end = start; end < n; end++){
            sum += arr[end];
            maxSum = max(maxSum , sum);
        }
        cout<<endl;
    }

    cout<<"maximum possible sum of array is :"<<maxSum;


}

void kadanesalgo(int *arr , int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum , currSum);

        if(maxSum < 0){
            currSum = 0;
        }

    }
    cout<<"Max possible sum is :"<<maxSum;

}


void maxProfit(int *prices , int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    for(int i = 1; i < n; i++){
        bestBuy[i] = min(bestBuy[i-1] , prices[i-1]);
    }

    int maxProfit = 0;
    for(int i = 0; i < n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit , currProfit);
    }

    cout<<"max profit is :"<<maxProfit<<endl;


}

void trapRainWater(int *height , int n){
    int leftMax[20000];
    int rightMax[20000];
    leftMax[0] = height[0];
    rightMax[n-1] = height[n-1];



    for(int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i-1] , height[i-1]);

    }

    cout<<endl;

    for(int i = n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1] , height[i+1]);

    }

    int waterTrapped = 0;
    for(int i = 0; i < n; i++){
        int currWater = min(leftMax[i] , rightMax[i] ) - height[i];
        if(currWater > 0)
        {
            waterTrapped += currWater;
        }
    }
    cout<<"water trapped : "<<waterTrapped;



}



int main(){

    int arr[] = {2-3,6,-5,4,2};
    int prices[] = {7,1,5,3,6,4};
    int height[] = {4,2,0,6,3,2,5};
    int n = sizeof(arr) / sizeof(int);
    int n1 = sizeof(prices) / sizeof(int);
    int n2 = sizeof(height) / sizeof(int);

    // printSubArray(arr,n);
    // printMaxSubArray(arr,n);
    // printMaxSubArray2(arr,n);
    // kadanesalgo(arr,n);
    // maxProfit(prices , n1);
    trapRainWater(height , n2);











    return 0;
}