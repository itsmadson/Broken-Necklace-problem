# Necklace Problem

## Introduction
This C++ program aims to solve the Necklace Problem, which involves finding the maximum number of beads that can be collected from a given string of beads. Beads in this problem can be of three colors: red ('r'), blue ('b'), or white ('w'). The problem involves collecting a continuous sequence of beads from the string such that no two adjacent beads have the same color.

## How it Works
The program prompts the user to input the number of beads and the bead string. It then performs the following steps:
1. Circularization: The input string is circularized to simulate a necklace by appending a copy of the string to itself.
2. Left Side Analysis: Counts the number of consecutive red, blue, and white beads starting from the left end.
3. Right Side Analysis: Counts the number of consecutive red, blue, and white beads starting from the right end.
4. Calculation: Computes the maximum number of beads that can be collected by adding the maximum counts of red and blue beads from both sides. If the count exceeds the total number of beads, it is capped at the total number of beads.

## How to Use
1. Compile the code using a C++ compiler.
2. Run the executable.
3. Enter the number of beads and the bead string when prompted.
4. View the output to see the maximum number of beads that can be collected.
