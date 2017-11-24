#include "cpptest.h"

/**
 * This file contains user stub definitions.
 *
 * To create a user stub:
 * 1. Open stub template list:
 *    - Eclipse IDE: type 'stub' and press <Ctrl> <Space>
 *    - Microsoft Visual Studio IDE: use context menu C++test->Insert Snippet...
 * 2. Choose the stub template from the list.
 * 3. #include the header file where the function you want to stub is originally 
 *    declared as well as any supporting header files as necessary.
 * 4. Fill out the stub signature to match that of the original function, 
 *    while keeping the CppTest_Stub prefix when it applies.
 *    Note: for C++ operators, use appropriate stub names - e.g.:
 *        CppTest_Stub_operator_new    for operator new
 *        CppTest_Stub_operator_delete for operator delete
 *        CppTest_Stub_operator_plus   for operator +
 *    Refer to C++test User's Guide for a complete list of stub names for operators. 
 * 5. Fill out the body of the stub according to intent.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */

/** User stub definition for function: int calc(char *, int *) */
EXTERN_C_LINKAGE int calc (char * instr,int * result);
EXTERN_C_LINKAGE int CppTest_Stub_calc (char * instr,int * result)
{
#if CPPTEST_TRIGGER_ENABLED
    int __return = 0;
    int __callOrig = 0;
    printf("%s\n",instr);

    CPPTEST_ACTUAL_CALL_C("calc")->WithRefArg("instr", &instr, tgr_ptr_type(tgr_char_type()))->WithRefArg("result", result, tgr_ptr_type(tgr_int_type()))->WithRefArg("__return", &__return, tgr_int_type())->WithRefArg("__callOrig", &__callOrig, tgr_int_type())->End();
    if (__callOrig) {
        int __return = calc(instr,result);
        CPPTEST_ACTUAL_AFTER_CALL_C("calc")->WithRefArg("instr", &instr, tgr_ptr_type(tgr_char_type()))->WithRefArg("result", result, tgr_ptr_type(tgr_int_type()))->WithRefArg("__return", &__return, tgr_int_type())->End();
        return __return;
    }
    return __return;
#else
    return 0;
#endif
}
