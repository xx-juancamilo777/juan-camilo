#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price; // compramos más barato
        } else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice; // vendemos y maximizamos
        }
    }
    return maxProfit;
}

int main() {
    vector<int> prices1 = {7,1,5,3,6,4};
    vector<int> prices2 = {7,6,4,3,1};

    cout << "Ejemplo 1: " << maxProfit(prices1) << endl; // 5
    cout << "Ejemplo 2: " << maxProfit(prices2) << endl; // 0
}

