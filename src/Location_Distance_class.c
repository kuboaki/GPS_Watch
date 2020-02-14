/*----------------------------------------------------------------------------
 * File:  Location_Distance_class.c
 *
 * Class:       Distance  (Distance)
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
Location_Distance_op_initialize()
{
  Location_Distance * distance=0;
  /* SELECT any distance FROM INSTANCES OF Distance */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any distance FROM INSTANCES OF Distance" );
  distance = (Location_Distance *) Escher_SetGetAny( &pG_Location_Distance_extent.active );
  /* IF ( empty distance ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty distance )" );
  if ( ( 0 == distance ) ) {
    /* CREATE OBJECT INSTANCE distance OF Distance */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE distance OF Distance" );
    distance = (Location_Distance *) Escher_CreateInstance( Location_DOMAIN_ID, Location_Distance_CLASS_NUMBER );
    /* ASSIGN distance.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN distance.id = 1" );
    ((Location_Distance *)xtUML_detect_empty_handle( distance, "Distance", "distance.id" ))->id = 1;
    /* ASSIGN distance.kmPerDegree = 111.32 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN distance.kmPerDegree = 111.32" );
    ((Location_Distance *)xtUML_detect_empty_handle( distance, "Distance", "distance.kmPerDegree" ))->kmPerDegree = 111.32;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      Distance  (Distance)
 * Component:  Location
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Location_Distance_container[ Location_Distance_MAX_EXTENT_SIZE ];
static Location_Distance Location_Distance_instances[ Location_Distance_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Location_Distance_extent = {
  {0}, {0}, &Location_Distance_container[ 0 ],
  (Escher_iHandle_t) &Location_Distance_instances,
  sizeof( Location_Distance ), 0, Location_Distance_MAX_EXTENT_SIZE
  };

