#include <bits/stdc++.h>
using namespace std;

const string NAME = "test";

/*

    freopen("inp.inp", "r", stdin);
    freopen("out.out", "w", stdout);

*/

long long time() { return chrono::steady_clock::now().time_since_epoch().count(); }

mt19937_64 rng(time());

long long rand(long long l, long long r, int t = 0) {
    if (t == 0) return l + rng() % (r - l);
    if (t > 0) return max(rand(l, r), rand(l, r, t - 1));
    if (t < 0) return min(rand(l, r), rand(l, r, t + 1));
    assert(false);
    return -1;
}

void generate() {
    ofstream cout("inp.inp");

    // something

    cout.close();
}

int main() {
    int t = (int)100;
    while (t--) {
        generate();

        double tim = time();
        system((NAME + ".exe").c_str());
        tim = (time() - tim) / 1e9;
        cout << tim << '\n';

        system("Brute.exe");
        if (system("fc out.out ans.out")) {
            cout << "WRONG ANSWER!\n";
            exit(0);
        }
    }
}
