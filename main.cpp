#include <iostream>
#include "pryamcoord.h"
#include "sphere.h"
#include "tcoord.h"
#include <cmath>
int main() {
pryamcoord A(1, -6, 1);
A.getpryamcoord();
    sphere E(A);
    E.getsphere();

sphere B (8,5,4);
    B.getsphere();
    pryamcoord C(B);
    C.getpryamcoord();

    tcoord t1(A,0);
    tcoord t2 (B,0);

    t1.gett4coordpr();

    t2.gett4coordsp();

    t1.vctrlngt();

    return 0;
}