template <typename number> int binary_place_search(number* array, int end, number value) {
	int start = 0;

	while (true)
	{
		number element = array[(start + end) / 2];

		if (element > value) {
			end = (start + end) / 2;
		}
		else if (element < value) {
			start = (start + end) / 2;
		}

		if (element == value) {
			return ((start + end) / 2);
		}

		if (end - start <= 1) {
			if (array[start] > value) {
				return start;
			}
			else {
				return end;
			}
		}
	}
}

template<typename number> int binary_insertion_sort(number* array, int array_size) {
	for (int key_element_index = 1; key_element_index < array_size; key_element_index++) {
		number key = array[key_element_index];
		int place_to_paste = binary_place_search(array, key_element_index, key);

		if (place_to_paste != key_element_index) {
			for (int i = key_element_index; i > place_to_paste; i--) {
				array[i] = array[i - 1];
			}
			array[place_to_paste] = key;
		}
	}

	return 0;
}
