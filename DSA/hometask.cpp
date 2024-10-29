template <typename T>
void reverse(T str[], int n) {
	int start = 0, end = n - 1;
	while (start < end) {
    	swap(str[start], str[end]);
    	start++;
    	end--;
	}
}
