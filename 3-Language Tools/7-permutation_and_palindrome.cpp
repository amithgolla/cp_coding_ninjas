//PROBLEM STATEMENT
/*
You are given a string s with length n. You should find a permutation P of numbers 1 through n such that if you apply this permutation on the string s, you will get a palindromic string.

The result of applying a permutation P on the string s is a string t with length n such that for each i (1 ≤ i ≤ n), the i-th character of t is given as as t[i] = s[Pi].
*/

//INPUT
/*
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains the string s.
*/

//OUTPUT
/*
For each test case, print a single line. If it is impossible to find a valid permutation P, this line should contain a single integer -1. Otherwise, it should contain n space-separated integers P1, P2, ..., Pn.
If there are multiple valid permutations, you may print any one.
*/

//CONSTRAINTS
/*
1 ≤ n ≤ 10^5
s will consist only of lowercase English letters (i.e. characters 'a' through 'z')
*/

//AUTHOR : AMITH GOLLA
//DATE   : 01-11-2021

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, vector<int>> char_indices;
        for(int i = 0; i < s.size(); i++){
            char_indices[s[i]].push_back(i + 1);
        }
        int odd_letters_count = 0;
        char odd_letter = '0';
        //ITERATE THROUGH THE ALPHABETS INSTEAD, I ITERATED THROUGH THE WHOLE STRING AT FIRST AND ALL TEST CASES DIDN'T PASS.
        for(int i = 0; i < 26; i++){
            if(char_indices[(char)(97 + i)].size() % 2 != 0){
                odd_letters_count++;
                odd_letter = (char)(97 + i);
            }
        }
        if(odd_letters_count > 1){
            cout << "-1" << endl;
        }else{
            int start_ptr = 0;
            int end_ptr = s.size() - 1;
            vector<int> ans(s.size());
            if(odd_letter == '0'){
                for(int i = 0; i < s.size(); i++){
                    if(char_indices[s[i]].size() != 0){
                        for(int j = 0; j < char_indices[s[i]].size();){
                            ans[start_ptr] = char_indices[s[i]].at(j);
                            start_ptr++;
                            j++;
                            ans[end_ptr] = char_indices[s[i]].at(j);
                            end_ptr--;
                            j++;
                        }
                        char_indices[s[i]].clear();
                    }
                }
            }else{
                ans[s.size()/2] = char_indices[odd_letter].at(char_indices[odd_letter].size() - 1);
                char_indices[odd_letter].pop_back();
                for(int i = 0; i < s.size(); i++){
                    if(char_indices[s[i]].size() != 0){
                        for(int j = 0; j < char_indices[s[i]].size();){
                            ans[start_ptr] = char_indices[s[i]].at(j);
                            start_ptr++;
                            j++;
                            ans[end_ptr] = char_indices[s[i]].at(j);
                            end_ptr--;
                            j++;
                        }
                        char_indices[s[i]].clear();
                    }
                }
            }
            for(int i = 0; i < ans.size(); i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}