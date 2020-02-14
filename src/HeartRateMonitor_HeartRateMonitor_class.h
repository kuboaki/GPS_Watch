/*----------------------------------------------------------------------------
 * File:  HeartRateMonitor_HeartRateMonitor_class.h
 *
 * Class:       HeartRateMonitor  (HeartRateMonitor)
 * Component:   HeartRateMonitor
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HEARTRATEMONITOR_HEARTRATEMONITOR_CLASS_H
#define HEARTRATEMONITOR_HEARTRATEMONITOR_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   HeartRateMonitor  (HeartRateMonitor)
 */
struct HeartRateMonitor_HeartRateMonitor {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t recentHeartRate;  /* - recentHeartRate */
  Escher_Timer_t * timer;  /* - timer */
};
void HeartRateMonitor_HeartRateMonitor_op_initialize( void );


#define HeartRateMonitor_HeartRateMonitor_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_HeartRateMonitor_HeartRateMonitor_extent;

/*
 * instance event:  HeartRateMonitor3:'timeout'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} HeartRateMonitor_HeartRateMonitorevent3;
extern const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent3c;
/*
 * instance event:  HeartRateMonitor5:'registerComplete'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} HeartRateMonitor_HeartRateMonitorevent5;
extern const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent5c;
/*
 * instance event:  HeartRateMonitor7:'unregisterComplete'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} HeartRateMonitor_HeartRateMonitorevent7;
extern const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent7c;
/*
 * instance event:  HeartRateMonitor8:'registerListener'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} HeartRateMonitor_HeartRateMonitorevent8;
extern const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent8c;
/*
 * instance event:  HeartRateMonitor9:'unregisterListener'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} HeartRateMonitor_HeartRateMonitorevent9;
extern const Escher_xtUMLEventConstant_t HeartRateMonitor_HeartRateMonitorevent9c;
/*
 * union of events targeted towards 'HeartRateMonitor' state machine
 */
typedef union {
  HeartRateMonitor_HeartRateMonitorevent3 heartratemonitor3_1;  
  HeartRateMonitor_HeartRateMonitorevent5 heartratemonitor5_2;  
  HeartRateMonitor_HeartRateMonitorevent7 heartratemonitor7_3;  
  HeartRateMonitor_HeartRateMonitorevent8 heartratemonitor8_4;  
  HeartRateMonitor_HeartRateMonitorevent9 heartratemonitor9_5;  
} HeartRateMonitor_HeartRateMonitor_Events_u;
/*
 * enumeration of state model states for class
 */
#define HeartRateMonitor_HeartRateMonitor_STATE_1 1  /* state [1]:  (idle) */
#define HeartRateMonitor_HeartRateMonitor_STATE_2 2  /* state [2]:  (monitoring) */
#define HeartRateMonitor_HeartRateMonitor_STATE_3 3  /* state [3]:  (Registering) */
#define HeartRateMonitor_HeartRateMonitor_STATE_4 4  /* state [4]:  (Unregistering) */
/*
 * enumeration of state model event numbers
 */
#define HEARTRATEMONITOR_HEARTRATEMONITOREVENT3NUM 0  /* HeartRateMonitor3:'timeout' */
#define HEARTRATEMONITOR_HEARTRATEMONITOREVENT5NUM 1  /* HeartRateMonitor5:'registerComplete' */
#define HEARTRATEMONITOR_HEARTRATEMONITOREVENT7NUM 2  /* HeartRateMonitor7:'unregisterComplete' */
#define HEARTRATEMONITOR_HEARTRATEMONITOREVENT8NUM 3  /* HeartRateMonitor8:'registerListener' */
#define HEARTRATEMONITOR_HEARTRATEMONITOREVENT9NUM 4  /* HeartRateMonitor9:'unregisterListener' */
extern void HeartRateMonitor_HeartRateMonitor_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* HEARTRATEMONITOR_HEARTRATEMONITOR_CLASS_H */
