#!/bin/bash

echo "A script to so something I do everytime I push on this repo."

echo by Aryan Singh, https://zer0as.github.io
echo zer0as@protonmail.com

echo "Removing existing content in the file"
echo ----------------------------------------------------------

> readme

echo "Printing the current contents in file: "
cat readme

echo "by aryan singh" >> readme

echo "Removing all executables"
echo ----------------------------------------------------------

find . -name \*a.out -type f -delete

tree

echo "Now adding the new tree in the file readme"

tree >> readme

cat readme

echo "Commiting and pushing everything."
echo ----------------------------------------------------------
git pull
git add .
git commit -m "programs"
git push -u origin master