/*----------------------------------------------------------------------------
 * File:  Tracking_GoalSpec_class.h
 *
 * Class:       GoalSpec  (GoalSpec)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_GOALSPEC_CLASS_H
#define TRACKING_GOALSPEC_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   GoalSpec  (GoalSpec)
 */
struct Tracking_GoalSpec {

  /* application analysis class attributes */
  Escher_TimeStamp_t session_startTime;  /* * session_startTime (R10) */
  i_t sequenceNumber;  /* * sequenceNumber */
  r_t minimum;  /* - minimum */
  r_t maximum;  /* - maximum */
  r_t span;  /* - span */
  GPS_Watch_GoalCriteria_t criteriaType;  /* - criteriaType */
  GPS_Watch_GoalSpan_t spanType;  /* - spanType */
  i_t last_goal_ID;  /* - last_goal_ID */
  /* relationship storage */
  /* Note:  No storage needed for GoalSpec->Goal[R9] */
  /* Note:  No storage needed for GoalSpec->WorkoutSession[R10] */
};

#define Tracking_Goal_R9_From_GoalSpec_specifies( GoalSpec ) ( &((GoalSpec)->Goal_R9_specifies) )
void Tracking_GoalSpec_R10_Link_includes( Tracking_WorkoutSession *, Tracking_GoalSpec * );
void Tracking_GoalSpec_R10_Unlink_includes( Tracking_WorkoutSession *, Tracking_GoalSpec * );

#define Tracking_GoalSpec_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Tracking_GoalSpec_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* TRACKING_GOALSPEC_CLASS_H */
