/*----------------------------------------------------------------------------
 * File:  Tracking_WorkoutTimerConstants_class.h
 *
 * Class:       WorkoutTimerConstants  (WorkoutTimerConstants)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_WORKOUTTIMERCONSTANTS_CLASS_H
#define TRACKING_WORKOUTTIMERCONSTANTS_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   WorkoutTimerConstants  (WorkoutTimerConstants)
 */
struct Tracking_WorkoutTimerConstants {

  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t timerPeriod;  /* - timerPeriod */
};
void Tracking_WorkoutTimerConstants_op_initialize( void );


#define Tracking_WorkoutTimerConstants_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Tracking_WorkoutTimerConstants_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* TRACKING_WORKOUTTIMERCONSTANTS_CLASS_H */
