//o(nlogn)
bool containsDuplicate(std::vector<int>& nums) {
	std::sort(nums.begin(), nums.end());
	int n = std::size(nums);
	for (int i = 0; i < n - 1; ++i) {
		if (nums[i] == nums[i + 1]) {
			return true;
		}
	}
	return false;
}

//o(n)
bool containsDuplicate(std::vector<int>& nums) {
	std::unordered_set<int> s;
	for (int x : nums) {
		if (s.find(x) != s.end()) {
			return true;
		}
		s.insert(x);
	}
	return false;
}
