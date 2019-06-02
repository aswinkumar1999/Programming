#!/bin/sh

#PBS -l accelerator_type="None"
#PBS -N Job_name
#PBS -l walltime=00:10:00
#PBS -q R204573
#PBS -l place=scatter
#PBS -S /bin/sh@sdb -V 
. /opt/modules/default/init/sh



#COMPILATION OF CPP CODE
CC -fopenmp Ex3DataScoping.cpp  -o DataScoping.exe


#COMPILATION OF FORTRAN CODE
#ftn -fopenmp Ex3DataScoping.f95 -o DataScopingF.exe

#EXECUTABLE FILE TO RUN 

./DataScoping.exe >  DataScoping.out
#./DataScopingF.exe >  DataScopingF.out




