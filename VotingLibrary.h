#ifndef VOTING_LIBRARY_H
#define VOTING_LIBRARY_H

#include <iostream>
#include <string>

class Candidate {
private:
    std::string name;
    int votes;
    std::string party;

public:
    // --- FUNCTION OVERLOADING ---
    
    // 1. Default Constructor
    Candidate() : name("Unknown"), votes(0), party("Independent") {}

    // 2. Parameterized Constructor
    Candidate(std::string n, std::string p, int v = 0) : name(n), party(p), votes(v) {}

    // 3. Overloaded Update Method (Update by adding votes or setting a new total)
    void updateVotes(int newVotes) { 
        votes += newVotes; 
    }
    void updateVotes(double percentage, int totalCast) { 
        votes = static_cast<int>((percentage / 100.0) * totalCast); 
    }

    // --- OPERATOR OVERLOADING ---

    // 1. Arithmetic Overload (+): Merging votes from different regions
    Candidate operator+(const Candidate& other) const {
        return Candidate(this->name, this->party, this->votes + other.votes);
    }

    // 2. Arithmetic Overload (-): Calculating vote lead/gap
    int operator-(const Candidate& other) const {
        return this->votes - other.votes;
    }

    // 3. Comparison Overload (==): Checking if two candidates belong to the same party
    bool operator==(const Candidate& other) const {
        return this->party == other.party;
    }

    // 4. Comparison Overload (>): Determining the winner
    bool operator>(const Candidate& other) const {
        return this->votes > other.votes;
    }

    // 5. Stream Insertion Overload (<<): Displaying candidate results
    friend std::ostream& operator<<(std::ostream& os, const Candidate& c) {
        os << "[" << c.party << "] " << c.name << " : " << c.votes << " votes";
        return os;
    }
};

#endif
