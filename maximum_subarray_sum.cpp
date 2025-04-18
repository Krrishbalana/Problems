#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 7;
    int arr[7] = {3,-4,5,4,1,7,-8};
    int maxsum = INT_MIN;
    for(int st = 0; st < n; st++){
        int sum = 0;
        for(int end = st; end < n; end++){

                sum = sum + arr[end];
                maxsum = max(sum,maxsum);
        }
    }
    cout << "maximum sum of sub-array = " << maxsum << endl;

}
