#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, r, n;
    cin >> a >> r >> n;

    vector<unsigned int> mm = { 0 };
    mm.push_back(a);

    for (int i = 1; i < n; ++i) {
        unsigned int k = mm.at(i);
        

        mm.push_back(k);
    }

    cout << mm.at(n) << endl;

    return 0;
}