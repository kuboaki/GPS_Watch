/*----------------------------------------------------------------------------
 * File:  Tracking_GoalSpecConstants_class.c
 *
 * Class:       GoalSpecConstants  (GoalSpecConstants)
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
Tracking_GoalSpecConstants_op_initialize()
{
  Tracking_GoalSpecConstants * gsc=0;
  /* SELECT any gsc FROM INSTANCES OF GoalSpecConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any gsc FROM INSTANCES OF GoalSpecConstants" );
  gsc = (Tracking_GoalSpecConstants *) Escher_SetGetAny( &pG_Tracking_GoalSpecConstants_extent.active );
  /* IF ( empty gsc ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty gsc )" );
  if ( ( 0 == gsc ) ) {
    /* CREATE OBJECT INSTANCE gsc OF GoalSpecConstants */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE gsc OF GoalSpecConstants" );
    gsc = (Tracking_GoalSpecConstants *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_GoalSpecConstants_CLASS_NUMBER );
    /* ASSIGN gsc.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN gsc.id = 1" );
    ((Tracking_GoalSpecConstants *)xtUML_detect_empty_handle( gsc, "GoalSpecConstants", "gsc.id" ))->id = 1;
    /* ASSIGN gsc.GoalSpecOrigin = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN gsc.GoalSpecOrigin = 1" );
    ((Tracking_GoalSpecConstants *)xtUML_detect_empty_handle( gsc, "GoalSpecConstants", "gsc.GoalSpecOrigin" ))->GoalSpecOrigin = 1;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      GoalSpecConstants  (GoalSpecConstants)
 * Component:  Tracking
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Tracking_GoalSpecConstants_container[ Tracking_GoalSpecConstants_MAX_EXTENT_SIZE ];
static Tracking_GoalSpecConstants Tracking_GoalSpecConstants_instances[ Tracking_GoalSpecConstants_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Tracking_GoalSpecConstants_extent = {
  {0}, {0}, &Tracking_GoalSpecConstants_container[ 0 ],
  (Escher_iHandle_t) &Tracking_GoalSpecConstants_instances,
  sizeof( Tracking_GoalSpecConstants ), 0, Tracking_GoalSpecConstants_MAX_EXTENT_SIZE
  };

