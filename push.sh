#! /usr/bin/env bash
echo Commiting and pushing to github....
echo Please enter your commit message
read MESSAGE
git add .
git commit -m "$MESSAGE"
git push origin master
