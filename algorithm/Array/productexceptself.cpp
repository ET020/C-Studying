//o(n)
std::vector<int> productExceptSelf(std::vector<int>& nums) {
	int length = std::size(nums);
	vector<int> L(length, 0), R(length, 0);
	vector<int> answer(length);
	L[0] = 1;
	for (int i = 1; i < length; ++i) {
		L[i] = nums[i - 1] * L[i - 1]; 
	}
	R[length - 1] = 1;
	for (int i = length - 2; i >= 0; --i) {
		R[i] = nums[i + 1] * R[i + 1];
	}
	for (int i = 0; i < length; ++i) {
		answer[i] = L[i] * R[i];
	}
	return answer;
}
//o(n)
std::vector<int> productExceptSelf(std::vector<int>& nums) {
	int length = std::size(nums);
	vector<int> answer(length);
	answer[0] = 1;
	for (int i = 1; i < length; ++i) {
		answer[i] = answer[i - 1] * nums[i - 1];
	}
	int R = 1;
	for (int i = length - 2; i >= 0; --i) {
		answer[i] = answer[i] * R;
		R *= nums[i];
	}
}
