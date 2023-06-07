#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

/*
    worst-case, average-case, best-case-> O(nlogn)
    space complexity-> O(n)
*/

void merge(vector<int>&ar, int l, int m, int r){
    int lsize = m-l+1, rsize = r-m;
    vector<int> left, right;

    for(int i=0; i<lsize; i++)
        left.push_back(ar[l+i]);
    for(int i=0; i<rsize; i++)
        right.push_back(ar[m+i+1]);

    left.push_back(INT_MAX);
    right.push_back(INT_MAX);

    int i = 0, j = 0, k = 0;
    while(k<lsize+rsize){
        if(left[i] <= right[j]){
            ar[l+k] = left[i];
            k++; i++;
        }
        else {
            ar[l+k] = right[j];
            j++; k++;
        }
    }
}

void merge_sort(vector<int>&ar, int i, int j){
    if(i<j){
        int m = (i+j) / 2;
        merge_sort(ar, i, m);
        merge_sort(ar, m+1, j);
        merge(ar, i, m, j);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];

    merge_sort(ar, 0, n-1);

    for(int i=0; i<n; i++)
        cout << ar[i] << " " ;
    cout << endl;

    return 0;
}


