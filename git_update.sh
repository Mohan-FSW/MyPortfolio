#!/bin/bash
# Script to automatically commit and push all changes

cd ~/MyPortfolio || exit

# Stage all changes
git add .

# Commit with current date and time as message
git commit -m "Update portfolio: $(date '+%Y-%m-%d %H:%M:%S')"

# Push to GitHub
git push origin main

