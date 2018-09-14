/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 14, 2018, 1:05 AM
 */

#include <iostream>
#include <string>

struct Values {
    int i;
    char c;
    std::string s;
};

Values get(bool flag) {
    if (flag) {
        return Values{1, 'y', "Nebi"};
    } else {
        return Values{2, 'n', "SArikaya"};
    }
}

int main(int argc, char** argv) {

    Values v;
    v = get(true);
    std::cout << v.i << " " << v.c << ' ' << v.s + '\n';
    v = get(false);
    std::cout << v.i << " " << v.c << ' ' << v.s + '\n';


    return 0;
}

