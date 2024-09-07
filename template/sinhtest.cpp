#include <bits/stdc++.h>
#define ll long long
using namespace std;
const string NAME = "main";
const int NTEST = 100;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

long long rd(long long l, long long h) {
    return l + rng() % (h - l + 1);
}

int main()
{
    //freopen(".inp", "r", stdin);
    //freopen(".out", "w", stdout);
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        ofstream inp((NAME + ".inp").c_str());

        inp.close();
        system((NAME + ".exe").c_str());
        system((NAME + "_trau.exe").c_str());
        if (system(("fc " + NAME + ".out " + NAME + ".ans").c_str()) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}
