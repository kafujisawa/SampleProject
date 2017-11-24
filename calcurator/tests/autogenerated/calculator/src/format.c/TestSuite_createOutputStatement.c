#include "cpptest.h"

CPPTEST_CONTEXT("/calcurator/calculator/src/format.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/calcurator/calculator/src/format.c");

EXTERN_C_LINKAGE void TestSuite_createOutputStatement_e83a4da1_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_createOutputStatement_e83a4da1_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_createOutputStatement_e83a4da1);
CPPTEST_TEST_DS(TestSuite_createOutputStatement_e83a4da1_test_createPutputStatement, CPPTEST_DS("createOutputStatement"));
CPPTEST_TEST_DS(TestSuite_createOutputStatement_e83a4da1_test_case, CPPTEST_DS("createOutputStatement"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_createOutputStatement_e83a4da1_test_createPutputStatement(void);
void TestSuite_createOutputStatement_e83a4da1_test_case(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_createOutputStatement_e83a4da1);

void TestSuite_createOutputStatement_e83a4da1_setUp(void);
void TestSuite_createOutputStatement_e83a4da1_setUp(void)
{
}

void TestSuite_createOutputStatement_e83a4da1_tearDown(void);
void TestSuite_createOutputStatement_e83a4da1_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_createPutputStatement */
/* CPPTEST_TEST_CASE_CONTEXT void createOutputStatement(char *, char *) */
void TestSuite_createOutputStatement_e83a4da1_test_createPutputStatement()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>createOutputStatement</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_instr</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]instr")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_repolish</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]repolish")</value>
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
            <step id="VariableStep" version="1">
                <name>strlenCheck_flg</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("[IN]strlenCheck_flg")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>formatCheck_flg</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("[IN]formatCheck_flg")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>reversePolish_flg</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("[IN]reversePolish_flg")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>calc_flg</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("[IN]calc_flg")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>calcresult</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("[IN]calcresult")</value>
            </step>
        </step>
        <step id="AdvancedStubsStep" version="1">
            <step id="AdvancedStubStep" version="1">
                <action>RETURN VALUE</action>
                <function>strlenCheck</function>
                <parameters>Int(strlenCheck_flg)</parameters>
                <condition>If()-&gt;Arg("instr")-&gt;NotEqual()-&gt;CharPtr(_instr)-&gt;Fail("value")</condition>
            </step>
            <step id="AdvancedStubStep" version="1">
                <action>RETURN VALUE</action>
                <function>formatCheck</function>
                <parameters>Int(formatCheck_flg)</parameters>
                <condition>If()-&gt;Arg("instr")-&gt;NotEqual()-&gt;CharPtr(_instr)-&gt;Fail("value")</condition>
            </step>
            <step id="AdvancedStubStep" version="1">
                <action>USE CUSTOM ACTION</action>
                <function>reversePolish</function>
                <parameters>Arg("outstr")-&gt;Assign()-&gt;CharPtr(_repolish)</parameters>
                <condition>&lt;オプション条件&gt;</condition>
            </step>
            <step id="AdvancedStubStep" version="1">
                <action>RETURN VALUE</action>
                <function>reversePolish</function>
                <parameters>Int(reversePolish_flg)</parameters>
                <condition>&lt;オプション条件&gt;</condition>
            </step>
            <step id="AdvancedStubStep" version="1">
                <action>USE CUSTOM ACTION</action>
                <function>calc</function>
                <parameters>Arg("instr")-&gt;Assign()-&gt;CharPtr(_repolish)</parameters>
                <condition>&lt;オプション条件&gt;</condition>
            </step>
            <step id="AdvancedStubStep" version="1">
                <action>RETURN VALUE</action>
                <function>calc</function>
                <parameters>Int(calc_flg)</parameters>
                <condition>If()-&gt;Arg("instr")-&gt;NotEqual()-&gt;CharPtr(_repolish)-&gt;Fail("repolish")</condition>
            </step>
            <step id="AdvancedStubStep" version="1">
                <action>USE CUSTOM ACTION</action>
                <function>calc</function>
                <parameters>Arg("result")-&gt;Assign()-&gt;Int(calcresult)</parameters>
                <condition>If()-&gt;Int(0)-&gt;Equal()-&gt;Int(calc_flg)</condition>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return/>
            <name>createOutputStatement</name>
            <params>_instr, _outstr</params>
        </step>
        <step id="AssertionsStep" version="1">
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
char * _instr = CPPTEST_DS_GET_CSTR("[IN]instr");
char * _repolish = CPPTEST_DS_GET_CSTR("[IN]repolish");
char _outstr_org[256];
char * _outstr = &_outstr_org;
int strlenCheck_flg = CPPTEST_DS_GET_INTEGER("[IN]strlenCheck_flg");
int formatCheck_flg = CPPTEST_DS_GET_INTEGER("[IN]formatCheck_flg");
int reversePolish_flg = CPPTEST_DS_GET_INTEGER("[IN]reversePolish_flg");
int calc_flg = CPPTEST_DS_GET_INTEGER("[IN]calc_flg");
int calcresult = CPPTEST_DS_GET_INTEGER("[IN]calcresult");
#if CPPTEST_TRIGGER_ENABLED == 0
#error "Test case uses Stubs API which is currently disabled (-DCPPTEST_TRIGGER_ENABLED=0). Please review your configuration."
#endif
CPPTEST_ON_CALL("strlenCheck")->If()->Arg("instr")->NotEqual()->CharPtr(_instr)->Fail("value")->Arg("__return")->Assign()->Int(strlenCheck_flg);
CPPTEST_ON_CALL("formatCheck")->If()->Arg("instr")->NotEqual()->CharPtr(_instr)->Fail("value")->Arg("__return")->Assign()->Int(formatCheck_flg);
CPPTEST_ON_CALL("reversePolish")->Arg("outstr")->Assign()->CharPtr(_repolish);
CPPTEST_ON_CALL("reversePolish")->Arg("__return")->Assign()->Int(reversePolish_flg);
CPPTEST_ON_CALL("calc")->Arg("instr")->Assign()->CharPtr(_repolish);
CPPTEST_ON_CALL("calc")->If()->Arg("instr")->NotEqual()->CharPtr(_repolish)->Fail("repolish")->Arg("__return")->Assign()->Int(calc_flg);
CPPTEST_ON_CALL("calc")->If()->Int(0)->Equal()->Int(calc_flg)->Arg("result")->Assign()->Int(calcresult);
createOutputStatement(_instr, _outstr);
CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("[OUT]outstr"), _outstr);
}
/* CPPTEST_TEST_CASE_END test_createPutputStatement */


