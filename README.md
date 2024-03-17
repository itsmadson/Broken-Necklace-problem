# Necklace Problem

## Problem Description
The Necklace Problem involves finding the maximum number of beads that can be collected from a given string of beads arranged in a circular manner. Each bead can be of three colors: red ('r'), blue ('b'), or white ('w'). The objective is to collect a continuous sequence of beads from the necklace such that no two adjacent beads have the same color. The problem essentially asks for the longest possible substring of alternating colors that can be obtained from the necklace.
                             
        r b b r                    
      r         b               
     r           r                  
    r             r                
   b               r            
  b                 b         
  b                 b       
  b                 b       
   r               r                 
    b             r               
     b           r             
       r       r              
         r b r                           
       r red bead
       b blue bead
       w white bead
                    
## Solution Approach
To solve the Necklace Problem efficiently, this C++ program employs a dynamic programming approach. Here's a breakdown of the solution approach:

1. **Circularization**: The input string is circularized by appending a copy of itself to both ends. This step ensures that the algorithm can consider all possible contiguous sequences without worrying about reaching the end of the string.

2. **Left Side Analysis**: The program iterates through the circularized string from left to right, maintaining counts of consecutive red and blue beads encountered so far. If a white bead is encountered, counts for both red and blue are incremented. This process is stored in a left-side array.

3. **Right Side Analysis**: Similar to the left side analysis, the program iterates through the circularized string from right to left, maintaining counts of consecutive red and blue beads encountered. Again, if a white bead is encountered, counts for both red and blue are incremented. This process is stored in a right-side array.

4. **Calculation of Maximum**: After completing the left and right side analyses, the program iterates through the string again to find the maximum number of beads that can be collected. This is done by adding the maximum counts of red and blue beads from both sides for each position. The result is then compared with the total number of beads to handle cases where the entire necklace can be collected.

## How to Use
1. Compile the provided C++ code using a compatible compiler.
2. Run the compiled executable.
3. Enter the number of beads in your necklace and the string representing the necklace when prompted.
4. The program will output the maximum number of beads that can be collected according to the rules of the Necklace Problem.

