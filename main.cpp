#include <iostream>
#include <cstdlib>   
using namespace std;

int main(int argc, char *argv[]) {

    int n = argc - 1;
    if (n <= 0) return 0;

   
    int *pa = new int[n];
    int *pstart = pa;

    
    for (int i = 0; i < n; i++) {
        *pa = atoi(argv[i + 1]);
        pa++;
    }

    
    pa = pstart;
    int *pb = pstart + n - 1;
    int temp;

    for (int i = 0; i < n / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb--;
    }

    
    pa = pstart;
    for (int i = 0; i < n; i++, pa++) {
        cout << *pa;
        if (i != n - 1) cout << " ";
    }
    cout << endl;

    delete[] pstart;
    return 0;
}