/* CPPTEST_TEST_CASE_BEGIN test_case */
/* CPPTEST_TEST_CASE_CONTEXT void createOutputStatement(char *, char *) */
void TestSuite_createOutputStatement_e83a4da1_test_case()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" version="2">
            <ext>true</ext>
            <extname>createOutputStatement</extname>
        </step>
        <step id="MultiVariableStep" version="1">
            <step id="VariableStep" version="1">
                <name>_instr</name>
                <type>char *</type>
                <value>CPPTEST_DS_GET_CSTR("[IN]instr")</value>
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
        <step id="AdvancedStubsStep" version="1">
            <step id="AdvancedStubStep" version="1">
                <action>CALL ORIGINAL</action>
                <function>strlenCheck</function>
                <parameters>&lt;なし&gt;</parameters>
                <condition>&lt;オプション条件&gt;</condition>
            </step>
            <step id="AdvancedStubStep" version="1">
                <action>CALL ORIGINAL</action>
                <function>formatCheck</function>
                <parameters>&lt;なし&gt;</parameters>
                <condition>&lt;オプション条件&gt;</condition>
            </step>
            <step id="AdvancedStubStep" version="1">
                <action>CALL ORIGINAL</action>
                <function>reversePolish</function>
                <parameters>&lt;なし&gt;</parameters>
                <condition>&lt;オプション条件&gt;</condition>
            </step>
            <step id="AdvancedStubStep" version="1">
                <action>CALL ORIGINAL</action>
                <function>calc</function>
                <parameters>&lt;なし&gt;</parameters>
                <condition>&lt;オプション条件&gt;</condition>
            </step>
        </step>
        <step id="CallStep" version="1">
            <comment>Tested function call</comment>
            <return/>
            <name>createOutputStatement</name>
            <params>_instr, _outstr</params>
        </step>
        <step id="AssertionsStep" version="1">
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
char * _instr = CPPTEST_DS_GET_CSTR("[IN]instr");
char _outstr_org[256];
char * _outstr = &_outstr_org;
#if CPPTEST_TRIGGER_ENABLED == 0
#error "Test case uses Stubs API which is currently disabled (-DCPPTEST_TRIGGER_ENABLED=0). Please review your configuration."
#endif
CPPTEST_ON_CALL("strlenCheck")->Arg("__callOrig")->Assign()->Int(1);
CPPTEST_ON_CALL("formatCheck")->Arg("__callOrig")->Assign()->Int(1);
CPPTEST_ON_CALL("reversePolish")->Arg("__callOrig")->Assign()->Int(1);
CPPTEST_ON_CALL("calc")->Arg("__callOrig")->Assign()->Int(1);
createOutputStatement(_instr, _outstr);
CPPTEST_ASSERT_CSTR_EQUAL(CPPTEST_DS_GET_CSTR("[OUT]outstr"), _outstr);
}
/* CPPTEST_TEST_CASE_END test_case */
