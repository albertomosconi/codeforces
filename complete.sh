#!/bin/sh

if [ -f "problemsets/$1$2_$3.cpp" ]; then
    printf "file already exists, replace? [Y/n] ";
    read -r ok;
    echo "$ok" | grep -q "^[nN]" && exit 1
fi

cp "main.cpp" "problemsets/$1$2_$3.cpp"
sed -i "1i// https://codeforces.com/problemset/problem/$1/$2" "problemsets/$1$2_$3.cpp"
sed -i '/^[\ ]*\/\/[\ ]*begin\ code/,/^[\ ]*\/\/[\ ]*end\ code/{/^[\ ]*\/\/[\ ]*begin\ code/!{/^[\ ]*\/\/[\ ]*end\ code/!d}}' main.cpp
