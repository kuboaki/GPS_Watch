/*----------------------------------------------------------------------------
 * File:  Tracking_WorkoutTimerConstants_class.c
 *
 * Class:       WorkoutTimerConstants  (WorkoutTimerConstants)
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
Tracking_WorkoutTimerConstants_op_initialize()
{
  Tracking_WorkoutTimerConstants * wtc=0;
  /* SELECT any wtc FROM INSTANCES OF WorkoutTimerConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any wtc FROM INSTANCES OF WorkoutTimerConstants" );
  wtc = (Tracking_WorkoutTimerConstants *) Escher_SetGetAny( &pG_Tracking_WorkoutTimerConstants_extent.active );
  /* IF ( empty wtc ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty wtc )" );
  if ( ( 0 == wtc ) ) {
    /* CREATE OBJECT INSTANCE wtc OF WorkoutTimerConstants */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE wtc OF WorkoutTimerConstants" );
    wtc = (Tracking_WorkoutTimerConstants *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_WorkoutTimerConstants_CLASS_NUMBER );
    /* ASSIGN wtc.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN wtc.id = 1" );
    ((Tracking_WorkoutTimerConstants *)xtUML_detect_empty_handle( wtc, "WorkoutTimerConstants", "wtc.id" ))->id = 1;
    /* ASSIGN wtc.timerPeriod = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN wtc.timerPeriod = 1" );
    ((Tracking_WorkoutTimerConstants *)xtUML_detect_empty_handle( wtc, "WorkoutTimerConstants", "wtc.timerPeriod" ))->timerPeriod = 1;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      WorkoutTimerConstants  (WorkoutTimerConstants)
 * Component:  Tracking
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Tracking_WorkoutTimerConstants_container[ Tracking_WorkoutTimerConstants_MAX_EXTENT_SIZE ];
static Tracking_WorkoutTimerConstants Tracking_WorkoutTimerConstants_instances[ Tracking_WorkoutTimerConstants_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Tracking_WorkoutTimerConstants_extent = {
  {0}, {0}, &Tracking_WorkoutTimerConstants_container[ 0 ],
  (Escher_iHandle_t) &Tracking_WorkoutTimerConstants_instances,
  sizeof( Tracking_WorkoutTimerConstants ), 0, Tracking_WorkoutTimerConstants_MAX_EXTENT_SIZE
  };

