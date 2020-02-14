/*----------------------------------------------------------------------------
 * File:  Tracking_GoalAchievement_class.h
 *
 * Class:       GoalAchievement  (GoalAchievement)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef TRACKING_GOALACHIEVEMENT_CLASS_H
#define TRACKING_GOALACHIEVEMENT_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   GoalAchievement  (GoalAchievement)
 */
struct Tracking_GoalAchievement {

  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t evaluationPeriod;  /* - evaluationPeriod */
};
void Tracking_GoalAchievement_op_initialize( void );


#define Tracking_GoalAchievement_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Tracking_GoalAchievement_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* TRACKING_GOALACHIEVEMENT_CLASS_H */
