#ifndef METAPHLANMERGEPLUGIN_H
#define METAPHLANMERGEPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class MetaPhlAnMergePlugin : public Plugin
{
public: 
 std::string toString() {return "MetaPhlAnMerge";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
 std::string database;
 std::vector<std::string> samples;
};

#endif
