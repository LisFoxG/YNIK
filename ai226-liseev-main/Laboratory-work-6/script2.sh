#!/bin/bash

echo "Уведіть назву об'єкту для створення = "
read name

if  [[ -e $name ]]
then
	echo "Такий об'єкт вже існує "
fi

if [[ ($name =~ [[:alnum:]]{14,}) && ($name =~ [0-9]{11,}) ]]
then
	mkdir $name
else
	echo "Назва не відповідає умовам"
fi
