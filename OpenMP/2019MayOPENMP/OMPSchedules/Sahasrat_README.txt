EXERCISE: OpenMP Schedules Program

LOGIN: ssh username@sahasrat.serc.iisc.ernet.in
PASSWORD: enter the provided password 

COMMAND TO RUN:
mkdir <username>_2019MayOMP
cd <username>_2019MayOMP
cd  ComputePI
pwd  #print working directory

MODULE TO LOAD IN THE SAHASRAT
module swap PrgEnv-cray/6.0.4 PrgEnv-gnu/6.0.4
module load gcc/8.2.0
module load pbs

SAMPLE PBS JOBSCRIPT:

Copy the below sample jobscript and paste it into the pbsjob.sh

vi pbsjob.sh
>press "i" for insert
>paste the below sample jobscript into the file.
>Press "Esc", then "Shift+Q" or "Shift+:" 
>save the file with "wq" and press "Enter Tab"

1. SAHASRAT JOBSCRIPT
******************************************************
#!/bin/sh

#PBS -l accelerator_type="None"
#PBS -N Job_name
#PBS -l walltime=00:10:00
#PBS -q R204573
#PBS -l place=scatter
#PBS -S /bin/sh@sdb -V 
. /opt/modules/default/init/sh


cd /working/directory/path

#COMPILATION OF CPP CODE
CC -fopenmp Ex2Schedules.cpp  -o Schedules.exe

#COMPILATION OF FORTRAN CODE

#ftn -fopenmp Ex2Schedules.cpp  -o Schedules.exe

#EXECUTABLE FILE TO RUN 

 ./Schedules.exe > Schedules.out
# ./SchedulesF.exe > SchedulesF.out


***************************************************** 

RUN THE PBS JOBSCRIPT:
qsub pbsjob.sh
qstat -a #to check the status of the job
qstat -r #to check the job is in running state

CHECK THE OUTPUT FILES:
Total 3 files will generate after job completion like below:
1. omputePI.out  #output file
2. openmp_job.o***** #output file
3. openmp_job.e***** #error file 


