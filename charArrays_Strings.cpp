#include <iostream>
using namespace std;
#include <cstring>
#include <string>


void toUpperCase(char word[] , int n){

    for(int i = 0; i < n; i++){

        char ch = word[i];
         if('A' <= ch && ch <= 'Z'){ 
            continue;
        }

        else {
                 word[i] = ch-'a' + 'A';
        }
    }


}

void toLowerCase(char word[] , int n){

    for(int i = 0; i < n; i++){

        char ch = word[i];
         if('a' <= ch && ch <= 'z'){ 
            continue;
        }

        else {
                 word[i] = ch-'A' + 'a';
        }
    }


}

void reverseCharArray(char arr[] , int n){

    int st = 0 ,  end = n -1;
    while( st <= end){
        swap(arr[st++] , arr[end--]);
    }
}


bool validPalindrome(char arr[] , int n){
    
    int st = 0 ,  end = n - 1;
    while( st < end){
        if(arr[st++] != arr[end--]){
            cout<<"not a valid palindrome";
            return false;
        }

        
    }
    cout<<"Valid palindrome";
    return true;
}

bool isValiAnagram(string str1 , string str2){
    int count[26]={0};

    if(str1.length() != str2.length()){
        cout<<"Not a valid anagram";
        return false;
    }

    else{

        for(int i = 0; i < str1.length(); i++){
            int idx = str1[i] - 'a';
            count[idx]++;

        }
        for(int i = 0; i < str2.length(); i++){
            int idx = str2[i]-'a';

            if(count[idx] == 0){
                cout<<"not a valid anagram";
                return false;
            }
            count[idx]--;

        }
    }

    cout<<"valid anagram";
    return true;

}


int main(){

    char word[] = "racecar";
    
    // toUpperCase(word , strlen(word));
    // toLowerCase(word , strlen(word));
    // reverseCharArray(word,strlen(word));
    // validPalindrome(word,strlen(word));


     string str1 = "catr";
     string str2 = "cart";

     isValiAnagram(str1 , str2);






    return 0;
}