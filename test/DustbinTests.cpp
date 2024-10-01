#include <iostream>
#include "DustbinTests.h"
#include "BottleCapException.h"

using namespace std;

void Tester::checkResult(Dustbin9000& expected, Dustbin9000& actual, const string& testName)
{
    if(checkAllGarbageContent(expected, actual))
    {
        cout << "Test ran OK." << endl;
    }else{
        cout << "Invalid result!" << endl;
        ++failedTests;
    }
}

bool Tester::checkAllGarbageContent(Dustbin9000& expectedDustbin9000, Dustbin9000& actualDustbin9000){
    if (expectedDustbin9000.getHouseWasteContent().size() == actualDustbin9000.getHouseWasteContent().size() &&
        expectedDustbin9000.getPaperContent().size() == actualDustbin9000.getPaperContent().size() &&
        expectedDustbin9000.getPlasticContent().size() == actualDustbin9000.getPlasticContent().size() &&
        expectedDustbin9000.getMetalContent().size() == actualDustbin9000.getMetalContent().size() &&
        expectedDustbin9000.getBottleCaps().size() == actualDustbin9000.getBottleCaps().size())
    {
        for (int i = 0; i < expectedDustbin9000.getHouseWasteContent().size(); ++i) {
            if (expectedDustbin9000.getHouseWasteContent()[i].name != actualDustbin9000.getHouseWasteContent()[i].name){
                return false;
            }
        }
        for (int i = 0; i < expectedDustbin9000.getPaperContent().size(); ++i) {
            if (expectedDustbin9000.getPaperContent()[i].name != actualDustbin9000.getPaperContent()[i].name){
                return false;
            }
        }
        for (int i = 0; i < expectedDustbin9000.getPlasticContent().size(); ++i) {
            if (expectedDustbin9000.getPlasticContent()[i].name != actualDustbin9000.getPlasticContent()[i].name){
                return false;
            }
        }
        for (int i = 0; i < expectedDustbin9000.getMetalContent().size(); ++i) {
            if (expectedDustbin9000.getMetalContent()[i].name != actualDustbin9000.getMetalContent()[i].name){
                return false;
            }
        }
        for (int i = 0; i < expectedDustbin9000.getBottleCaps().size(); ++i) {
            if (expectedDustbin9000.getBottleCaps()[i].name != actualDustbin9000.getBottleCaps()[i].name){
                return false;
            }
        }

        return true;
    }

    return false;
}

void Tester::evaluateTestOutcomes()
{
    if(0 != failedTests){
        cout << failedTests << " tests failed." << endl;
    }else{
        cout << "All tests passed!" << endl;
    }
}

void Tester::run(){
    testThrowingOutOkThings();
    testThrowOutBottleCapThrowsNotPinkError();
    testThrowOutBottleCapThrowsNotCleanError();
    evaluateTestOutcomes();
}

void Tester::testThrowingOutOkThings(){
    Dustbin9000 expected;
    BottleCap bottleCap1("BottleCap1", true, "pink");
    BottleCap bottleCap4("BottleCap4", true, "pink");
    Garbage garbage1("Garbage1");
    Garbage garbage2("Garbage2");
    Garbage garbage3("Garbage3");
    PaperGarbage paperGarbage1("PaperGarbage1", true);
    PaperGarbage paperGarbage2("PaperGarbage2", true);
    PaperGarbage paperGarbage3("PaperGarbage3", false);

    expected.throwOutBottleCap(bottleCap1);
    expected.throwOutBottleCap(bottleCap4);
    expected.throwOutGarbage(garbage1);
    expected.throwOutGarbage(garbage2);
    expected.throwOutGarbage(garbage3);
    expected.throwOutPaperGarbage(paperGarbage1);
    expected.throwOutPaperGarbage(paperGarbage2);

    Dustbin9000 actual;
    actual.throwOutBottleCap(bottleCap1);
    actual.throwOutBottleCap(bottleCap4);
    actual.throwOutGarbage(garbage1);
    actual.throwOutGarbage(garbage2);
    actual.throwOutGarbage(garbage3);
    actual.throwOutPaperGarbage(paperGarbage1);
    actual.throwOutPaperGarbage(paperGarbage2);

    checkResult(expected, actual, "test1");
}

void Tester::testThrowOutBottleCapThrowsNotPinkError(){
    try {
        Dustbin9000 actual;
        BottleCap bottleCap3("BottleCap3", true, "brown");
        actual.throwOutBottleCap(bottleCap3);
        ++failedTests;
    } catch (const BottleCapException& e) {
        if (e.getMsg() == "Only pink bottle caps can be thrown here!"){
            cout << "Test ran OK." << endl;
        } else {
            cout << "Invalid result!" << endl;
            ++failedTests;
        }
    }
}

void Tester::testThrowOutBottleCapThrowsNotCleanError(){
    try {
        Dustbin9000 actual;
        BottleCap bottleCap2("BottleCap2", false, "pink");
        actual.throwOutBottleCap(bottleCap2);
        ++failedTests;
    } catch (const BottleCapException& e) {
        if (e.getMsg() == "Bottle caps are plastic ad should be clean!"){
            cout << "Test ran OK." << endl;
        } else {
            cout << "Invalid result!" << endl;
            ++failedTests;
        }
    }
}