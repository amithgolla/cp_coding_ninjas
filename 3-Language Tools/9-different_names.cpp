//PROBLEM STATEMENT
/*
In Little Flowers Public School, there are many students with same first names. You are given a task to find the students with same names. You will be given a string comprising of all the names of students and you have to tell the name and count of those students having same. If all the names are unique, print -1 instead.
Note: We don't have to mention names whose frequency is 1.
*/

//INPUT FORMAT
/*
The only line of input will have a string ‘str’ with space separated first names of students.
*/

//OUTPUT FORMAT
/*
Print the names of students along with their count if they are repeating. If no name is repeating, print -1
*/

//CONSTRAINTS
/*
1 <= |str| <= 10^5
Time Limit: 1 second
*/

//SAMPLE INPUT1
/*
Abhishek harshit Ayush harshit Ayush Iti Deepak Ayush Iti
*/

//SAMPLE OUTPUT1
/*
harshit 2
Ayush 3
Iti 2
*/

//SAMPLE INPUT2
/*
Abhishek Harshit Ayush Iti
*/

//SAMPLE OUTPUT2
/*
-1
*/

//AUTHOR: AMITH GOLLA
//DATE  : 01-11-2021

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    //getline is used to take spaces
    getline(cin, str);
    map<string, int> frequencies;
    string name;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' ' ){
            frequencies[name]++;
            name = "";
        }else{
            name = name + str[i];
        }
    }
    frequencies[name]++;
    map<string, int>::iterator it;
    int count = 0;
    for(it = frequencies.begin(); it != frequencies.end(); it++){
        if(it->second > 1){
            count++;
            cout << it->first << " " << it->second << endl;
        }
    }
    if(count == 0){
        cout << "-1" << endl;
    }
}

