/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 14, 2018, 1:05 AM
 */

#include <iostream>
#include <string>
#include <tuple>

struct Values {
    int i;
    char c;
    std::string s;
};

Values get(bool flag) {
    if (flag)
        return Values{1, 'y', "Nebi"};
    else
        return Values{2, 'n', "SArikaya"};

}

///////////////////TUPLE////////////////////////////////////////////////////////

std::tuple<int, char, std::string> getTuple(bool flag) {
    if (flag)
        return std::make_tuple(1, 'y', "Nebi");
    else
        return std::make_tuple(2, 'n', "SArikaya");
}
///////////////////////////////////////////////////////////////////////////////

int main(int argc, char** argv) {

    Values v;
    v = get(true);
    std::cout << v.i << " " << v.c << ' ' << v.s + '\n';
    v = get(false);
    std::cout << v.i << " " << v.c << ' ' << v.s + '\n';


    ///////////////////////RETURN TUPLE ///////////////////////////////////////
    int num;
    char chr;
    std::string name;

    std::tie(num, chr, name) = getTuple(true);
    std::cout << num << " " << chr << ' ' << name + '\n';

    std::tie(num, chr, name) = getTuple(false);
    std::cout << num << " " << chr << ' ' << name + '\n';



    return 0;
}

