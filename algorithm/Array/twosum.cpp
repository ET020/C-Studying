//o(n^2)
std::vector<int> twoSum(std::vector<int>& nums, int target) {
	int n = nums.length;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (target == nums[i] + nums[j]) {
				return {i, j};
			}
		}
	}
	return {};
}
//o(n)
std::vector<int> twoSum(std::vector<int>& nums, int target) {
	std::unordered_map<int, int> hashtable;
	for (int i = 0; i < nums.length; ++i) {
		auto it = hashtable.find(target - nums[i]);
		if (it != hashtable.end()) {
			return {it->second, i};
		}
		hashtable[nums[i]] = i;
	}
	return {};
}
