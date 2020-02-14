/*----------------------------------------------------------------------------
 * File:  Tracking_WorkoutTimer_class.h
 *
 * Class:       WorkoutTimer  (WorkoutTimer)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_WORKOUTTIMER_CLASS_H
#define TRACKING_WORKOUTTIMER_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   WorkoutTimer  (WorkoutTimer)
 */
struct Tracking_WorkoutTimer {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  Escher_TimeStamp_t session_startTime;  /* * session_startTime (R8) */
  i_t time;  /* - time */
  Escher_Timer_t * timer;  /* - timer */
  /* relationship storage */
  Tracking_WorkoutSession * WorkoutSession_R8_acts_as_the_stopwatch_for;
};
void Tracking_WorkoutTimer_op_activate( Tracking_WorkoutTimer * );
void Tracking_WorkoutTimer_op_deactivate( Tracking_WorkoutTimer * );
void Tracking_WorkoutTimer_op_initialize( Tracking_WorkoutTimer * );
void Tracking_WorkoutTimer_R8_Link_is_timed_by( Tracking_WorkoutSession *, Tracking_WorkoutTimer * );
/* Note:  WorkoutSession<-R8->WorkoutTimer unrelate accessor not needed */

#define Tracking_WorkoutTimer_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Tracking_WorkoutTimer_extent;

/*
 * instance event:  WorkoutTimer1:'startStopPressed'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Tracking_WorkoutTimerevent1;
extern const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent1c;
/*
 * instance event:  WorkoutTimer2:'lapResetPressed'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Tracking_WorkoutTimerevent2;
extern const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent2c;
/*
 * instance event:  WorkoutTimer3:'tick'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Tracking_WorkoutTimerevent3;
extern const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent3c;
/*
 * instance event:  WorkoutTimer4:'pause'
 * warning:  Event is not used in application - no code generated.
 */
/*
 * instance event:  WorkoutTimer5:'resume'
 * warning:  Event is not used in application - no code generated.
 */
/*
 * instance event:  WorkoutTimer6:'startTimer'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Tracking_WorkoutTimerevent6;
extern const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent6c;
/*
 * instance event:  WorkoutTimer8:'lapResetComplete'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} Tracking_WorkoutTimerevent8;
extern const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent8c;
/*
 * union of events targeted towards 'WorkoutTimer' state machine
 */
typedef union {
  Tracking_WorkoutTimerevent1 workouttimer1_1;  
  Tracking_WorkoutTimerevent2 workouttimer2_2;  
  Tracking_WorkoutTimerevent3 workouttimer3_3;  
  Tracking_WorkoutTimerevent6 workouttimer6_4;  
  Tracking_WorkoutTimerevent8 workouttimer8_5;  
} Tracking_WorkoutTimer_Events_u;
/*
 * enumeration of state model states for class
 */
#define Tracking_WorkoutTimer_STATE_1 1  /* state [1]:  (stopped) */
#define Tracking_WorkoutTimer_STATE_2 2  /* state [2]:  (running) */
#define Tracking_WorkoutTimer_STATE_3 3  /* state [3]:  (paused) */
#define Tracking_WorkoutTimer_STATE_6 4  /* state [6]:  (processingStart) */
#define Tracking_WorkoutTimer_STATE_8 5  /* state [8]:  (resetLap) */
/*
 * enumeration of state model event numbers
 */
#define TRACKING_WORKOUTTIMEREVENT1NUM 0  /* WorkoutTimer1:'startStopPressed' */
#define TRACKING_WORKOUTTIMEREVENT2NUM 1  /* WorkoutTimer2:'lapResetPressed' */
#define TRACKING_WORKOUTTIMEREVENT3NUM 2  /* WorkoutTimer3:'tick' */
#define TRACKING_WORKOUTTIMEREVENT6NUM 3  /* WorkoutTimer6:'startTimer' */
#define TRACKING_WORKOUTTIMEREVENT8NUM 4  /* WorkoutTimer8:'lapResetComplete' */
extern void Tracking_WorkoutTimer_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* TRACKING_WORKOUTTIMER_CLASS_H */
