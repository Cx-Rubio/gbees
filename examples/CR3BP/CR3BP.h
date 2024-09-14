

#define DIM_f 6 // State dimension
#define DIM_h 6 // Measurement dimension

// This function defines the dynamics model - required
void CR3BP(double* f, double* x, double* dx, double* coef);

// This function defines the boundaries - optional
double CR3BP_J(double* x, double* coef);

