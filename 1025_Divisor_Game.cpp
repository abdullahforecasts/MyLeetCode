class Solution {
public:
   bool divisorGame(int n) {
	int turn = 0;
	while (true) {
		int x = -1;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				x = i;
				break;
			}
		}

		if (x == -1) {
			break;
		}

		n = n - x;

		turn++;
	}
	return turn % 2;
}

};