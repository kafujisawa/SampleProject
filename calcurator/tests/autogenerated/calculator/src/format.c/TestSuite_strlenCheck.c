#include "cpptest.h"

CPPTEST_CONTEXT("/calcurator/calculator/src/format.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/calcurator/calculator/src/format.c");

EXTERN_C_LINKAGE void TestSuite_strlenCheck_27fca8b6_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_strlenCheck_27fca8b6_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_strlenCheck_27fca8b6);
CPPTEST_TEST_DS(TestSuite_strlenCheck_27fca8b6_test_strlenCheck, CPPTEST_DS("strlenCheck"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_strlenCheck_27fca8b6_test_strlenCheck(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_strlenCheck_27fca8b6);

void TestSuite_strlenCheck_27fca8b6_setUp(void);
void TestSuite_strlenCheck_27fca8b6_setUp(void)
{
}

void TestSuite_strlenCheck_27fca8b6_tearDown(void);
void TestSuite_strlenCheck_27fca8b6_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_strlenCheck */
/* CPPTEST_TEST_CASE_CONTEXT int strlenCheck(char *) */
void TestSuite_strlenCheck_27fca8b6_test_strlenCheck()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>strlenCheck</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_instr</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]instr")</value>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>int _return </return>
            <name>strlenCheck</name>
            <params>_instr</params>
        </step>
        <step id="AssertionsStep" version="1">
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
char * _instr = CPPTEST_DS_GET_CSTR("[IN]instr");
int _return  = strlenCheck(_instr);
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("[OUT]return"), _return);
}
/* CPPTEST_TEST_CASE_END test_strlenCheck */
