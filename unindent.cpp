#include <iostream>
#include <string>
#include <cctype>
using namespace std;


string removeLeadingSpaces(string line)
{
    string result = "";
    bool check = true;
    for(int i = 0; i < line.size(); ++i)
    {
        if(!(check && isspace(line[i])))
        {
            result += line[i];
            check = false;
        }
    }
    return result;
}