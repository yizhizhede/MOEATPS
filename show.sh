#!/bin/bash

# compute HV
./shell/hv.sh

i=1;
for file in output/*_hv_*; do
	echo "hv: $(printf '%03d' $i), $(cat $file)"
	i=$[ $i + 1 ]
done

i=1;
for file in output/*_igd_*; do
	echo "igd: $(printf '%03d' $i), $(cat $file)"
	i=$[ $i + 1 ]
done

i=1;
for file in output/*_time_*; do
	echo "time: $(printf '%03d' $i), $(cat $file)"
	i=$[ $i + 1 ]
done
