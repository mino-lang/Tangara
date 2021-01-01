#include <vector>
#include "Class.h"

using namespace std;

static class Project
{
public:
	static vector<Class> classes;
	static vector<Function> functions;
	static vector<Variable> variables;
	static vector<CodeBody> bodies;

	void writeTokens(string path);
};