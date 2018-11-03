#include <fstream>
#include <iostream>
#include <string>
#include "GpxParser.h"

using namespace std;

GpxParser::GpxParser(){};
GpxParser::~GpxParser(){};

GpxParser::GpxParser(string gpxfile){
    fileName = "./" + gpxfile;
  }

void GpxParser::read(string fileName){
  };

void GpxParser::read(){read(fileName);};  
string GpxParser::getFileName(){return fileName;};
  

