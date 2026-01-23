#include <iostream>
#include <string>

#include <boost/regex.hpp>

using namespace std;

int main() {
    string line;
    boost::regex pattern("^Subject: (Re: |Aw: )*(.*)");

    while (cin) {
        getline(cin, line);
        boost::smatch matches;
        if (boost::regex_match(line, matches, pattern))
            cout << matches[2] << endl;
    }
}
