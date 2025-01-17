#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "algorithm.h"
#include "nsga3.h"
#include "ibea.h"
#include "dlsmoea.h"
#include "smsemoa.h"
#include "nsgaii.h"
#include "moead.h"
#include "two_arch2.h"
#include "thetadea.h"
#include "spcea.h"
#include "pogea.h"
#include "vldf.h"
#include "moeatss.h"
#include "moeatps.h"

#include "snapshot.h"

Population_t *moea (char *title, Problem_t *problem) {
	Population_t *pop = NULL;
	
	// snapshot 1
	snapshot_init (title, NULL);

	if (!strcmp ("NSGAII", title) || !strcmp ("NSGA-II", title))  	// NSGA-II
		pop =  nsgaii (problem);
	else if (!strcmp ("MOEAD", title)) 				// MOEA/D
		pop =  moead (problem);
	else if (!strcmp ("NSGA3", title) || !strcmp ("NSGAIII", title)) 	// MOEA-III
		pop =  nsga3 (problem);	
	else if (!strcmp ("TWOARCH2", title)) 				// two-arch2 
		pop =  two_arch2 (problem);	
	else if (!strcmp ("IBEA", title)) 				// IBEA
		pop =  ibea (problem);	
	else if (!strcmp ("THETADEA", title)) 				// theta-dea
		pop =  thetadea (problem);	
	else if (!strcmp ("DLSMOEA", title)) 				// DLS-MOEA
		pop =  dlsmoea (problem);	
	else if (!strcmp ("SMSEMOA", title)) 				// SMS-EMOA
		pop =  smsemoa (problem);	
	else if (!strcmp ("SPCEA", title)) 				// SPCEA, NSEA
		pop =  spcea (problem);	
	else if (!strncmp ("POGEA", title, 5)) 				// POGEA
		pop =  pogea (problem);	
	else if (!strcmp ("VLDF", title)) 				// VLDF
		pop =  vldf (problem);	
	else if (!strcmp ("MOEATSS", title)) 				// MOEATSS
		pop =  moeatss (problem);	
	else if (!strcmp ("TSSV1", title)) 				// MOEATSS
		pop =  tssv1 (problem);	
	else if (!strcmp ("TSSV2", title)) 				// MOEATSS
		pop =  tssv2 (problem);	
	else if (!strcmp ("TSSV0000", title)) 				// MOEATSS
		pop =  tssv0000 (problem);	
	else if (!strcmp ("TSSV0025", title)) 				// MOEATSS
		pop =  tssv0025 (problem);	
	else if (!strcmp ("TSSV0050", title)) 				// MOEATSS
		pop =  tssv0050 (problem);	
	else if (!strcmp ("TSSV0075", title)) 				// MOEATSS
		pop =  tssv0075 (problem);	
	else if (!strcmp ("TSSV0100", title)) 				// MOEATSS
		pop =  tssv0100 (problem);	
	else if (!strcmp ("TSSV0125", title)) 				// MOEATSS
		pop =  tssv0125 (problem);	
	else if (!strcmp ("TSSV0150", title)) 				// MOEATSS
		pop =  tssv0150 (problem);	
	else if (!strcmp ("TSSV0175", title)) 				// MOEATSS
		pop =  tssv0175 (problem);	
	else if (!strcmp ("TSSV0200", title)) 				// MOEATSS
		pop =  tssv0200 (problem);	
	else if (!strcmp ("MOEATPS", title)) 				// MOEATPS
		pop =  moeatps (problem);	
	else {
fprintf (stderr, "The algorithm %s haven't been completed now, and the ones being completed are as follows:\n", title);
		printf ("====================================\n");
		printf ("No.\t Algorithm \t Key\n");
		printf ("------------------------------------\n");
		printf ("1.\t NSGA-II \t NSGAII\n");
		printf ("2.\t MOEA/D \t MOEAD\n");
		printf ("3.\t NSGA-III \t NSGA3\n");
		printf ("4.\t TWO-ARCH2 \t TWOARCH2\n");
		printf ("5.\t IBEA \t\t IBEA\n");
		printf ("6.\t Theta-DEA \t THETADEA\n");
		printf ("7.\t DLS-MOEA \t DLSMOEA\n");
		printf ("8.\t SMS-EMOA \t SMSEMOA\n");
		printf ("9.\t SPCEA     \t SPCEA   \n");
		printf ("10.\t POGEA     \t POGEEA   \n");
		printf ("11.\t VLDF     \t VLDF   \n");
		printf ("12.\t MOEATSS     \t MOEATSS   \n");
		printf ("13.\t MOEATPS     \t MOEATPS   \n");
		printf ("====================================\n");
		
		exit (-1);
	}
	return pop;
}
