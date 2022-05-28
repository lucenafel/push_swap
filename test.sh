#!/bin/zsh

KO="KO"

for i in {1..1000..1}
do
	ARG=$(shuf -i 0-500 -n 5 | tr '\n' ' ')
	OUT=$(./push_swap $ARG | ./checker_linux $ARG)
	if [ $OUT = $KO ]
	then
		echo 'KO'
		echo 'test failed in' $i
		echo 'input used '$ARG
	fi
done
echo 'pass 5 random numbers; executed' $i 'times'
