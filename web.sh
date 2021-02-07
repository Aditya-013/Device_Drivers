#!/bin/bash 

echo Enter url
read url
time curl $url > webpage.html
wget -r -np -k $url
