//AUTHOR : AMITH GOLLA
//DATE   : 01-11-2021

#include <bits/stdc++.h>
using namespace std;



vector<int> removeDuplicates(vector<int> input){
    //Let us use a set for this as set does not hold duplicate elements
    //Time Complexity = O(n)
    //Space Complexity = O(n)

    // set<int> s;
    // vector<int> result;

    // for(int i = 0; i < input.size(); i++){
    //     //we'll check if input[i] is already present in set or not. If it is present then we won't insert that element into result array
    //     if(s.find(input[i]) == s.end()){
    //         s.insert(input[i]);
    //         result.push_back(input[i]);
    //     }
    // }
    // return result;

    //METHOD 2 USING SORTING
    // sort(input.begin(), input.end());
    // vector<int> result;
    // //SORTING BRINGS THE DUPLICATE ELEMENTS TOGETHER SO WE CAN COMPARE THE ELEMENTS AND PUSH INTO RESULT ARRAY
    // result.push_back(input[0]);
    // for(int i = 1; i < input.size(); i++){
    //     if(input[i] != input[i-1]){
    //         result.push_back(input[i]);
    //     }
    // }

    // return result;


}

int main(){

}