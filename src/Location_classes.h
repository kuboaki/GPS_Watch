/*----------------------------------------------------------------------------
 * File:  Location_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  Location
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef LOCATION_CLASSES_H
#define LOCATION_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  Location
 */
extern Escher_Extent_t * const Location_class_info[];
extern const EventTaker_t Location_EventDispatcher[];
void Location_execute_initialization( void );

#define Location_STATE_MODELS 1
/* Define constants to map to class numbers.  */
#define Location_GPS_CLASS_NUMBER 0
#define Location_simulatedGPS_CLASS_NUMBER 1
#define Location_Distance_CLASS_NUMBER 2
#define Location_MAX_CLASS_NUMBERS 3

/* Provide a map of classes to task numbers.  */
#define Location_TASK_NUMBERS  0

#define Location_class_dispatchers\
  Location_GPS_Dispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct Location_GPS Location_GPS;
typedef struct Location_simulatedGPS Location_simulatedGPS;
typedef struct Location_Distance Location_Distance;

/* union of class declarations so we may derive largest class size */
#define Location_CLASS_U \
  char Location_dummy;\

/*
 * UML Domain Functions (Synchronous Services)
 */
void Location_getDistance( const r_t, const r_t, r_t *, const r_t, const r_t );
void Location_getLocation( r_t *, r_t * );
void Location_registerListener( void );
r_t Location_sqrt( const r_t );
void Location_unregisterListener( void );

#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "Location.h"
#include "Location_GPS_class.h"
#include "Location_simulatedGPS_class.h"
#include "Location_Distance_class.h"
/*
 * roll-up of all events (with their parameters) for component Location
 */
typedef union {
  Location_GPS_Events_u Location_GPS_Events_u_namespace;
} Location_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* LOCATION_CLASSES_H */
