#include <string>
#include <iostream>
#include "GpxParser.h"

using namespace std;

int main(){
  GpxParser gpxParser("hello world");
  cout << gpxParser.getFileName() << endl;
}
