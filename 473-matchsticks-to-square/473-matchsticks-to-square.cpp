class Solution {
private:
	bool vis[16];
	bool f(int i, vector<int>& a, int &sum, int side, int curSum) {
		if (side == 4) return true;
		if (sum == curSum) return f(0, a, sum, side + 1, 0);
		if (a[i] > sum) return false;
		for (int j = i; j < a.size(); ++j) {
			if (!vis[j]) {
                if(curSum + a[j] <= sum){
				vis[j] = true;
				if (f(j + 1, a, sum, side, curSum + a[j])) return true;
				vis[j] = false;
                }
			}
		}
		return false;
	}
public:
	bool makesquare(vector<int>& a) {
        memset(vis, false, sizeof(vis));
		int sum = accumulate(a.begin(), a.end(), 0);
		if (sum % 4) return false;
		sum /= 4;
		sort(a.begin(), a.end(), greater());
		return f(0, a, sum, 0, 0);
	}
};