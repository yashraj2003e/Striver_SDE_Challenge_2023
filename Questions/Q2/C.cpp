  void sortColors(vector<int>& nums){

	int count[3] = {0};
	int s = nums.size();
	int output[s];

	for(int i=0;i<s;i++) {
		output[i] = 0;
	}
 
	for(int i=0;i<nums.size();i++) {
		count[nums.at(i)]++;
	}

	for(int i=1;i<3;i++) {
		count[i]+=count[i-1];
	}

	for(int i=s-1;i>-1;i--) {
		output[count[nums.at(i)]-1] = nums.at(i);
		count[nums.at(i)]--;
	}
	
	for(int i=0;i<nums.size();i++) {
		nums.at(i) = output[i];
	}

}