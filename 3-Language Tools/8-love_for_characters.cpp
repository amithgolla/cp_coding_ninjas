//PROBLEM STATEMENT
/*
Ayush loves the characters ‘a’, ‘s’, and ‘p’. He got a string of lowercase letters and he wants to find out how many times characters ‘a’, ‘s’, and ‘p’ occurs in the string respectively. Help him find it out.
*/

//INPUT
//First line contains an integer denoting length of the string.
//Next line contains the string.

//CONSTRAINTS
/*
1<=n<=10^5
‘a’<= each character of string <= ‘z’
*/

//OUTPUT
/*
Three space separated integers denoting the occurrence of letters ‘a’, ‘s’ and ‘p’ respectively.
*/

//SAMPLE INPUT
/*
6
aabsas
*/

//SAMPLE OUTPUT
/*
3 2 0
*/

//AUTHOR : AMITH GOLLA
//DATE   : 01-11-2021

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> frequencies;
    for(int i = 0; i < n; i++){
        frequencies[s[i]]++;
    }
    cout << frequencies['a'] << " " << frequencies['s'] << " " << frequencies['p'] << endl;
 }