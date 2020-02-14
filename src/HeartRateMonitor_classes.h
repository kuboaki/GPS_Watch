/*----------------------------------------------------------------------------
 * File:  HeartRateMonitor_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  HeartRateMonitor
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HEARTRATEMONITOR_CLASSES_H
#define HEARTRATEMONITOR_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  HeartRateMonitor
 */
extern Escher_Extent_t * const HeartRateMonitor_class_info[];
extern const EventTaker_t HeartRateMonitor_EventDispatcher[];
void HeartRateMonitor_execute_initialization( void );

#define HeartRateMonitor_STATE_MODELS 1
/* Define constants to map to class numbers.  */
#define HeartRateMonitor_HeartRateMonitor_CLASS_NUMBER 0
#define HeartRateMonitor_HeartRateConstants_CLASS_NUMBER 1
#define HeartRateMonitor_MAX_CLASS_NUMBERS 2

/* Provide a map of classes to task numbers.  */
#define HeartRateMonitor_TASK_NUMBERS  0

#define HeartRateMonitor_class_dispatchers\
  HeartRateMonitor_HeartRateMonitor_Dispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct HeartRateMonitor_HeartRateMonitor HeartRateMonitor_HeartRateMonitor;
typedef struct HeartRateMonitor_HeartRateConstants HeartRateMonitor_HeartRateConstants;

/* union of class declarations so we may derive largest class size */
#define HeartRateMonitor_CLASS_U \
  char HeartRateMonitor_dummy;\

/*
 * UML Domain Functions (Synchronous Services)
 */
void HeartRateMonitor_registerListener( void );
void HeartRateMonitor_unregisterListener( void );

#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HeartRateMonitor.h"
#include "HeartRateMonitor_HeartRateMonitor_class.h"
#include "HeartRateMonitor_HeartRateConstants_class.h"
/*
 * roll-up of all events (with their parameters) for component HeartRateMonitor
 */
typedef union {
  HeartRateMonitor_HeartRateMonitor_Events_u HeartRateMonitor_HeartRateMonitor_Events_u_namespace;
} HeartRateMonitor_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* HEARTRATEMONITOR_CLASSES_H */
