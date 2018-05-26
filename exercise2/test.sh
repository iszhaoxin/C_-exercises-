#!/bin/bash

INPUT=$(awk {print} input)
for i in $INPUT
do
    echo $i
done
