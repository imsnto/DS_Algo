#include<iostream>
#include<vector>
using namespace std;

/*
    worst-case, average-case -> O(n*n)
    best-case -> O(n)
    space complexity -> O(1)
*/

void insertion_sort(vector<int>&ar, int n){
    for(int i=0; i<n; i++){
        int currVal = ar[i];
        int j = i-1;

        while(j>=0 and currVal < ar[j]){
            ar[j+1] = ar[j];
            j--;
        }

        ar[j+1] = currVal;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];

    insertion_sort(ar, n);

    for(int i=0; i<n; i++)
        cout << ar[i] << " " ;
    cout << endl;

    return 0;
}

