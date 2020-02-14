/*----------------------------------------------------------------------------
 * File:  Location_simulatedGPS_class.c
 *
 * Class:       simulatedGPS  (simulatedGPS)
 * Component:   Location
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "Location_classes.h"

/*
 * class operation:  initialize
 */
void
Location_simulatedGPS_op_initialize()
{
  Location_simulatedGPS * simgps=0;
  /* SELECT any simgps FROM INSTANCES OF simulatedGPS */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any simgps FROM INSTANCES OF simulatedGPS" );
  simgps = (Location_simulatedGPS *) Escher_SetGetAny( &pG_Location_simulatedGPS_extent.active );
  /* IF ( empty simgps ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty simgps )" );
  if ( ( 0 == simgps ) ) {
    /* CREATE OBJECT INSTANCE simgps OF simulatedGPS */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE simgps OF simulatedGPS" );
    simgps = (Location_simulatedGPS *) Escher_CreateInstance( Location_DOMAIN_ID, Location_simulatedGPS_CLASS_NUMBER );
    /* ASSIGN simgps.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN simgps.id = 1" );
    ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.id" ))->id = 1;
    /* ASSIGN simgps.initialLatitude = 32.432237 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN simgps.initialLatitude = 32.432237" );
    ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.initialLatitude" ))->initialLatitude = 32.432237;
    /* ASSIGN simgps.initialLongitude = - 110.812283 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN simgps.initialLongitude = - 110.812283" );
    ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.initialLongitude" ))->initialLongitude = -110.812283;
    /* ASSIGN simgps.latitudeIncrement = 0.00001 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN simgps.latitudeIncrement = 0.00001" );
    ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.latitudeIncrement" ))->latitudeIncrement = 0.00001;
    /* ASSIGN simgps.longitudeIncrement = 0.00002 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN simgps.longitudeIncrement = 0.00002" );
    ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.longitudeIncrement" ))->longitudeIncrement = 0.00002;
    /* ASSIGN simgps.updatePeriod = 1000000 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN simgps.updatePeriod = 1000000" );
    ((Location_simulatedGPS *)xtUML_detect_empty_handle( simgps, "simulatedGPS", "simgps.updatePeriod" ))->updatePeriod = 1000000;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      simulatedGPS  (simulatedGPS)
 * Component:  Location
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Location_simulatedGPS_container[ Location_simulatedGPS_MAX_EXTENT_SIZE ];
static Location_simulatedGPS Location_simulatedGPS_instances[ Location_simulatedGPS_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Location_simulatedGPS_extent = {
  {0}, {0}, &Location_simulatedGPS_container[ 0 ],
  (Escher_iHandle_t) &Location_simulatedGPS_instances,
  sizeof( Location_simulatedGPS ), 0, Location_simulatedGPS_MAX_EXTENT_SIZE
  };

