#include <bits/stdc++.h>

using namespace std;

// O of n cube
int maxSubArrayOne(int arr[], int n) {
    int best = 0; // Initialize best with the first element of the array

    for(int i = 0; i < n; i++) {
        cout << "i " << i << endl;
        for(int j = i; j < n; j++) {
            int sum = 0;
            
            cout << "j " << j << endl;
            for(int k = i; k <= j; k++) {
                cout << "k " << k << endl;
                sum += arr[k];
                cout << "sum " << sum << endl;
            }

            best = max(best, sum);
            cout << "best " << best << endl;
        }
    }

    return best;
}

// O of n squared 
int maxSubArrayTwo(int arr[], int n){

    
    int best = 0;

    for(int i = 0; i < n; i++){
        int sum = 0;

        for(int j = i; j < n; j++){
            sum += arr[j];
            best = max(sum, best);
        }
        
    }

    return best;
}

// O of n
int maxSubArrayThree(int arr[], int n){

    
    int best = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
            sum += arr[i];
            best = max(sum, best);
    }

    return best;
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {5, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxSubArrayOne(arr, n) << endl;

    return 0;
}
