#!/bin/bash
FILES=$(ls *.c | awk {print})
INPUT=$(awk {print} input)
for file in $FILES
do
    echo -e "\033[31m${file} start \033[0m"
    EXCUTE=${file%.*}
    gcc $file -o $EXCUTE
#    ./$EXCUTE
    echo -e "\033[31m${file} end \033[0m"
    echo
done
echo ${FILES}
