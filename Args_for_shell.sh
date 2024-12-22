#!/bin/bash
# input parameters

# PRO
PRO="ZDT1 ZDT2 ZDT3 ZDT4 ZDT6"
PRO="DTLZ1 DTLZ2 DTLZ3 DTLZ4 DTLZ5 DTLZ6 DTLZ7" 
PRO="WFG1 WFG2 WFG3 WFG4 WFG5 WFG6 WFG7 WFG8 WFG9"
PRO="UF1 UF2 UF3 UF4 UF5 UF6 UF7 UF8 UF9 UF10"
PRO="BT1 BT2 BT3 BT4 BT5 BT6 BT7 BT8 BT9"
PRO="LSMOP1 LSMOP2 LSMOP3 LSMOP4 LSMOP5 LSMOP6 LSMOP7 LSMOP8 LSMOP9"
PRO="SMOP1 SMOP2 SMOP3 SMOP4 SMOP5 SMOP6 SMOP7 SMOP8"
PRO="LMF1 LMF2 LMF3 LMF4 LMF5 LMF6 LMF7 LMF8 LMF9 LMF10 LMF11 LMF12"
PRO="IMF1 IMF2 IMF3 IMF4 IMF5 IMF6 IMF7 IMF8 IMF9 IMF10"

# Obj = 2
PRO="UF1 UF2 UF3 UF4 UF5 UF6 UF7 LSMOP1 LSMOP2 LSMOP3 LSMOP4 LSMOP5 LSMOP6 LSMOP7 LSMOP8 LSMOP9"

# Obj = 3
PRO="UF8 UF9 UF10 LSMOP1 LSMOP2 LSMOP3 LSMOP4 LSMOP5 LSMOP6 LSMOP7 LSMOP8 LSMOP9"

#
PRO="BT9"
PRO="BT1 BT2 BT3 BT4 BT5 BT6 BT7 BT8"
PRO="BT1"

# OBJ
OBJ="2 3" 						
OBJ="3"
OBJ="2"	

#VAR
VAR="30 50 100 200 500 1000 2000"
VAR="2000"
VAR="30 50 100 200 500 1000"
VAR="100 500"
VAR="100 500 1000"
VAR="100 200 500 1000"
VAR="100 200 1000"
VAR="30 50 100 200 500 1000 2000"
VAR="1000"

# VLDF
ALG="VLDF"

# MOEATSS
ALG="MOEATSS"		# Basic with rho = 0.1 
ALG="TSSV1 TSSV2"	# Ablation: TSSV1(rm obj selection) TSSV2(rm var selection) 
ALG="TSSV0000 TSSV0025 TSSV0050 TSSV0075 TSSV0100 TSSV0125 TSSV0150 TSSV0175 TSSV0200" 	# Par. Sdu. with rho=0,0.025,0.050,...

# MOEATPS
ALG="MOEATPS"

# ALG
ALG="NSGAII MOEAD NSGAIII TWOARCH2 SMSEMOA SPCEA POGEA VLDF"

# ALG
ALG="MOEAD SPCEA"
ALG="NSGAII MOEAD NSGAIII TWOARCH2 SPCEA"
ALG="SMSEMOA"
ALG="MOEADVA LMEA WOF DLSMOEA SPCEA"
ALG="SPCEA"
ALG="MOEAD SPCEA"
ALG="POGEA"
ALG="NSGAII MOEAD"
ALG="NSGAII MOEAD POGEA"


# ALG
ALG="MOEATPS"

# RUN
RUN=100
RUN=20
RUN=1
