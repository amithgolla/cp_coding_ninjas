//AUTHOR : AMITH GOLLA
//DATE   : 01-11-2021

#include<bits/stdc++.h>
using namespace std;

char nonRepeatingCharacter(string str){
    //WE CAN USE A MAP TO STORE THE FREQUENCIES OF THE CHARACTERS AND RETURN THE FIRST KEY WITH VALUE 1

    map<char, int> frequency;

    for(int i = 0; i < str.size(); i++){
        frequency[str[i]]++;
    }

    for(int i = 0; i < str.size(); i++){
        if(frequency[str[i]] == 1){
            return str[i];
        }
    }

    return str[0];
}

int main(){

}