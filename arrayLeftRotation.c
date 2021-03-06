#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

//~ A left rotation operation on an array of size shifts each of the array's elements 1 unit to the left. For example, if 2 left rotations are performed on array [1,2,3,4,5], then the array would become [3,4,5,1,2].

//~ Given an array of integers and a number, d , perform d left rotations on the array. Then print the updated array as a single line of space-separated integers.

//~ Input Format

//~ The first line contains two space-separated integers denoting the respective values of n(the number of integers) and d (the number of left rotations you must perform).
//~ The second line contains n space-separated integers describing the respective elements of the array's initial state.


vector<int> array_left_rotation(vector<int> a, int n, int k) {
    int it  = k;
    int count = 0;
    int val;
    vector<int> b;
    while(count < a.size()){
        if(it == a.size()){
            it = 0;
        }else{
            val = a.at(it);
            b.push_back(val);
            it++;
            count++;
        }

    }
    return b; 
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
