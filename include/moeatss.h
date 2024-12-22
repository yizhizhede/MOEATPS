#ifndef _MOEATSS_H
#define _MOEATSS_H

#include "population.h"
#include "problem.h"

// Basic algorithm
Population_t* moeatss	(Problem_t *problem);	// MOEATSS rho = 0.10

// Ablation Study
Population_t* tssv1     (Problem_t *problem);	// MOEATSS remove objective space decompostion(OSD)
Population_t* tssv2     (Problem_t *problem);	// MOEATSS remove decision  space decompostion(DSD)

// Parameter Analysis
Population_t* tssv0000	(Problem_t *problem);	// MOEATSS rho = 0.000
Population_t* tssv0025 	(Problem_t *problem);	// MOEATSS rho = 0.025
Population_t* tssv0050 	(Problem_t *problem);	// MOEATSS rho = 0.050
Population_t* tssv0075 	(Problem_t *problem);	// MOEATSS rho = 0.075
Population_t* tssv0100 	(Problem_t *problem);	// MOEATSS rho = 0.100
Population_t* tssv0125 	(Problem_t *problem);	// MOEATSS rho = 0.125
Population_t* tssv0150 	(Problem_t *problem);	// MOEATSS rho = 0.150
Population_t* tssv0175 	(Problem_t *problem);	// MOEATSS rho = 0.175
Population_t* tssv0200 	(Problem_t *problem);	// MOEATSS rho = 0.200

#endif
