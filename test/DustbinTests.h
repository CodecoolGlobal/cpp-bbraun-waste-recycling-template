#pragma once

#include "Dustbin9000.h"

class Tester {
 private:
    int failedTests;
    void checkResult(Dustbin9000& expected, Dustbin9000& actual, const std::string& testName);
    bool checkAllGarbageContent(Dustbin9000& expectedDustbin9000, Dustbin9000& actualDustbin9000);
    void evaluateTestOutcomes();
    void testThrowingOutOkThings();
    void testThrowOutBottleCapThrowsNotPinkError();
    void testThrowOutBottleCapThrowsNotCleanError();
 public:
    void run();
};