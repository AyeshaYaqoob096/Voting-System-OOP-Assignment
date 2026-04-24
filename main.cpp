#include "VotingLibrary.h"
#include <iostream>

int main() {
    std::cout << "--- VOTING SYSTEM & RESULT AGGREGATOR ---" << std::endl;

    // Demonstrating Function Overloading (Initialization)
    Candidate c1; // Default
    Candidate c2("Alice Smith", "Blue Party", 1500); // Parameterized
    Candidate c3("Bob Jones", "Red Party", 1200);

    // Demonstrating Function Overloading (Update methods)
    c1 = Candidate("Charlie Brown", "Blue Party");
    c1.updateVotes(200);              // Overload 1: Adding raw votes
    c1.updateVotes(15.5, 1000);       // Overload 2: Based on percentage (sets votes to 155)

    std::cout << "\n--- Initial Tally ---" << std::endl;
    std::cout << "C1: " << c1 << std::endl;
    std::cout << "C2: " << c2 << std::endl;
    std::cout << "C3: " << c3 << std::endl;

    // Demonstrating Operator Overloading
    
    // 1. Plus (+) Operator: Merging Alice's votes from two different districts
    Candidate aliceDistrictB("Alice Smith", "Blue Party", 800);
    Candidate aliceTotal = c2 + aliceDistrictB;

    // 2. Minus (-) Operator: Finding the lead gap
    int lead = aliceTotal - c3;

    // 3. Comparison (==): Checking party affiliation
    std::cout << "\n--- Analysis ---" << std::endl;
    if (c1 == c2) {
        std::cout << "[== Overload] Charlie and Alice belong to the same party." << std::endl;
    }

    // 4. Comparison (>): Determining winner
    if (aliceTotal > c3) {
        std::cout << "[> Overload] Current Leader: Alice Total with a " << lead << " vote lead." << std::endl;
    }

    std::cout << "\n--- Final Aggregated Record ---" << std::endl;
    std::cout << aliceTotal << std::endl;

    return 0;
}
