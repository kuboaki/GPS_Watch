/*----------------------------------------------------------------------------
 * File:  Tracking_GoalSpecConstants_class.h
 *
 * Class:       GoalSpecConstants  (GoalSpecConstants)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_GOALSPECCONSTANTS_CLASS_H
#define TRACKING_GOALSPECCONSTANTS_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   GoalSpecConstants  (GoalSpecConstants)
 */
struct Tracking_GoalSpecConstants {

  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t GoalSpecOrigin;  /* - GoalSpecOrigin */
};
void Tracking_GoalSpecConstants_op_initialize( void );


#define Tracking_GoalSpecConstants_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Tracking_GoalSpecConstants_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* TRACKING_GOALSPECCONSTANTS_CLASS_H */
