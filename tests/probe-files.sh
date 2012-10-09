#!/bin/bash

ARGS=("$@")
IFS='.'

for FILENAME in $ARGS
do
    FILENAME_ARRAY=( $FILENAME )

    if [ ! -f "${FILENAME_ARRAY[0]}.c.bak" ]
    then
	 echo `cp $FILENAME ${FILENAME_ARRAY[0]%.c}.bak`
    fi
   
    #echo `gcc -include nopcov.h -P -E -ansi -O0 ${var} > ${var%.c}-preprocessed.c`

    #echo `java -jar nopcov.jar ${var%.c}-preprocessed.c`

    #echo `mv ${var%.c}-preprocessed-instrumented.c ${var}`
done




`
