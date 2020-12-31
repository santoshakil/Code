r=$RANDOM

echo "$r: This is a test Commit for git">test-commit.txt
echo "$r: This is a test Commit for git"

git add .
git commit -m "$r: Test Commit"
git push origin master
