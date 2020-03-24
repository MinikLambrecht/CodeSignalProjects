// TASK
// Given a rectangular matrix of characters, add a border of
// asterisks(*) to it.

// EXAMPLE
// For

// picture = ["abc",
//                    "ded"]
// the output should be

// addBorder(picture) = ["*****",
//                                          "*abc*",
//                                          "*ded*",
//                                          "*****"]

#include <iostream>
#include <vector>

std::vector<std::string> addBorder(std::vector<std::string> picture)
{
        // Initialize a new vector to store the final result in.
        std::vector<std::string> res;

        // Initialize a new string to store the header & footer of the array.
        std::string headerAndFooter = "";

        // For each letter in picture array add an asterisk to the header/footer string.
        for (size_t i = 0; i < picture[0].size(); i++)
        {
                headerAndFooter += "*";
        }

        // Add in two extra asterisks for the conors
        headerAndFooter += "**";

        // Put in the footer.
        res.push_back(headerAndFooter);

        // For each row in the picture array add an asterisk in the beginning and the end.
        for (auto row: picture)
        {
                res.push_back("*" + row + "*");
        }

        // Put in the header.
        res.push_back(headerAndFooter);

        return res;
}
