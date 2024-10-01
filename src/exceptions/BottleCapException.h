#pragma once

#include <string>

class BottleCapException {
 private:
    std::string msg;
 public:
    std::string getMsg() const;
    BottleCapException(const std::string &msg);
    void print() const;
};