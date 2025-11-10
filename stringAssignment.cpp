#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

void lowerCaseVowels(string str, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        char curr = str[i];

        if (curr == 'a' || curr == 'e' || curr == 'i' || curr == 'o' || curr == 'u')
        {
            count++;
        }

        // if('a' <= curr && curr <= 'z'){
        //     count++;
        // }
    }

    cout << count << " " << endl;
}



bool canMakeEqual(string s1, string s2) {
    if (s1.length() != s2.length()) return false;

    int first = -1, second = -1;  // to store mismatch indices
    int mismatchCount = 0;

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            mismatchCount++;
            if (first == -1) {
                first = i;
            } else if (second == -1) {
                second = i;
            } else {
                // more than 2 mismatches
                return false;
            }
        }
    }

    // Case 1: strings are already equal
    if (mismatchCount == 0) return true;

    // Case 2: must be exactly 2 mismatches, and they should "cross match"
    if (mismatchCount == 2 &&
        s1[first] == s2[second] &&
        s1[second] == s2[first]) {
        return true;
    }

    return false;
}


bool isStringClose(string word1 , string word2){
    if(word1.length() != word2.length()) return false;

    int freq1[26] = {0};
    int freq2[26] = {0};


    for(char c : word1) freq1[c -'a']++;
    for(char c : word2) freq2[c - 'a']++;

     // Step 1: check character sets (both must have same chars)
    for (int i = 0; i < 26; i++) {
        if ((freq1[i] == 0 && freq2[i] != 0) ||
            (freq1[i] != 0 && freq2[i] == 0)) {
            return false;
        }
    }

    // Step 2: check if frequency distribution matches (ignoring which char)
    sort(freq1, freq1 + 26);
    sort(freq2, freq2 + 26);

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) return false;
    }

    return true;
}


// bool isValidParentheses(string s){
//     char arr[s.length()];

//     int top = -1;

//     for(char c : s){
//         if(c == '(' || c == '{' || c =='['){
//             arr[++top] = c;
//         }

//         else if(c == ')' || c == '}' || c ==']'){
//             if(top == -1){
//                 return false;
//             }

//             else if()

//         }
//     }


// }


int main()
{

    string str = "MayAAnkkk";
    // lowerCaseVowels(str , str.length());

    // string s1 = "bank";
    // string s2 = "kanb";

    // if (canMakeEqual(s1, s2))
    //     cout << "true" << endl;
    // else
    //     cout << "false" << endl;

    // string word1 = "cabbba";

    // string word2 = "abbccc";

    // (isStringClose(word1,word2)) ? cout<<"True" : cout<<"False";


    string s = "{}";

    // (isValidParentheses(s)) ? cout<<"True" : cout<<"False";



    return 0;
}