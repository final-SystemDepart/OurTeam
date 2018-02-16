#ifndef KMP_ALGO_H_
#define KMP_ALGO_H_

#define False 0

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> getNext(string sub);
int kmpSearch(string src, string sub);

#endif // !KMP_ALGO_H_

