#include<string>

class GpxParser{
private:
  std::string fileName;
  
public:
  GpxParser(std::string gpxfile);

  GpxParser();
  ~GpxParser();

  void read(std::string fileName);

  void read();  
  std::string getFileName();
};

