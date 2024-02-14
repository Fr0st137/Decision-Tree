#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <unordered_set>

#include "utils.h"

int main(int argc, char **argv) {
    Parameters p = readInput(argc, argv);

    std::vector<std::vector<float>> output = readInputFile(p.inputFileName);

    std::map<std::string, std::vector<std::vector<float>>> sortedOutput;
    std::vector<Definition> nodes = readDefinition(p.definitionFileName, sortedOutput);
    
    runDecisionTree(nodes, output, sortedOutput);

    printResults(p.outputFileName, sortedOutput);

    return 0;    
}