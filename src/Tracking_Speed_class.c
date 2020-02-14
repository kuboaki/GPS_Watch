/*----------------------------------------------------------------------------
 * File:  Tracking_Speed_class.c
 *
 * Class:       Speed  (Speed)
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
Tracking_Speed_op_initialize()
{
  Tracking_Speed * speed=0;
  /* SELECT any speed FROM INSTANCES OF Speed */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any speed FROM INSTANCES OF Speed" );
  speed = (Tracking_Speed *) Escher_SetGetAny( &pG_Tracking_Speed_extent.active );
  /* IF ( empty speed ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty speed )" );
  if ( ( 0 == speed ) ) {
    /* CREATE OBJECT INSTANCE speed OF Speed */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE speed OF Speed" );
    speed = (Tracking_Speed *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_Speed_CLASS_NUMBER );
    /* ASSIGN speed.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN speed.id = 1" );
    ((Tracking_Speed *)xtUML_detect_empty_handle( speed, "Speed", "speed.id" ))->id = 1;
    /* ASSIGN speed.SpeedAveragingWindow = 5 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN speed.SpeedAveragingWindow = 5" );
    ((Tracking_Speed *)xtUML_detect_empty_handle( speed, "Speed", "speed.SpeedAveragingWindow" ))->SpeedAveragingWindow = 5;
    /* ASSIGN speed.SecondsPerHour = 3600 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN speed.SecondsPerHour = 3600" );
    ((Tracking_Speed *)xtUML_detect_empty_handle( speed, "Speed", "speed.SecondsPerHour" ))->SecondsPerHour = 3600;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      Speed  (Speed)
 * Component:  Tracking
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Tracking_Speed_container[ Tracking_Speed_MAX_EXTENT_SIZE ];
static Tracking_Speed Tracking_Speed_instances[ Tracking_Speed_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Tracking_Speed_extent = {
  {0}, {0}, &Tracking_Speed_container[ 0 ],
  (Escher_iHandle_t) &Tracking_Speed_instances,
  sizeof( Tracking_Speed ), 0, Tracking_Speed_MAX_EXTENT_SIZE
  };

