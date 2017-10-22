//
// Created by PACKARD BELL on 22.10.2017.
//

#ifndef UNTITLED5_SPHERE_H
#define UNTITLED5_SPHERE_H
#include "pryamcoord.h"
class pryamcoord;
class sphere {
private: double r, phi, theta;
public:
    sphere (){r=0; theta=0; phi=0;};
    sphere (double r, double theta, double phi);
    sphere(pryamcoord A);
    virtual ~sphere();

    double getR() const;

    double setR(double r);

    double getPhi() const;

    double setPhi(double phi);

    double getTheta() const;

    double setTheta(double theta);
void getsphere();
};


#endif //UNTITLED5_SPHERE_H
