//PROBLEM STATEMENT
/*
Given a string S, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same, as in the input string.
*/

//INPUT FORMAT
/*
The first and only line of input contains a string, that denotes the value of S.
*/

//OUTPUT FORMAT
/*
The first and only line of output contains the updated string, as described in the task.
*/

//CONSTRAINTS
/*
0 <= Length of S <= 10^8
Time Limit: 1 sec
*/

//SAMPLE INPUT1
/*
ababacd
*/

//SAMPLE OUTPUT1
/*
abcd
*/

//AUTHOR : AMITH GOLLA
//DATE   : 01-11-2021

#include <bits/stdc++.h>
using namespace std;

string uniqueChar(string str) {
	// Write your code here
    unordered_map<char, int> frequencies;
    for(int i = 0; i < str.size(); i++){
        frequencies[str[i]]++;
    }
    string ans;
    for(int i = 0; i < str.size(); i++){
        if(frequencies[str[i]] > 0){
            ans = ans + str[i];
            frequencies[str[i]] = 0;
        }
    }
    return ans;
}

int main(){
    string str;
    cin >> str;
    cout << uniqueChar(str);
}