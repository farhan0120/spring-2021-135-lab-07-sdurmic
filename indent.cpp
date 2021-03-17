#include <iostream>
#include <string>
#include "unindent.h"
#include "indent.h"
using namespace std;

int countChar(string line, char c)
{
    int count = 0;
    for(int i = 0; i < 10; i++)
    {
        if(line[i] == c)
        {
            count++;
        }
    }
    return count;
}
    
int add_indentations()
{
    string line;
    int tabs = 0;
    while(getline(cin, line))
    {
        line = removeLeadingSpaces(line);
        tabs -= countChar(line,'}');
        for(int i = 0; i < tabs; i++)
        {
            cout << '\t';
        }
        cout << line << endl;
        tabs += countChar(line, '{');
    }
    return 0;
}