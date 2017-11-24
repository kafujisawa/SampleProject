#include "cpptest.h"

CPPTEST_CONTEXT("/calcurator/calculator/src/calc.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/calcurator/calculator/src/calc.c");

EXTERN_C_LINKAGE void TestSuite_calc_8c4be5c6_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_calc_8c4be5c6_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_calc_8c4be5c6);
CPPTEST_TEST_DS(TestSuite_calc_8c4be5c6_test_calc, CPPTEST_DS("calctest"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_calc_8c4be5c6_test_calc(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_calc_8c4be5c6);

void TestSuite_calc_8c4be5c6_setUp(void);
void TestSuite_calc_8c4be5c6_setUp(void)
{
}

void TestSuite_calc_8c4be5c6_tearDown(void);
void TestSuite_calc_8c4be5c6_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_calc */
/* CPPTEST_TEST_CASE_CONTEXT int calc(char *, int *) */
void TestSuite_calc_8c4be5c6_test_calc()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>calctest</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_repolish</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]repolish")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_calculationResult</name>
                <type>int</type>
                <value/>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>int _return </return>
            <name>calc</name>
            <params>_repolish, &amp;_calculationResult</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("[OUT]calculaionResult")</P1>
                <P2>_calculationResult</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("[OUT]return")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _repolish = CPPTEST_DS_GET_CSTR("[IN]repolish");
int _calculationResult;
int _return  = calc(_repolish, &_calculationResult);
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("[OUT]calculaionResult"), _calculationResult);
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("[OUT]return"), _return);
}
/* CPPTEST_TEST_CASE_END test_calc */
