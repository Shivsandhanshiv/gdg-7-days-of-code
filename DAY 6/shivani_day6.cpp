#include <iostream>
#include <string>
using namespace std;
int co_v(const string& str)
{
        char vowels[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int count=0;
        for(char ch:str)
        {
            for(char v:vowels)
            {
                if(ch==v)
                {
                    count++;
                    break;
                }
            }
        }

    return count;
}

int main()
{
    string i;
    cout << "Enter a string: ";
    getline(cin,i);
    int v_c=co_v(i);
    cout << "The number of vowels in the given string is: "<<v_c<<endl;
    return 0;
}
