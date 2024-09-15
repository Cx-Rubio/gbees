#ifndef LORENZ3D_H
#define LORENZ3D_H

#define DIM_f 3 // State dimension
#define DIM_h 1 // Measurement dimension

// REF- Extract definitions

// This function defines the dynamics model - required
void Lorenz3D(double* f, double* x, double* dx, double* coef);

// This function defines the measurement model - required if MEASURE == true
void z(double* h, double* x, double* dx, double* coef);

#endif