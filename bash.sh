#! /bin/bash
echo "God is the Greatest and nothing compared to him on $1 and $2"
echo $(curl ifconfig.me)
echo $(dig +short www.google.com)
echo $(hostname)
echo $(whoami)
echo "what is your name?"
read name
if [ $name ]; then
	echo "wow, $name, it sound like an idoma name"
else
	echo "just want to see this stupid printout"
fi
