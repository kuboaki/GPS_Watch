/*----------------------------------------------------------------------------
 * File:  Location_GPS_class.h
 *
 * Class:       GPS  (GPS)
 * Component:   Location
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef LOCATION_GPS_CLASS_H
#define LOCATION_GPS_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   GPS  (GPS)
 */
struct Location_GPS {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  i_t id;  /* * id */
  r_t currentLatitude;  /* - currentLatitude */
  r_t currentLongitude;  /* - currentLongitude */
  i_t motionSegments;  /* - motionSegments */
  Escher_Timer_t * timer;  /* - timer */
};
void Location_GPS_op_initialize( void );


#define Location_GPS_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Location_GPS_extent;

/*
 * instance event:  GPS1:'tick'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Location_GPSevent1;
extern const Escher_xtUMLEventConstant_t Location_GPSevent1c;
/*
 * instance event:  GPS4:'registeringComplete'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Location_GPSevent4;
extern const Escher_xtUMLEventConstant_t Location_GPSevent4c;
/*
 * instance event:  GPS10:'registerListener'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Location_GPSevent10;
extern const Escher_xtUMLEventConstant_t Location_GPSevent10c;
/*
 * instance event:  GPS11:'unregisterListener'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Location_GPSevent11;
extern const Escher_xtUMLEventConstant_t Location_GPSevent11c;
/*
 * instance event:  GPS12:'unregisterComplete'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Location_GPSevent12;
extern const Escher_xtUMLEventConstant_t Location_GPSevent12c;
/*
 * union of events targeted towards 'GPS' state machine
 */
typedef union {
  Location_GPSevent1 gps1_1;  
  Location_GPSevent4 gps4_2;  
  Location_GPSevent10 gps10_3;  
  Location_GPSevent11 gps11_4;  
  Location_GPSevent12 gps12_5;  
} Location_GPS_Events_u;
/*
 * enumeration of state model states for class
 */
#define Location_GPS_STATE_1 1  /* state [1]:  (idle) */
#define Location_GPS_STATE_2 2  /* state [2]:  (locating) */
#define Location_GPS_STATE_3 3  /* state [3]:  (registeringListener) */
#define Location_GPS_STATE_5 4  /* state [5]:  (unregistering) */
/*
 * enumeration of state model event numbers
 */
#define LOCATION_GPSEVENT1NUM 0  /* GPS1:'tick' */
#define LOCATION_GPSEVENT4NUM 1  /* GPS4:'registeringComplete' */
#define LOCATION_GPSEVENT10NUM 2  /* GPS10:'registerListener' */
#define LOCATION_GPSEVENT11NUM 3  /* GPS11:'unregisterListener' */
#define LOCATION_GPSEVENT12NUM 4  /* GPS12:'unregisterComplete' */
extern void Location_GPS_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* LOCATION_GPS_CLASS_H */
