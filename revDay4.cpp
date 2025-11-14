#include <iostream>
using namespace std;
#include <cstring>
#include <algorithm>

// string lowerToUpper(string word , int n){

//     for(int i = 0; i < n; i++){
//         char ch = word[i];

//         if( 'a' <= ch && ch <= 'z'  ){
//             word[i] = ch - 'a' + 'A';
//         }

//     }

//     return word;

// }

// void revCharArray(char array[]){

//     int st = 0 , end = strlen(array) - 1;

//     while(st < end){
//         swap(array[st++] , array[end--]);
//     }

//     cout<<array<<"\n";

// }

// bool validPalindrome(char arr[] ){

//     int st = 0 , end = strlen(arr) - 1;

//     while(st < end){
//         if(arr[st++]!=arr[end--] ){
//             cout<<"not a palindrome";
//             return false;
//         }

//     }

//             cout<<"palindrome hai";
//             return true;

// }

// bool validAnagram(string str1 , string str2){
//     int n = str1.length() , m = str2.length();
//     int count[26] = {0};

//     if(n != m){
//         cout<<"Invalid Anagram";
//         return false;
//     }

//     else{
//         for(int i = 0; i  < n; i++){
//             int idx = str1[i] - 'a';
//             count[idx]++;
//         }

//         for(int j = 0; j < m; j++){
//             int idx = str2[j] - 'a';
//             if(count[idx] == 0){

//                 cout<<"invalid";
//             }
//             count[idx]--;
//         }

//     }

//     cout<<"valid Anagram";
//     return true;

// }

// bool singleSwap(string str1 , string str2){

//     int count = 0, st = 0 , end = 0;

//     if(str1.length() != str2.length()){
//         cout<<"not possible";
//         return false;
//     }
//     else{

//         for(int i = 0; i < str1.length(); i++){

//             if(str1[i] != str2[i]){
//                 count++;
//                 if(count > 2){
//                     cout<<"not possible";
//                     return false;
//                 }
//                 else{
//                     if(count == 1){
//                         st = i;
//                     }
//                     else{
//                         end = i;
//                     }
//                 }
//                 }
//         }

//     }

//     return(str1.at(st) == str2.at(end) && str2.at(st) == str1.at(end));

// }

// bool twoEqual(string word1, string word2)
// {

//     int freq1[26] = {0}, freq2[26] = {0};

//     if (word1.length() != word2.length())
//     {
//         cout << "Length not same , not equal";
//         return false;
//     }

//     for (char ch : word1)
//     {
//         freq1[ch - 'a']++;
//     }
//     for (char ch : word2)
//     {
//         freq2[ch - 'a']++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (freq1[i] == 0 && freq2[i] != 0 || freq2[i] == 0 && freq1[i] != 0)
//         {
//             cout << "not";
//             return false;
//         }
//     }

//     sort(freq1, freq1 + 26);
//     sort(freq2, freq2 + 26);

//     for (int i = 0; i < 26; i++)
//     {
//         if (freq1[i] != freq2[i])
//         {
//             return false;
//         }
//     }

//     cout << "Yes , equal strings.";
//     return true;
// }



int main()
{


    // string word1 = "abc";
    // string word2 = "abx";

    // twoEqual(word1, word2);

    // char word[] = "apPle";
    // int  n = strlen(word);
    // cout<<lowerToUpper(word,n);

    // char array[] = {'c','o','d','e','\0'};
    // revCharArray(array);

    // char array[] = "racecar";
    // validPalindrome(array);

    // string str1 = "naaram";
    // string str2 = "ana";
    // validAnagram(str1,str2);

    // string str1 = "mayakn";
    // string str2 = "mayank";

    // cout<<singleSwap(str1,str2);

    return 0;
}