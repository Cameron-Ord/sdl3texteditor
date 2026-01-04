#pragma once
#include "define.hpp"
#include <string>

bool log_write_str(std::string msg, std::string err);
bool log_write_int(std::string msg, i64 val);
