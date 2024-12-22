#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "kur.h"
#include "matrix.h"
#include "shape.h"

#define PI 3.14159265358979323846264338327950288419716939937510
#define pi 3.14159265358979323846264338327950288419716939937510
#define NUM_SAMPLE 1.0e+4

// test problem
static Problem_t *P;

// 
static void  kur1 (double *x, int n, double *f, int m);

Problem_t* KUR_new (char *title, int numObj, int numVar) {
	// common variable
	int 	i;
	size_t 	size;
	double*	lowBound = NULL; 
	double* uppBound = NULL;

	// allocating memory for a problem
        Problem_t *problem = (Problem_t *)malloc (sizeof (Problem_t));
        if (problem == NULL) {
        	fprintf (stderr, "Allocating memory failed\n");         
               	exit (-1);
        }
	strcpy (problem->title, title);
	problem->numObj = 2; 
	problem->numVar = numVar;
	
	// setting the bound of varibles
	size = numVar * sizeof (double);
	lowBound = (double *)malloc (size);
	uppBound = (double *)malloc (size);
	for (i=0; i<numVar; i++) {
		lowBound[i] = -10*PI;
		uppBound[i] = 10*PI;
	}
	problem->lowBound = lowBound;
	problem->uppBound = uppBound;

	// 
	if (!strcmp (title, "KUR1")) {
		P = problem; problem->evaluate = kur1;
	} else { 
		fprintf (stderr, "error: %s is undefined\n", title);
		exit (0);
	}

	return problem;
}

static void  kur1 (double *x, int n, double *f, int m) {
	int 	i;
	double 	g = 0;

	// f1
	for (i=0, g=0; i<n-1; i++) {
		g += -10*exp(-0.2*sqrt(x[i]*x[i]+x[i+1]*x[i+1]));
	}
	f[0] = g;

	// f2
	for (i=0, g=0; i<n; i++) {
		if (x[i] > 0) {
			g += pow(x[i], 0.8) + 5.0*pow(sin(x[i]), 3);
		} else {
			g += pow(-x[i], 0.8) + 5.0*pow(sin(x[i]), 3);
		}
	}
	f[1] = g;
}

//**************************************************************************************************************
//**************************************************************************************************************
static Matrix_t* KUR1_sample ();

Matrix_t* KUR_sample (int No, int numObj) {
	switch (No) {
		case 1:
			return	KUR1_sample ();
		default:
                       fprintf (stderr, "KUR%d have been not implemented now\n", No);
                       exit (0);
	}
	return NULL;
}

static Matrix_t* KUR1_sample () {
	Matrix_t* sample = Matrix_new (1, 2);

	sample->elements[0] = 0;
	sample->elements[1] = 0;

	return sample;
}
