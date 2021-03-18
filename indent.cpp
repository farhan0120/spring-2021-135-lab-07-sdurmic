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
    int count = 0;
    while(getline(cin, line))
    {
        for(int i = 0; i < count; ++i)
        {
            cout << '\t';
        }
        cout << removeLeadingSpaces(line) << endl;
        count += countChar(line,'{');
        count -= countChar(line,'}');
    }
    return 0;
}
