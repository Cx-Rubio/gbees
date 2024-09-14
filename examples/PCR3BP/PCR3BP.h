
#define DIM_f 4 // State dimension
#define DIM_h 3 // Measurement dimension

// This function defines the dynamics model - required
void PCR3BP(double* f, double* x, double* dx, double* coef);

// This function defines the measurement model - required if MEASURE == true
void rtrr(double* h, double* x, double* dx, double* coef);

// This function defines the initial grid boundaries - optional
double PCR3BP_J(double* x, double* coef);

