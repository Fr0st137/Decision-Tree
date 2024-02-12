#include <string>
#include <vector>
#include <sstream>
#include <fstream>

struct Parameters
{
    std::string inputFileName;
    std::string definitionFileName;
    std::string outputFileName;
};

struct Definition
{
    int index;
    std::string attribute;
    char op;
    float value;
    std::string trueLabel;
    std::string falseLabel;
    int trueIndex;
    int falseIndex;
};


bool isNumber(const std::string& str);


Parameters readInput(int argc, char *argv[]);


std::vector<std::string> readInputFile(const std::string& inputFileName, std::vector<std::vector<float>>& attributeValues);


std::vector<Definition> readDefinition(const std::string& inputFileName);