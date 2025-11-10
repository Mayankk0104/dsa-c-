#include <iostream>
#include <utility>
#include <climits>
using namespace std;

void spiralMatrix(int matrix[][4], int n, int m)
{
    int sRow = 0, sCol = 0, eRow = n - 1, eCol = m - 1;

    while (sRow <= eRow && sCol <= eCol)
    {
        // top
        for (int j = sCol; j <= eCol; j++)
        {
            cout << matrix[sRow][j] << " , ";
        }

        // Right
        for (int i = sRow + 1; i <= eRow; i++)
        {
            cout << matrix[i][eCol] << " , ";
        }

        // bottom
        for (int j = eCol - 1; j >= sCol; j--)
        {  //to conter duplicacyy
            if(sRow == eRow){
                break;
            }
            cout << matrix[eRow][j] << " , ";
        }

        // left
        for (int i = eRow - 1; i >= sRow + 1; i--)
        { //to conter duplicacyy
            if(sCol == eCol){
                break;
            }
            cout << matrix[i][sCol] << " , ";
        }

        sRow++;
        sCol++;
        eRow--;
        eCol--;
    }
}


void diagonalSum(int matrix[][4] , int n , int m){
    int currSum = 0;
    for(int i =0; i < n; i++){

        for(int j = 0; j < m; j++){
            if(i == j ){
                currSum +=matrix[i][j];
            }
            else if(j == n-i-1){
                currSum +=matrix[i][j];

            }
        }

    }

    cout<<currSum<<endl;

}

void diagonalSum2(int matrix[][4] , int n ){
    int currSum = 0;

    for(int i = 0 ; i < n ; i++){
        currSum += matrix[i][i]; //pd

        if(i != n-i-1){
            currSum += matrix[i][n-i-1]; //sd
        }



    }

    cout<<currSum<<endl;


}


bool searchBrute(int matrix[][4] , int n , int key){

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            if(key == matrix[i][j]){
                cout<<i<<" "<<j<<" ";
                return true;
            }



        }
    }
  return false;

}

int main()
{

    // int student[3][3] = {
    //                         {100,100,100},
    //                         {85,87,90},
    //                         {20,20,20}
    //                     };

    // int n = sizeof(student) / sizeof(int);

    // cout<<student[1][1]<<endl; //1st row 1st col

    //  for(int i = 0; i < 3; i++){

    //     for(int j = 0; j < 3; j++){
    //         cout<<student[i][j]<<" , ";
    //     }
    //     cout<<endl;
    // }

    int num[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int num2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int num3[4][4] = {{10,20,30,40} , {15,25,35,45} ,{27,29,37,48},{32,33,39,50}};

    // spiralMatrix(num, 4, 4);
    // diagonalSum(num,4,4);
    // diagonalSum2(num,4);
    searchBrute(num3,4,39);



    return 0;
}