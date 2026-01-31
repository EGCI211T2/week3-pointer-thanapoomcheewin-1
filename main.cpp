#include <iostream>
#include <cstdlib>   
using namespace std;

int main(int argc, char *argv[]) {

    int n = argc - 1;
    if (n <= 0) return 0;

    // allocate dynamic array
    int *pa = new int[n];
    int *pstart = pa;

    // convert argv to int array
    for (int i = 0; i < n; i++) {
        *pa = atoi(argv[i + 1]);
        pa++;
    }

    // reverse using pointers
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

    // print reversed numbers (TWO spaces between)
    pa = pstart;
    for (int i = 0; i < n; i++, pa++) {
        if (i > 0) cout << "  ";   // two spaces
        cout << *pa;
    }
    cout << endl;

    delete[] pstart;
    return 0;
}
