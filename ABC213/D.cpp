
#include <bits/stdc++.h>
int H, W, N, A[101010], B[101010];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> H >> W >> N;
    rep(i, 0, N) cin >> A[i] >> B[i];

    vector<int> ys;
    rep(i, 0, N) ys.push_back(A[i]);
    sort(all(ys));
    ys.erase(unique(all(ys)), ys.end());
    rep(i, 0, N) A[i] = lower_bound(all(ys), A[i]) - ys.begin();

    vector<int> xs;
    rep(i, 0, N) xs.push_back(B[i]);
    sort(all(xs));
    xs.erase(unique(all(xs)), xs.end());
    rep(i, 0, N) B[i] = lower_bound(all(xs), B[i]) - xs.begin();

    rep(i, 0, N) printf("%d %d\n", A[i] + 1, B[i] + 1);
}