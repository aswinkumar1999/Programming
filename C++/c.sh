#!/bin/bash
str="Outputs/$1"
str=${str%?};
str=${str%?};
str=${str%?};
str=${str%?};
output="/$str"
g++ $1 -o $str
.$output
