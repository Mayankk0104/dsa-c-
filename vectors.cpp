#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


vector<int> pairSum(vector<int> vec , int targetSum){
    int start = 0 , end = (vec.size()-1);
    int currSum = 0 ;

    while(start < end){
        currSum = vec[start] + vec[end];
        if(currSum == targetSum){
            cout<<start<<" "<<end;
            break;
        }

        else if(currSum > targetSum){
            end--;
        }

        else {
            start++;
        }
    }

}


int  main(){

    vector<int> vec = {2,7,11,15};
    pairSum(vec,9);












    return 0;
}