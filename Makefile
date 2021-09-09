# Copyright (C) Christopher Wellons <ccw129@psu.edu>
#
# This is designed for use with GNU make.

#CFLAGS = -g -O2 -W -Wall #-DPOOL_THR_SAFE
CFLAGS =  -Ofast #-DPOOL_THR_SAFE
OBJ = main.o pool.o

pool : $(OBJ)
	#$(CC) -lrt $^ -o $@
	$(CC) $^ -o $@

pool.o : pool.c pool.h
main.o : main.c pool.h

.PHONY : clean

clean : 
	$(RM) $(OBJ) pool
