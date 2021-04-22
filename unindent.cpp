#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int num_of_space(){
    static int space = 0;
    space++;
    return space;

}

string removeLeadingSpaces(string line)
{
    string result = "";
    bool check = true;
    
    for(int i = 0; i < line.size(); ++i)
    {
        num_of_space();
        if(!(check && isspace(line[i])))
        {
            result += line[i];
            check = false;
        }
    }
    return result;
}