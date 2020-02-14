/*----------------------------------------------------------------------------
 * File:  Tracking_HeartRateConstants_class.c
 *
 * Class:       HeartRateConstants  (HeartRateConstants)
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
Tracking_HeartRateConstants_op_initialize()
{
  Tracking_HeartRateConstants * hrc=0;
  /* SELECT any hrc FROM INSTANCES OF HeartRateConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any hrc FROM INSTANCES OF HeartRateConstants" );
  hrc = (Tracking_HeartRateConstants *) Escher_SetGetAny( &pG_Tracking_HeartRateConstants_extent.active );
  /* IF ( empty hrc ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty hrc )" );
  if ( ( 0 == hrc ) ) {
    /* CREATE OBJECT INSTANCE hrc OF HeartRateConstants */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE hrc OF HeartRateConstants" );
    hrc = (Tracking_HeartRateConstants *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_HeartRateConstants_CLASS_NUMBER );
    /* ASSIGN hrc.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN hrc.id = 1" );
    ((Tracking_HeartRateConstants *)xtUML_detect_empty_handle( hrc, "HeartRateConstants", "hrc.id" ))->id = 1;
    /* ASSIGN hrc.HeartRateAveragingWindow = 5 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN hrc.HeartRateAveragingWindow = 5" );
    ((Tracking_HeartRateConstants *)xtUML_detect_empty_handle( hrc, "HeartRateConstants", "hrc.HeartRateAveragingWindow" ))->HeartRateAveragingWindow = 5;
    /* ASSIGN hrc.HeartRateSamplingPeriod = 3 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN hrc.HeartRateSamplingPeriod = 3" );
    ((Tracking_HeartRateConstants *)xtUML_detect_empty_handle( hrc, "HeartRateConstants", "hrc.HeartRateSamplingPeriod" ))->HeartRateSamplingPeriod = 3;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      HeartRateConstants  (HeartRateConstants)
 * Component:  Tracking
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Tracking_HeartRateConstants_container[ Tracking_HeartRateConstants_MAX_EXTENT_SIZE ];
static Tracking_HeartRateConstants Tracking_HeartRateConstants_instances[ Tracking_HeartRateConstants_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Tracking_HeartRateConstants_extent = {
  {0}, {0}, &Tracking_HeartRateConstants_container[ 0 ],
  (Escher_iHandle_t) &Tracking_HeartRateConstants_instances,
  sizeof( Tracking_HeartRateConstants ), 0, Tracking_HeartRateConstants_MAX_EXTENT_SIZE
  };

