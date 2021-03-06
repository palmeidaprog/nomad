#!/bin/bash
# Script by Paulo R. Almeida Filho 
#<palmeidaprogramming@gmail.com>

read -p "Update all branches from GitHUB? (y/n) " -n 1 resp
echo
if [[ $resp == "Y" || $resp == "y" ]];
then

	echo FETCHING ORIGIN...
	git fetch origin
	echo UPDATING SYNC...
	git checkout sync
	git merge origin/sync
	echo UPDATING DEV...
	git checkout dev
	git merge origin/dev
	echo UPDATING MASTER...
	git checkout master
	git merge origin/master
	git checkout sync
	echo PROJECT UPDATED!
	echo You are in 'Sync' branch.
	
fi

