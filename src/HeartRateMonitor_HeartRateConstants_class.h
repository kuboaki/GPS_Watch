/*----------------------------------------------------------------------------
 * File:  HeartRateMonitor_HeartRateConstants_class.h
 *
 * Class:       HeartRateConstants  (HeartRateConstants)
 * Component:   HeartRateMonitor
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HEARTRATEMONITOR_HEARTRATECONSTANTS_CLASS_H
#define HEARTRATEMONITOR_HEARTRATECONSTANTS_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   HeartRateConstants  (HeartRateConstants)
 */
struct HeartRateMonitor_HeartRateConstants {

  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t HeartRateAveragingWindow;  /* - HeartRateAveragingWindow */
  i_t HeartRateSamplingPeriod;  /* - HeartRateSamplingPeriod */
};
void HeartRateMonitor_HeartRateConstants_op_initialize( void );


#define HeartRateMonitor_HeartRateConstants_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_HeartRateMonitor_HeartRateConstants_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HEARTRATEMONITOR_HEARTRATECONSTANTS_CLASS_H */
