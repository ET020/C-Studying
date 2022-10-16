//o(n^2)
int maxProfit(std::vector<int>& prices) {
	int n = (int)std::size(prices), ans = 0;
	for (int i = 0; i < n; ++i) {
		for ( int j = i + 1; j < n; ++j) {
			ans = std::max(ans, prices[j] - prices[i]);
		}
	}
	return ans;
}

//o(n)
int maxProfit(std::vector<int>& prices) {
	int inf = 1e9;
	int minprice = inf, maxprofit = 0;
	for (int price : prices) {
		maxprofit = std::max(price - minprice, maxprofit);
		minprice = std::min(price, minprice);
	}
	return maxprofit;
}
