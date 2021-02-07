#!/bin/bash 

clear
echo "Hello User 1"
read -p "Please enter your Names: " name 
echo "$name" >> names.txt #Enter name
clear
echo -e "Hello $name\nYour name has been added to the list."
echo "++++++++"
cat names.txt

echo "++++++++"
echo "Goodbye $name"

echo ${BASH_VERSION} #Bash version 
for i in {0..10..2}  #Print 0,2,4,6,8,10
do
	echo $i
done

curltime wordpress.org

for command in ls pwd date #Run the following commands
do
	echo "--------$command-------"
	$command
done

for item in *	#Print the directory
do
	if [ -d $item ]
	then 
		echo $item
	fi
done


for item in * #Print the file in the directory
do
	if [ -f $item ]
	then 
		echo $item
	fi
done

sleep 2
