/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) { //mohek spaces eridat shurat ve tab
	 input.erase(remove(input.begin(),input.end(),' '),input.end()); //mohek be tvah
	input.erase(remove(input.begin(),input.end(),'\t'),input.end()); 
	 input.erase(remove(input.begin(),input.end(),'\r'),input.end()); 
	 input.erase(remove(input.begin(),input.end(),'\n'),input.end());
	//std::erase(input, ' ');
	 //std::erase(input, '\t'); //ze shel namespace ariel ve ein li oto
	 //std::erase(input, '\n');
	 //std::erase(input, '\r');
	return input;
}

/**
 * Random good snowmans
**/
TEST_CASE("Correct code input for snowman") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
 
    CHECK(nospaces(snowman(12224411)) == nospaces("_===_\n(o.o)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11234411)) == nospaces("_===_\n(o,0)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11344411)) == nospaces("_===_\n(0,-)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21444411)) == nospaces(" ___\n.....\n(-,-)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21224411)) == nospaces(" ___\n.....\n(o,o)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11444421)) == nospaces("_===_\n(-,-)\n(] [)\n( : )"));
    CHECK(nospaces(snowman(11434421)) == nospaces("_===_\n(-,0)\n(] [)\n( : )"));
    CHECK(nospaces(snowman(11334414)) == nospaces("_===_\n(0,0)\n( : )\n(   )"));
    CHECK(nospaces(snowman(11224414)) == nospaces("_===_\n(o,o)\n( : )\n(   )"));
    
    CHECK(nospaces(snowman(11444414)) == nospaces("_===_\n(-,-)\n( : )\n(   )"));
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
       CHECK(nospaces(snowman(21114411)) == nospaces(" ___\n.....\n(.,.)\n( : )\n( : )"));
       CHECK(nospaces(snowman(11434421)) == nospaces("_===_\n(-,0)\n(] [)\n( : )"));
       
}   
    /**
     * Different hats
     * Different eyes
     * Different nose
     * Different eyes
     * Different arms
     * Different torso
     * Different base
    **/

TEST_CASE("Correct code input for snowman"){
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    
    CHECK(nospaces(snowman(31111111)) == nospaces(" _\n/_\\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11111111)) == nospaces(" ___\n(_*_)\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(21111111)) == nospaces(" ___\n.....\n(.,.)\n<( : )>\n( : )"));

    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(12111111)) == nospaces("_===_\n(...)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(13111111)) == nospaces("_===_\n(._.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(14111111)) == nospaces("_===_\n(. .)\n<( : )>\n( : )"));

    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11211111)) == nospaces("_===_\n(o,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11311111)) == nospaces("_===_\n(0,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11411111)) == nospaces("_===_\n(-,.)\n<( : )>\n( : )"));

    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11121111)) == nospaces("_===_\n(.,o)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11131111)) == nospaces("_===_\n(.,0)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11141111)) == nospaces("_===_\n(.,-)\n<( : )>\n( : )"));

    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11112111)) == nospaces("_===_\n\\(.,.)\n( : )>\n( : )"));
    CHECK(nospaces(snowman(11113111)) == nospaces("_===_\n(.,.)\n/( : )>\n( : )"));
    CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n ( : )>\n( : )"));

    
    CHECK(nospaces(snowman(11111211)) == nospaces("_===_\n(.,.)/\n<( : )\n( : )"));
    CHECK(nospaces(snowman(11111311)) == nospaces("_===_\n(.,.)\n<( : )\\n( : )"));
    CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n<( : )\n( : )"));

    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11111121)) == nospaces("_===_\n(.,.)\n<(] [)>\n( : )"));
   
    CHECK(nospaces(snowman(11111141)) == nospaces("_===_\n(.,.)\n<(   )>\n( : )"));

    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11111112)) == nospaces("_===_\n(.,.)\n<( : )>\n(" ")"));
    CHECK(nospaces(snowman(11111113)) == nospaces("_===_\n(.,.)\n<( : )>\n(___)"));
    CHECK(nospaces(snowman(11111114)) == nospaces("_===_\n(.,.)\n<( : )>\n(   )"));
     CHECK(nospaces(snowman(11111131)) == nospaces("_===_\n(.,.)\n<(> <)>\n( : )"));
   CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));

}
  /**
     * Bad input
     
    **/
TEST_CASE("Incorrect code input for snowman") {
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(1111));
    CHECK_THROWS(snowman(11111));
    CHECK_THROWS(snowman(111111));
    CHECK_THROWS(snowman(1111111));
    CHECK_THROWS(snowman(1111111));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(1322));
    CHECK_THROWS(snowman(13332));
    CHECK_THROWS(snowman(3444));
    CHECK_THROWS(snowman(342221));
    CHECK_THROWS(snowman(213213));
    CHECK_THROWS(snowman(2313));
    CHECK_THROWS(snowman(2132444));
    CHECK_THROWS(snowman(2132444232));
    CHECK_THROWS(snowman(213244423231));
    CHECK_THROWS(snowman(21324441233));
    CHECK_THROWS(snowman(21324443231));
    CHECK_THROWS(snowman(213244412321));
    CHECK_THROWS(snowman(2132444213));
    CHECK_THROWS(snowman(-2132444));
    CHECK_THROWS(snowman(-4));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(-100));
    CHECK_THROWS(snowman(111));
      CHECK_THROWS(snowman(213244423231));
}

