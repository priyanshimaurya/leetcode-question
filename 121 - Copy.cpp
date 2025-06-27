#include <iostream>
using namespace std;

int maxProfit(int price[]) {
    int size=sizeof(price)/sizeof(price[0]);
    int max_profit = 0;
    int min_price = price[0];

    for (int i = 1; i < size; i++) {
        if (price[i] < min_price) {
            min_price = price[i];
        }
        int profit = price[i] - min_price;
        if (profit > max_profit) {
            max_profit = profit;
        }
    }

    return max_profit;
}

int main() {
    int price1[] = {7, 6, 4, 3, 1}; 
    int result = maxProfit(price1);
    cout << "Maximum profit: " << result << endl;

    return 0;
}
