#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "MetaPhlAnMergePlugin.h"

void MetaPhlAnMergePlugin::input(std::string file) {
 inputfile = file;
}

void MetaPhlAnMergePlugin::run() {}

void MetaPhlAnMergePlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand;
 //merge_metaphlan_tables.py ${OUT_ABUNDANCE_DIR_COHORT}/*_all.txt > $OUT
 myCommand = "rm -f "+outputfile+"; merge_metaphlan_tables.py "+inputfile+"*_all.txt > "+outputfile;
 std::cout << myCommand << std::endl;
 system(myCommand.c_str());
 }

PluginProxy<MetaPhlAnMergePlugin> MetaPhlAnMergePluginProxy = PluginProxy<MetaPhlAnMergePlugin>("MetaPhlAnMerge", PluginManager::getInstance());
