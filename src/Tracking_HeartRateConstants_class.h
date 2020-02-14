/*----------------------------------------------------------------------------
 * File:  Tracking_HeartRateConstants_class.h
 *
 * Class:       HeartRateConstants  (HeartRateConstants)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_HEARTRATECONSTANTS_CLASS_H
#define TRACKING_HEARTRATECONSTANTS_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   HeartRateConstants  (HeartRateConstants)
 */
struct Tracking_HeartRateConstants {

  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t HeartRateAveragingWindow;  /* - HeartRateAveragingWindow */
  i_t HeartRateSamplingPeriod;  /* - HeartRateSamplingPeriod */
};
void Tracking_HeartRateConstants_op_initialize( void );


#define Tracking_HeartRateConstants_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Tracking_HeartRateConstants_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* TRACKING_HEARTRATECONSTANTS_CLASS_H */
