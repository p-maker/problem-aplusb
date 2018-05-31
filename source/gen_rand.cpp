//
// Example "generator"
//

#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    assert(argc == 3);
    int low = atoi(argv[1]);
    int hi = atoi(argv[2]);

    cout << rnd.next(low, hi) << " " << rnd.next(low, hi) << "\n";
    return 0;
}
