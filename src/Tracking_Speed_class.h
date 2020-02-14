/*----------------------------------------------------------------------------
 * File:  Tracking_Speed_class.h
 *
 * Class:       Speed  (Speed)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_SPEED_CLASS_H
#define TRACKING_SPEED_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Speed  (Speed)
 */
struct Tracking_Speed {

  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t SpeedAveragingWindow;  /* - SpeedAveragingWindow */
  i_t SecondsPerHour;  /* - SecondsPerHour */
};
void Tracking_Speed_op_initialize( void );


#define Tracking_Speed_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Tracking_Speed_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* TRACKING_SPEED_CLASS_H */
