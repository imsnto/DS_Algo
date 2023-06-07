#include<iostream>
#include<vector>
using namespace std;

/*
    worst_case, average_case, best_case - O(n*n)
    space complexity -> O(1)
*/

void selection_sort(vector<int>&ar, int n){
    for(int i=0; i<n-1; i++){
        int mnInd = i;
        for(int j=i+1; j<n; j++){
            if(ar[mnInd] > ar[j]){
                mnInd = j;
            }
        }
        swap(ar[i], ar[mnInd]);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];

    selection_sort(ar, n);

    for(int i=0; i<n; i++)
        cout << ar[i] << " " ;
    cout << endl;

    return 0;
}


