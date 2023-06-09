#pragma once

#ifndef HSE_HUFFMAN_CPP_COMPRESS_H
#define HSE_HUFFMAN_CPP_COMPRESS_H

#endif //HSE_HUFFMAN_CPP_COMPRESS_H
#include <stddef.h>

#include <typeinfo>
#include <typeindex>
#include <tuple>
#include <exception>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <random>
#include <iostream>
#include <sstream>

std::string huffmanCodes(std::vector<char> characters, std::vector<int> freq, int size, std::string input_str);
void gettingHuffmanCodes (struct minHeapNode *root, std::string encodedLine, std::unordered_map<char, std::string>& huffman_codes);
std::unordered_map<char, int> stringToDict(std::string input_str);
void dictToArray(std::unordered_map<char, int> dict, std::vector<char>& keys, std::vector<int>& values);
void testCasesHuffman();
std::string guiShow(std:: string input_str);