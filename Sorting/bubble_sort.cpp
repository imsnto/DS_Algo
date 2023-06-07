#include<iostream>
#include<vector>
using namespace std;

/*
    worst_case, average_case, best_case - O(n*n)
    space complexity -> O(1)
*/

void bubble_sort(vector<int>&ar, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(ar[j] > ar[j+1]){
                swap(ar[j], ar[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];

    bubble_sort(ar, n);

    for(int i=0; i<n; i++)
        cout << ar[i] << " " ;
    cout << endl;

    return 0;
}
