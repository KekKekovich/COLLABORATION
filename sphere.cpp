//
// Created by PACKARD BELL on 22.10.2017.
//

#include "sphere.h"
#include <iostream>
#include <cmath>
using namespace std;
double sphere::getR() const {
    return r;
}

double sphere::setR(double r) {
    return (r>=0) ? r: -r;
}

double sphere::getTheta() const {
    return theta;
}

double sphere::setTheta(double theta) {
    return (theta>=0) ? theta: -theta;
}
double sphere::getPhi() const {
    return phi;
}

double sphere::setPhi(double phi) {
    return (phi>=0) ? phi: -phi;
}



sphere::sphere(double r, double theta, double phi): r(r), theta(theta), phi(phi) {
    sphere::r = r > 0 ? sphere::r = r : sphere::r = -r;
    sphere::theta = theta > 0 ? sphere::theta = theta : sphere::theta = -theta;
    sphere::phi = phi > 0 ? sphere::phi = phi : sphere::phi = -phi;
}

sphere::sphere(pryamcoord A){
    sphere::r = sqrt(A.getX()*A.getX()+A.getY()*A.getY()+A.getZ()*A.getZ());
    sphere::theta = atan(sqrt(A.getX()*A.getX()+A.getY()*A.getY())/A.getZ());
    sphere:: phi = atan (A.getY()/A.getX());
}
sphere:: ~sphere(){

}
void sphere::getsphere() {
    cout << "SFERICHESKIE: "<< endl << "r= " << r << endl << "theta = " << theta << endl << "phi: " << phi << endl;
}