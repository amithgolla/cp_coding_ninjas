//PROBLEM STATEMENT
/*Hussain is very bored, and has a lot of exams lined up next week. But he doesn't want to study. As usual, he decided to fail his exams and play with Hasan instead (who has already failed). Hussain invented this new game to play with Hasan.

Hussain shows Hasan a multiset of integers. (A multiset is a collection of elements where there can be duplicates). In every move Hussain removes a maximum number from this multiset and divides it by 2 (integer division, which is rounded down).

If after dividing, the number is still positive (greater than 0) he re-inserts it back into the multiset.

Before the start of the game, Hussain shows Hasan the numbers in his multiset.

Hussain asks Hasan, M questions. The i-th question will be denoted by Q[i], and Hasan must find the value of the number Hussain will be dividing (before he performs the division) after Q[i]-1 moves. That is, what is the value of the number on which the Q[i]-th division is performed?

Can you help Hasan and answer the queries?*/

//INPUT
//The first line contains 2 space separated integers N, M denoting the initial size of the multiset and the number of questions respectively.
//The next line contains N space separated integers, the initial elements of the multiset.
//Of the next M lines, the i-th line will contain Q[i].

//OUTPUT
//Output M lines, the i-th of which contains the answer for the i-th query.

//CONSTRAINTS
//1 ≤ N, M ≤ 10^6
//The queries are given in chronological order. That is, Q[i] > Q[i-1]
//Every element of the multiset will be a positive integer less than 2^63
//It's guaranteed that the set will contain at least one element at the time of any query.

//SAMPLE INPUT
/*
4 6
8 5 3 1
1
2
3
4
6
8
*/

//SAMPLE OUTPUT
/*
8
5
4
3
2
1
*/

//AUTHOR : AMITH GOLLA
//DATE   : 31-10-2021

#include <bits/stdc++.h>
using namespace std;

vector<long long int> findAns(vector<long long int> multiset, vector<int> queries){
    vector<long long int> result;
    queue<long long int> q;
    int count = 0;
    //LETS SORT THE MULTISET ARRAY
    sort(multiset.begin(), multiset.end());
    int multiset_ptr = multiset.size() - 1;
    int queries_ptr = 0;
    while(queries_ptr < queries.size()){
        if(multiset_ptr >= 0 && (q.empty() || q.front() < multiset[multiset_ptr])){
            count++;
            if(multiset[multiset_ptr]/2 > 0){
                q.push(multiset[multiset_ptr]/2);
            }
            if(count == queries[queries_ptr]){
                result.push_back(multiset[multiset_ptr]);
                queries_ptr++;
            }
            multiset_ptr--;
        }else{
            count++;
            if(count == queries[queries_ptr]){
                result.push_back(q.front());
                queries_ptr++;
            }
            if(q.front()/2 > 0){
                q.push(q.front()/2);
                q.pop();
            }
        }
    }
    return result;
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<long long int> multiset(N);
    for(int i = 0; i < N; i++){
        cin >> multiset[i];
    }
    vector<int> queries(M);
    for(int i = 0; i < M; i++){
        cin >> queries[i];
    }

    vector<long long int> ans = findAns(multiset, queries);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
}