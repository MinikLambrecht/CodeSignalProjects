// TASK
// An IP address is a numerical label assigned to each device (e.g.,
// computer, printer) participating in a computer network that
// uses the Internet Protocol for communication. There are two
// versions of the Internet protocol, and thus two versions of
// addresses. One of them is the IPv4 address.

// Given a string, find out if it satisfies the IPv4 address namin
// rules.

// EXAMPLE
// For inputString = "172.16.254.1", the output should be
// isIPv4Address(inputString) = true;

// For inputString = "172.316.254.1", the output should be
// isIPv4Address(inputString) = false.

// 316 is not in range [0, 255].

// For inputString = ".254.255.0", the output should be
// isIPv4Address(inputString) = false.

// There is no first number.

#include <iostream>
#include <regex>

bool isIPv4Address(std::string inputString)
{
        // Make an regular expression for IPv4 Addresses.
        std::regex reg("^(\\d+)\\.(\\d+)\\.(\\d+)\\.(\\d+)$");

        // Initialize a string to store the individual matches in.
        std::string match;

        // Initialize an smatch variable and store all matches from the inputString.
        std::smatch matches;
        regex_search(inputString, matches, reg);

        // If there's not 5 matches return as false.
        if (matches.size() != 5)
        {
                return false;
        }

        // Iterate through the matches in a for loop.
        for (int i = 1; i <= 4; i++)
        {
                // Get the current match in form of a string.
                match = matches[i].str();

                // If the match equals 0, break the current iteration.
                if (match == "0")
                {
                        continue;
                }

                // If the first match equals 0, return as false.
                if (match[0] == '0')
                {
                        return false;
                }

                // If there is more than 3 matches, return as false.
                if (match.size() > 3)
                {
                        return false;
                }

                // Convert the match to an integer, and if that number is greater than 255
                // return as false.
                if (stoi(match) > 255)
                {
                        return false;
                }
        }

        return true;
}
