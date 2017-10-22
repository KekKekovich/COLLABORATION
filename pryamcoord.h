

#ifndef UNTITLED5_PRYAMCOORD_H
#define UNTITLED5_PRYAMCOORD_H
#include "sphere.h"
class sphere;
class pryamcoord {
private: double x,y,z;
public:

    pryamcoord(){x=0; y=0; z=0;};
    pryamcoord (double x, double y, double z) ;
    pryamcoord(sphere A);
    virtual ~pryamcoord();

    double getX() const;

    double setX(double x);

    double getY() const;

   double setY(double y);

    double getZ() const;

    double setZ(double z);
    void getpryamcoord ();
};

#endif //UNTITLED5_PRYAMCOORD_H
