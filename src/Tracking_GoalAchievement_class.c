/*----------------------------------------------------------------------------
 * File:  Tracking_GoalAchievement_class.c
 *
 * Class:       GoalAchievement  (GoalAchievement)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "Tracking_classes.h"

/*
 * class operation:  initialize
 */
void
Tracking_GoalAchievement_op_initialize()
{
  Tracking_GoalAchievement * goalachievement=0;
  /* SELECT any goalachievement FROM INSTANCES OF GoalAchievement */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any goalachievement FROM INSTANCES OF GoalAchievement" );
  goalachievement = (Tracking_GoalAchievement *) Escher_SetGetAny( &pG_Tracking_GoalAchievement_extent.active );
  /* IF ( empty goalachievement ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty goalachievement )" );
  if ( ( 0 == goalachievement ) ) {
    /* CREATE OBJECT INSTANCE goalachievement OF GoalAchievement */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE goalachievement OF GoalAchievement" );
    goalachievement = (Tracking_GoalAchievement *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_GoalAchievement_CLASS_NUMBER );
    /* ASSIGN goalachievement.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN goalachievement.id = 1" );
    ((Tracking_GoalAchievement *)xtUML_detect_empty_handle( goalachievement, "GoalAchievement", "goalachievement.id" ))->id = 1;
    /* ASSIGN goalachievement.evaluationPeriod = 3000000 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN goalachievement.evaluationPeriod = 3000000" );
    ((Tracking_GoalAchievement *)xtUML_detect_empty_handle( goalachievement, "GoalAchievement", "goalachievement.evaluationPeriod" ))->evaluationPeriod = 3000000;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      GoalAchievement  (GoalAchievement)
 * Component:  Tracking
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Tracking_GoalAchievement_container[ Tracking_GoalAchievement_MAX_EXTENT_SIZE ];
static Tracking_GoalAchievement Tracking_GoalAchievement_instances[ Tracking_GoalAchievement_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Tracking_GoalAchievement_extent = {
  {0}, {0}, &Tracking_GoalAchievement_container[ 0 ],
  (Escher_iHandle_t) &Tracking_GoalAchievement_instances,
  sizeof( Tracking_GoalAchievement ), 0, Tracking_GoalAchievement_MAX_EXTENT_SIZE
  };

