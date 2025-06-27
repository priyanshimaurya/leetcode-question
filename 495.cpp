#include<iostream>
#include<vector>
using namespace std;
int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    if(timeSeries.empty()){
        return 0;
    }        
    int totalDuration = 0 ;
    for(int i = 0; i < timeSeries.size() - 1; i++) {
        int diff = timeSeries[i + 1] - timeSeries[i];
        totalDuration += min(diff, duration);
    }
    totalDuration += duration;
    return totalDuration;
}
int main() {
    vector<int> timeSeries = {1, 4};
    int duration = 2;
    int result = findPoisonedDuration(timeSeries, duration);
    cout << "Total poisoned duration: " << result << endl; 
    return 0;
}