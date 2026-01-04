#include "../logger.hpp"
#include <fstream>
#include <iostream>

bool log_write_str(std::string msg, std::string err){
  std::ofstream file("log.txt", std::ios::app);
  if(!file){
    std::cerr << "Failed to open logging file" << std::endl;
    return false;
  }

  file << msg << err << '\n';
  file.close();
  return true;
}

bool log_write_int(std::string msg, i64 val){
  std::ofstream file("log.txt", std::ios::app);
  if(!file){
    std::cerr << "Failed to open logging file" << std::endl;
    return false;
  }

  file << msg << val << '\n';
  file.close();
  return true;
}
