//
// Created by PACKARD BELL on 22.10.2017.
//

#ifndef UNTITLED5_TCOORD_H
#define UNTITLED5_TCOORD_H

#include "pryamcoord.h"
#include "sphere.h"
class tcoord: private pryamcoord, private sphere {
private:
    pryamcoord A;
    sphere B;
    double t;
public:
    tcoord(){t=0;};
    tcoord(pryamcoord A, double t);
    tcoord(sphere A, double t);

    virtual ~tcoord();



    using pryamcoord::getX;
    using pryamcoord::getY;
    using pryamcoord::getZ;
    using sphere::getR;
    using sphere::getTheta;
    using sphere::getPhi;

    double getT() const;

    double setT(double t);
    void gett4coordpr();
    void gett4coordsp();
    void vctrlngt();

};


#endif //UNTITLED5_TCOORD_H
