/*
 * Allmvmt_h- library for moving the motors
 * Created by anandu Murlidharan, August 17,2018
 */
#ifndef Allmvmt_h
#define Allmvmt_h

#include "Arduino.h"

class Allmvmt
{
  public:
    Allmvmt(int pin1,int pin2,int pin3,int pin4);
    void mv_half(int pin1,int pin2);
    void mv_full(int pin1,int pin2);
    void mv_b_to_cntr(int pin1,int pin2,int pin3,int pin4,int b[]);
    void mv_cntr_to_a(int pin1,int pin2,int pin3,int pin4,int a[]);
    void mvmt(int pin1,int pin2,int pin3,int pin4,int a[],int b[]);
    
  private:
    int a1[] = {3,3}; int b1[] = {2,3};int c1[] = {1,3};int d1[] = {0,3}; int e1[] = {-1,3}; int f1[] = {-2,3}; int g1[] = {-3,3}; int h1[] = {-4,3};
    int a2[] = {3,2}; int b2[] = {2,2}; int c2[] = {1,2}; int d2[] = {0,2}; int e2[] = {-1,2}; int f2[] = {-2,2}; int g2[] = {-3,2}; int h2[] = {-4,2};
    int a3[] = {3,1}; int b3[] = {2,1}; int c3[] = {1,1}; int d3[] = {0,1}; int e3[] = {-1,1}; int f3[] = {-2,1}; int g3[] = {-3,1}; int h3[] = {-4,1};
    int a4[] = {3,0}; int b4[] = {2,0}; int c4[] = {1,0}; int d4[] = {0,0}; int e4[] = {-1,0}; int f4[] = {-2,0}; int g4[] = {-3,0}; int h4[] = {-4,0};
    int a5[] = {3,-1}; int b5[] = {2,-1}; int c5[] = {1,-1}; int d5[] = {0,-1}; int e5[] = {-1,-1}; int f5[] = {-2,-1}; int g5[] = {-3,-1}; int h5[] = {-4,-1};
    int a6[] = {3,-2}; int b6[] = {2,-2}; int c6[] = {1,-2}; int d6[] = {0,-2}; int e6[] = {-1,-2}; int f6[] = {-2,-2}; int g6[] = {-3,-2}; int h6[] = {-4,-2};
    int a7[] = {3,-3}; int b7[] = {2,-3}; int c7[] = {1,-3}; int d7[] = {0,-3} int e7[] = {-1,-3}; int f7[] = {-2,-3}; int g7[] = {-3,-3}; int h7[] = {-4,-3};
    int a8[] = {3,-4}; int b8[] = {2,-4}; int c8[] = {1,-4}; int d8[] = {0,-4}; int e8[] = {-1,-4}; int f8[] = {-2,-4}; int g8[] = {-3,-4}; int h8[] = {-4,-4};
}

#endif
