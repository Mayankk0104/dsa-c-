#include <iostream>
using namespace std;

void printingSameNumber(int arr[][3], int n, int m, int key)
{

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                count++;
            }
        }
    }

    cout << "No of 7s is :" << count<<endl;
}

void printSecondROw(int arr[][4] , int n ,int m){
    int currSum = 0;
    int rowNumber = 1;

    for(int j = 0; j < m; j++ ){
        currSum += arr[rowNumber][j];

    }
    cout<<"Sum of 2nd row numbers is:"<<currSum<<endl;


}

void printArray(int arr[][2] , int n , int m){

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++ ){

            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }


}

void transposingArray(int arr[][3] , int n , int m){

    int transposeArray[3][2]= {};

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++ ){

            transposeArray[j][i] = arr[i][j];

        }
    }

    printArray(transposeArray,3,2);


}

void oneToTwoDimension(int arr[] ,int size ,int  n , int m){



    if(size != m * n){
        cout<<"nott";
    }


    else if (size == m*n){

        int twoDArray[n][m];
        int index = 0;

        for(int i = 0; i < n; i++){


            for(int j = 0 ; j < m; j++){
                twoDArray[i][j] = arr[index];
                cout<<twoDArray[i][j]<<" ";
                index++;

            }

            cout<<endl;
        }
    }


}


void rotateMatrixBy90(int arr[][3] , int n){

    int newMatrix[n][n];

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            newMatrix[i][j] = arr[n-1-j][i];
        }

    }



    //printing

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){
            cout<<newMatrix[i][j]<<" ";

        }
        cout<<endl;
    }



}

int main()
{

    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(int);

    int arr1[2][3] = {{4, 7, 8},
                      {8, 8, 7}};


    int arr2[3][4] = {{1, 4, 9},
                      {11, 4, 3},
                      {2, 2, 3}};


      int arr3[3][3] = {{1, 2,3},
                      {4,5, 6},
                      {7, 8, 9}};



    // printingSameNumber(arr1, 2, 3, 7);
    // printSecondROw(arr2,3,4);

    // transposingArray(arr1,2,3);

    // oneToTwoDimension(arr,size,2,2);

    rotateMatrixBy90(arr3,3);

    return 0;
}