template<typename number> int shaker_sort(number* array, int array_size) {
	int start = 0;
	int end = array_size;
	bool flag = true;
	
	while (flag) {
		flag = false;

		for (int i = start; i < (end - 1); i++) {
			if (array[i] > array[i + 1]) {
				
				number temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				
				flag = true;
			}
		}

		end -= 1;

		for (int i = end - 1; i > start; i--) {
			if (array[i] < array[i - 1]) {

				number temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;

				flag = true;
			}
		}
		start += 1;
	
	}

	return 0;
}