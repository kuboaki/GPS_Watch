/*----------------------------------------------------------------------------
 * File:  UI_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  UI
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef UI_CLASSES_H
#define UI_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  UI
 */
extern Escher_Extent_t * const UI_class_info[];
extern const EventTaker_t UI_EventDispatcher[];
void UI_execute_initialization( void );

#define UI_STATE_MODELS 2
/* Define constants to map to class numbers.  */
#define UI_UI_CLASS_NUMBER 0
#define UI_TestCase_CLASS_NUMBER 1
#define UI_UIConstants_CLASS_NUMBER 2
#define UI_MAX_CLASS_NUMBERS 3

/* Provide a map of classes to task numbers.  */
#define UI_TASK_NUMBERS  0, 0

#define UI_class_dispatchers\
  UI_UI_Dispatch,\
  UI_TestCase_Dispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct UI_UI UI_UI;
typedef struct UI_TestCase UI_TestCase;
typedef struct UI_UIConstants UI_UIConstants;

/* union of class declarations so we may derive largest class size */
#define UI_CLASS_U \
  char UI_dummy;\

/*
 * UML Domain Functions (Synchronous Services)
 */
void UI_RunTestCase( void );
void UI_createGoals_1( void );
void UI_init( void );
void UI_sendLapResetPressed( void );
void UI_sendLightPressed( void );
void UI_sendModePressed( void );
void UI_sendStartStopPressed( void );
void UI_sendTargetPressed( void );
void UI_setData( const GPS_Watch_UIUnit_t, const r_t );
void UI_setIndicator( const GPS_Watch_UIIndicator_t );
void UI_setTime( const i_t );
void UI_startTest( void );

#include "UI_GuiBridge_bridge.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "UI.h"
#include "UI_UI_class.h"
#include "UI_TestCase_class.h"
#include "UI_UIConstants_class.h"
/*
 * roll-up of all events (with their parameters) for component UI
 */
typedef union {
  UI_UI_Events_u UI_UI_Events_u_namespace;
  UI_TestCase_Events_u UI_TestCase_Events_u_namespace;
} UI_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* UI_CLASSES_H */
