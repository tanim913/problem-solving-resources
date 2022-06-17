class Solution {
  public:
    int getMinDiff(int ar[], int n, int k) {

    sort(ar, ar+n);

    int ans = ar[n-1] - ar[0];
    int s = ar[0] + k;
    int l = ar[n-1] - k;
    int mn, mx;

    for (int i =0; i<n; i++)
    {
        mn = min(s, ar[i+1] - k);
        mx = max(l, ar[i] + k);
        if(mn < 0) continue;
        ans = min( ans, mx - mn);
    }
    return ans;

    }
};
