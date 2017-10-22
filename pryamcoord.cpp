

#include "pryamcoord.h"
#include <iostream>
#include <cmath>
using namespace std;

double pryamcoord::getX() const {
    return x;
}

double pryamcoord::setX(double x) {
    return (x>=0) ? x:-x;
}

double pryamcoord::getY() const {
    return y;
}

double pryamcoord::setY(double y) {
   return (y>=0)? y:-y;
}

double pryamcoord::getZ() const {
    return z;
}

double pryamcoord::setZ(double z) {
   return (z>=0)?z:-z;
}

pryamcoord::pryamcoord(double x, double y, double z){
    pryamcoord:: x = x>0 ? pryamcoord::x=x: pryamcoord::x=-x;
    pryamcoord:: y = y>0 ? pryamcoord::y=y: pryamcoord::y=-y;
    pryamcoord:: z = z>0 ? pryamcoord::z=z: pryamcoord::z=-z;
}
pryamcoord:: pryamcoord(sphere A){
    pryamcoord::x = A.getR()*sin(A.getTheta())*sin(A.getPhi());
    pryamcoord::y= A.getR()*sin(A.getTheta())*sin(A.getTheta());
    pryamcoord::z= A.getR()*cos(A.getTheta());
}
pryamcoord:: ~pryamcoord(){

}
void pryamcoord::getpryamcoord() {
    cout << "DECART: " << endl<< " x= " << x <<endl<< " y= " << y <<endl<< " z= " <<z <<endl;
}



