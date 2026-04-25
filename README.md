# Voting System and Result Aggregiation Library (OOP-Assignment)
A C++ library for voting aggregation using operator and function overloading.

**Student Name: Ayesha Yaqoob

Roll Number: 68

Topic: Voting System and Result Aggregation Library**

**Description:**
This project implements a C++ library to manage election data using Object-Oriented 
Programming principles. It focuses on Candidate management and vote aggregation.
1. Function Overloading: Used for different constructor types and vote update methods 
   (direct count vs percentage-based).
2. Operator Overloading: Implements addition (+) for merging regional votes, 
   subtraction (-) for calculating leads, comparison (==) for party checks, 
   and greater-than (>) for ranking, plus stream insertion (<<) for easy output.

**Sample Output:**
--- VOTING SYSTEM & RESULT AGGREGATOR ---
--- Initial Tally ---
C1: [Blue Party] Charlie Brown : 155 votes
C2: [Blue Party] Alice Smith : 1500 votes
C3: [Red Party] Bob Jones : 1200 votes

**Analysis**
[== Overload] Charlie and Alice belong to the same party.
[> Overload] Current Leader: Alice Total with a 1100 vote lead.

**How to Run**
1. Download `VotingLibrary.h` and `main.cpp`.
2. Ensure both files are in the same directory.
3. Compile using: `g++ main.cpp -o VotingSystem`
4. Run the program using: `./VotingSystem` (or `VotingSystem.exe` on Windows)
