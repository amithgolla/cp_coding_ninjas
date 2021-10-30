#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v;
    // vector<int>:: iterator it;
    // for(int i = 0; i < 5; i++){
    //     v.push_back(i + 1);
    // }
    // for(it = v.begin(); it != v.end(); it++){
    //     cout << *it << endl;
    // }

    //Pair class
    //to include this use #include <utility>

    // pair<int, char> p;
    // p = make_pair(2, 'b');
    // pair<int, char> p2(1, 'a');
    // cout << p2.first << " " << p2.second << endl;
    // cout << p.first << " " << p.second << endl;
    // return 0;

    //Set data structure : Sets are containers that store unique elements following a specific order.
    //prefer set: if you wish to filter multiple identical values, if you wish to parse items in a specified order (doing this in vector requires to specifically sort vector).
    //elements in set are called keys.
    //to include this use #include<set>
    //set is implemented using balanced binary search tree, so finding, inserting takes O(log n) complexity

    // set<int> s;
    // int arr[] = {1, 2, 3, 4, 5, 6, 0, -3, 5};
    // for(int i = 0; i < 10; i++){
    //     s.insert(arr[i]);
    // }
    // set<int>::iterator it;
    // for(it = s.begin(); it != s.end(); it++){
    //     cout << *it << endl;
    // }

    // //set find

    // if(s.find(6) == s.end()){
    //     cout << "Element not found" << endl;
    // }else{
    //     cout << "Element is found" << endl;
    // }

    // MAP DATA STRUCTURE
    //map helps to store the frequency of occurences of elements of array or string
    //map has key value pair
    //To use map use #include<map>
    //map is also made internally using binary search tree, so it takes O(log n) complexity for inserting and deleting.

    // int arr[] = {1, 2, 3, 4, 5, 6, 5};
    // map<int, int> m;

    // for(int i = 0; i < 7; i++){
    //     m[arr[i]]++;
    // }
    // map<int, int>::iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << it->first << " : " << it->second << endl;
    // }
    // cout << endl;
    // //To erase a key
    // m.erase(1);
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << it->first << " : " << it->second << endl;
    // }

    //UNORDERED MAP
    //IT IS MADE USING HASHTABLE, IN THIS FIND, INSERT AND DELETE HAPPENS IN O(1) TIME
    //TO USE THIS #include<unordered_map>
    //IT IS SIMILAR TO MAP BUT IT DOESN'T MAINTAIN ORDER LIKE MAP

    //LEARN THESE

    //LIST (DOUBLY LINKED LIST)
    //STACK
    //QUEUE
    //PRIORITY QUEUE

}
