#!/bin/bash
git add .
echo 'commit :'
read commit
git commit -m "$commit"
git push origin main
