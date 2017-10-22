

#include "tcoord.h"
#include <iostream>
#include <cmath>
using namespace std;


double tcoord::getT() const {
    return t;
}

double tcoord::setT(double t) {
    tcoord::t = (t>=0)? t : -t;
}

tcoord::tcoord(pryamcoord A, double t) {
    tcoord::A=A;
    tcoord::t = t >= 0 ? tcoord::t = t : tcoord::t = -t;
}

tcoord::tcoord(sphere B, double t) {
    tcoord::B=B;
    tcoord::t = t >= 0 ? tcoord::t = t : tcoord::t = -t;
}

void tcoord::gett4coordpr(){
    cout << "4-D DECART:" <<endl<< "x= " << A.getX()<< endl<< "y= " << A.getY()<<endl<< "z= " << A.getZ()<<endl<<"t= "<< t << endl;

}
void tcoord::gett4coordsp(){
    cout << "4-D SFERICHESKIE:" <<endl<< "r= " << B.getR()<< endl<< "Theta= " << B.getTheta()<<endl<< "Phi= " << B.getPhi()<<endl<<"t= "<< t << endl;
    }

void tcoord::vctrlngt() {
    cout << "DLINA = " << sqrt(t * t + A.getX() * A.getX() + A.getY() * A.getY() + A.getZ() * A.getZ()) << endl;
}

tcoord::~tcoord() {

}
