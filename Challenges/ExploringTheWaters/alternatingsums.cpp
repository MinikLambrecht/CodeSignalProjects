// TASK
// Several people are standing in a row and need to be divided into
// two teams. The first person goes into team 1, the second goes
// into team 2, the third goes into team 1 again, the fourth into
// team 2, and so on.

// You are given an array of positive integers - the weights of the
// people. Return an array of two integers, where the first element
// is the total weight of team 1, and the second element is the total
// weight of team 2 after the division is complete.

// EXAMPLE
// For a = [50, 60, 60, 45, 70], the output should be
// alternatingSums(a) = [180, 105].

#include <iostream>
#include <vector>

std::vector<int> alternatingSums(std::vector<int> a)
{
        // Initialize a new array and an integer, for team 1 and their total weight combined.
        std::vector<int> team1;
        int team1weight = 0;

        // Initialize a new array and an integer, for team 2 and their total weight combined.
        std::vector<int> team2;
        int team2weight = 0;

        // Initialize a new bool to keep track of which team we should add the current person to.
        bool isT1 = true;

        // Iterate through the array to split people into teams.
        for(size_t i = 0; i <a.size(); i++)
        {
                // If 'isT1' is true, then add the current person to Team 1.
                // Else add them to Team 2.
                if (isT1)
                {
                        team1.push_back(a[i]);
                        isT1 = false;
                }
                else
                {
                        team2.push_back(a[i]);
                        isT1 = true;
                }
        }

        // Iterate through the array and add up the teams total weight
        for(size_t i = 0; i < team1.size(); i++)
        {
               team1weight += team1[i];
        }
        for(size_t i = 0; i < team2.size(); i++)
        {
                team2weight += team2[i];;
        }

        // Return a new vector with the result from each team.
        return std::vector<int> {team1weight, team2weight};
}
