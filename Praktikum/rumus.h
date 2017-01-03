#ifndef RUMUS_H_INCLUDED
#define RUMUS_H_INCLUDED
#include <iostream>
#include <stdlib.h>

using namespace std;
float hasil;

const float PHI = 3.14;

float keliling(float r){
    hasil=2*PHI*r;
    return hasil;
}
float luas(float r){
    hasil=PHI*r*r;
    return hasil;
}
float permukaanbola(float r){
    hasil=4*PHI*r*r;
    return hasil;
}
float volumebola(float r){
    hasil=1.3333*(PHI*r*r*r);
    return hasil;
}
float permukaantabung(float r, float t){
    hasil=((2*(PHI*r*r))+ ((2*PHI*r)*t));
    return hasil;
}
float selimuttabung(float r, float t){
    hasil=(2*PHI*r)*t;
    return hasil;
}
float volumetabung(float r, float t){
    hasil=PHI*r*r*t;
    return hasil;
}

#endif // RUMUS_H_INCLUDED
