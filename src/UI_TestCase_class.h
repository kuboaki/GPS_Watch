/*----------------------------------------------------------------------------
 * File:  UI_TestCase_class.h
 *
 * Class:       TestCase  (TestCase)
 * Component:   UI
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef UI_TESTCASE_CLASS_H
#define UI_TESTCASE_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   TestCase  (TestCase)
 */
struct UI_TestCase {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t iterations;  /* - iterations */
};
void UI_TestCase_op_execute( void );


#define UI_TestCase_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_UI_TestCase_extent;

/*
 * instance event:  TestCase1:'doDelay'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_TestCaseevent1;
extern const Escher_xtUMLEventConstant_t UI_TestCaseevent1c;
/*
 * instance event:  TestCase3:'finish'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_TestCaseevent3;
extern const Escher_xtUMLEventConstant_t UI_TestCaseevent3c;
/*
 * instance event:  TestCase4:'initializationComplete'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_TestCaseevent4;
extern const Escher_xtUMLEventConstant_t UI_TestCaseevent4c;
/*
 * instance event:  TestCase5:'initialize'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  i_t p_iterations; /* iterations */
} UI_TestCaseevent5;
extern const Escher_xtUMLEventConstant_t UI_TestCaseevent5c;
/*
 * union of events targeted towards 'TestCase' state machine
 */
typedef union {
  UI_TestCaseevent1 testcase1_1;  
  UI_TestCaseevent3 testcase3_2;  
  UI_TestCaseevent4 testcase4_3;  
  UI_TestCaseevent5 testcase5_4;  
} UI_TestCase_Events_u;
/*
 * enumeration of state model states for class
 */
#define UI_TestCase_STATE_1 1  /* state [1]:  (Idle) */
#define UI_TestCase_STATE_2 2  /* state [2]:  (pressStartStop) */
#define UI_TestCase_STATE_3 3  /* state [3]:  (testCaseFinished) */
#define UI_TestCase_STATE_4 4  /* state [4]:  (initialize) */
/*
 * enumeration of state model event numbers
 */
#define UI_TESTCASEEVENT1NUM 0  /* TestCase1:'doDelay' */
#define UI_TESTCASEEVENT3NUM 1  /* TestCase3:'finish' */
#define UI_TESTCASEEVENT4NUM 2  /* TestCase4:'initializationComplete' */
#define UI_TESTCASEEVENT5NUM 3  /* TestCase5:'initialize' */
extern void UI_TestCase_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* UI_TESTCASE_CLASS_H */
