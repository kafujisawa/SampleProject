#include "cpptest.h"

CPPTEST_CONTEXT("/calcurator/calculator/src/format.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/calcurator/calculator/src/format.c");

EXTERN_C_LINKAGE void TestSuite_reversePolish_d77acb91_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_reversePolish_d77acb91_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_reversePolish_d77acb91);
CPPTEST_TEST_DS_DISABLED(TestSuite_reversePolish_d77acb91_test_reversePolish, CPPTEST_DS("reversepolish"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_reversePolish_d77acb91_test_reversePolish(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_reversePolish_d77acb91);

void TestSuite_reversePolish_d77acb91_setUp(void);
void TestSuite_reversePolish_d77acb91_setUp(void)
{
}

void TestSuite_reversePolish_d77acb91_tearDown(void);
void TestSuite_reversePolish_d77acb91_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_reversePolish */
/* CPPTEST_TEST_CASE_CONTEXT int reversePolish(char *, char *) */
void TestSuite_reversePolish_d77acb91_test_reversePolish()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>reversepolish</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_ptr</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]ptr")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_outstr_org[256]</name>
                <type>char</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_outstr</name>
                <type>char *</type>
                <value>&amp;_outstr_org</value>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return>int _return </return>
            <name>reversePolish</name>
            <params>_ptr, _outstr</params>
        </step>
        <step id="AssertionsStep" version="1">
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("[OUT]_return")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" version="1">
                <type>CPPTEST_ASSERT_CSTR_EQUAL</type>
                <P1>CPPTEST_DS_GET_CSTR("[OUT]outstr")</P1>
                <P2>_outstr</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
char * _ptr = CPPTEST_DS_GET_CSTR("[IN]ptr");
char _outstr_org[256];
char * _outstr = &_outstr_org;
int _return  = reversePolish(_ptr, _outstr);
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("[OUT]_return"), _return);
CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("[OUT]outstr"), _outstr);
}
/* CPPTEST_TEST_CASE_END test_reversePolish */

