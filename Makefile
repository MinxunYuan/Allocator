# COMP1521 22T1 ... a general makefile for multiple exercises

ifneq (, $(shell which dcc))
CC	= dcc
else
CC	= gcc
endif

EXERCISES	?=
CLEAN_FILES	?=

.DEFAULT_GOAL	= all
.PHONY: all clean

-include *.mk

all:	${EXERCISES}

clean:
	-rm -f ${CLEAN_FILES}
