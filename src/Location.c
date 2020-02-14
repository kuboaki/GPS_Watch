/*----------------------------------------------------------------------------
 * File:  Location.c
 *
 * UML Component Port Messages
 * Component/Module Name:  Location
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/
/*
 Simulates a the GPS hardware/firmware. This component is only behavioral and included for testing purposes.
 */

#include "GPS_Watch_sys_types.h"
#include "Location.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "GPS_Watch.h"
#include "Location_classes.h"

/*
 * Interface:  LocationProvider
 * Provided Port:  LOC
 * To Provider Message:  getDistance
 */
void
Location_LOC_getDistance( const r_t p_fromLat, const r_t p_fromLong, r_t * p_result, const r_t p_toLat, const r_t p_toLong )
{
  r_t distance;
  /* ASSIGN distance = PARAM.result */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN distance = PARAM.result" );
  distance = (*p_result);
  /* ::getDistance( fromLat:PARAM.fromLat, fromLong:PARAM.fromLong, result:distance, toLat:PARAM.toLat, toLong:PARAM.toLong ) */
  XTUML_OAL_STMT_TRACE( 1, "::getDistance( fromLat:PARAM.fromLat, fromLong:PARAM.fromLong, result:distance, toLat:PARAM.toLat, toLong:PARAM.toLong )" );
  Location_getDistance( p_fromLat, p_fromLong, &(distance), p_toLat, p_toLong );
  /* ASSIGN PARAM.result = distance */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN PARAM.result = distance" );
  (*p_result) = distance;
}

/*
 * Interface:  LocationProvider
 * Provided Port:  LOC
 * To Provider Message:  getLocation
 */
void
Location_LOC_getLocation( r_t * p_latitude, r_t * p_longitude )
{
  r_t lat;r_t longi;
  /* ASSIGN lat = PARAM.latitude */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN lat = PARAM.latitude" );
  lat = (*p_latitude);
  /* ASSIGN longi = PARAM.longitude */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN longi = PARAM.longitude" );
  longi = (*p_longitude);
  /* ::getLocation( latitude:lat, longitude:longi ) */
  XTUML_OAL_STMT_TRACE( 1, "::getLocation( latitude:lat, longitude:longi )" );
  Location_getLocation( &(lat), &(longi) );
  /* ASSIGN PARAM.latitude = lat */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN PARAM.latitude = lat" );
  (*p_latitude) = lat;
  /* ASSIGN PARAM.longitude = longi */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN PARAM.longitude = longi" );
  (*p_longitude) = longi;
}

/*
 * Interface:  LocationProvider
 * Provided Port:  LOC
 * To Provider Message:  registerListener
 */
void
Location_LOC_registerListener()
{
  /* ::registerListener(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::registerListener(  )" );
  Location_registerListener();
}

/*
 * Interface:  LocationProvider
 * Provided Port:  LOC
 * To Provider Message:  unregisterListener
 */
void
Location_LOC_unregisterListener()
{
  /* ::unregisterListener(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::unregisterListener(  )" );
  Location_unregisterListener();
}
/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  getDistance
 */
void
Location_getDistance( const r_t p_fromLat, const r_t p_fromLong, r_t * p_result, const r_t p_toLat, const r_t p_toLong )
{
  r_t deltaLat;r_t deltaLong;r_t sumSquares;r_t sqrtSum;r_t result;Location_Distance * distance=0;
  /* Distance::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "Distance::initialize()" );
  Location_Distance_op_initialize();
  /* SELECT any distance FROM INSTANCES OF Distance */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any distance FROM INSTANCES OF Distance" );
  distance = (Location_Distance *) Escher_SetGetAny( &pG_Location_Distance_extent.active );
  /* ASSIGN deltaLat = ( PARAM.toLat - PARAM.fromLat ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN deltaLat = ( PARAM.toLat - PARAM.fromLat )" );
  deltaLat = ( p_toLat - p_fromLat );
  /* ASSIGN deltaLong = ( PARAM.toLong - PARAM.fromLong ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN deltaLong = ( PARAM.toLong - PARAM.fromLong )" );
  deltaLong = ( p_toLong - p_fromLong );
  /* ASSIGN sumSquares = ( ( deltaLat * deltaLat ) + ( deltaLong * deltaLong ) ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN sumSquares = ( ( deltaLat * deltaLat ) + ( deltaLong * deltaLong ) )" );
  sumSquares = ( ( deltaLat * deltaLat ) + ( deltaLong * deltaLong ) );
  /* ASSIGN sqrtSum = ::sqrt(x:sumSquares) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN sqrtSum = ::sqrt(x:sumSquares)" );
  sqrtSum = Location_sqrt( sumSquares );
  /* ASSIGN result = ( ( sqrtSum * distance.kmPerDegree ) * 1000 ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN result = ( ( sqrtSum * distance.kmPerDegree ) * 1000 )" );
  result = ( ( sqrtSum * ((Location_Distance *)xtUML_detect_empty_handle( distance, "Distance", "distance.kmPerDegree" ))->kmPerDegree ) * 1000 );
  /* ASSIGN PARAM.result = result */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN PARAM.result = result" );
  (*p_result) = result;
}

/*
 * Domain Function:  getLocation
 */
void
Location_getLocation( r_t * p_latitude, r_t * p_longitude )
{
  Location_GPS * gps=0;
  /* GPS::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "GPS::initialize()" );
  Location_GPS_op_initialize();
  /* SELECT any gps FROM INSTANCES OF GPS */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any gps FROM INSTANCES OF GPS" );
  gps = (Location_GPS *) Escher_SetGetAny( &pG_Location_GPS_extent.active );
  /* ASSIGN PARAM.latitude = gps.currentLatitude */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN PARAM.latitude = gps.currentLatitude" );
  (*p_latitude) = ((Location_GPS *)xtUML_detect_empty_handle( gps, "GPS", "gps.currentLatitude" ))->currentLatitude;
  /* ASSIGN PARAM.longitude = gps.currentLongitude */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN PARAM.longitude = gps.currentLongitude" );
  (*p_longitude) = ((Location_GPS *)xtUML_detect_empty_handle( gps, "GPS", "gps.currentLongitude" ))->currentLongitude;
}

/*
 * Domain Function:  registerListener
 */
void
Location_registerListener()
{
  Location_GPS * gps=0;
  /* GPS::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "GPS::initialize()" );
  Location_GPS_op_initialize();
  /* SELECT any gps FROM INSTANCES OF GPS */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any gps FROM INSTANCES OF GPS" );
  gps = (Location_GPS *) Escher_SetGetAny( &pG_Location_GPS_extent.active );
  /* GENERATE GPS10:registerListener() TO gps */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE GPS10:registerListener() TO gps" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( gps, &Location_GPSevent10c );
    Escher_SendEvent( e );
  }
}

/*
 * Domain Function:  sqrt
 */
r_t
Location_sqrt( const r_t p_x )
{
  r_t result;r_t inputValue;
  /* ASSIGN result = 0.0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN result = 0.0" );
  result = 0.0;
  /* ASSIGN inputValue = PARAM.x */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN inputValue = PARAM.x" );
  inputValue = p_x;
  /* IF ( ( inputValue < 0 ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( inputValue < 0 ) )" );
  if ( ( inputValue < 0 ) ) {
    /* ASSIGN inputValue = - PARAM.x */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN inputValue = - PARAM.x" );
    inputValue = -p_x;
  }
  /* IF ( ( PARAM.x > 0 ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( PARAM.x > 0 ) )" );
  if ( ( p_x > 0 ) ) {
    r_t guess;i_t MAX_ITERATIONS;i_t i;r_t prev_value;
    /* ASSIGN guess = PARAM.x */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN guess = PARAM.x" );
    guess = p_x;
    /* ASSIGN MAX_ITERATIONS = 24 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN MAX_ITERATIONS = 24" );
    MAX_ITERATIONS = 24;
    /* ASSIGN i = 0 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN i = 0" );
    i = 0;
    /* ASSIGN prev_value = - 1.0 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN prev_value = - 1.0" );
    prev_value = -1.0;
    /* WHILE ( ( ( i < MAX_ITERATIONS ) and ( prev_value != guess ) ) ) */
    XTUML_OAL_STMT_TRACE( 2, "WHILE ( ( ( i < MAX_ITERATIONS ) and ( prev_value != guess ) ) )" );
    while ( ( ( i < MAX_ITERATIONS ) && ( prev_value != guess ) ) ) {
      /* ASSIGN prev_value = guess */
      XTUML_OAL_STMT_TRACE( 3, "ASSIGN prev_value = guess" );
      prev_value = guess;
      /* ASSIGN guess = ( guess - ( ( ( guess * guess ) - inputValue ) / ( 2 * guess ) ) ) */
      XTUML_OAL_STMT_TRACE( 3, "ASSIGN guess = ( guess - ( ( ( guess * guess ) - inputValue ) / ( 2 * guess ) ) )" );
      guess = ( guess - ( ( ( guess * guess ) - inputValue ) / ( 2 * guess ) ) );
      /* ASSIGN i = ( i + 1 ) */
      XTUML_OAL_STMT_TRACE( 3, "ASSIGN i = ( i + 1 )" );
      i = ( i + 1 );
    }
    /* ASSIGN result = guess */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN result = guess" );
    result = guess;
  }
  /* RETURN result */
  XTUML_OAL_STMT_TRACE( 1, "RETURN result" );
  {r_t xtumlOALrv = result;
  return xtumlOALrv;}
}

/*
 * Domain Function:  unregisterListener
 */
void
Location_unregisterListener()
{
  Location_GPS * gps=0;
  /* GPS::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "GPS::initialize()" );
  Location_GPS_op_initialize();
  /* SELECT any gps FROM INSTANCES OF GPS */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any gps FROM INSTANCES OF GPS" );
  gps = (Location_GPS *) Escher_SetGetAny( &pG_Location_GPS_extent.active );
  /* GENERATE GPS11:unregisterListener() TO gps */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE GPS11:unregisterListener() TO gps" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( gps, &Location_GPSevent11c );
    Escher_SendEvent( e );
  }
}
/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const Location_class_info[ Location_MAX_CLASS_NUMBERS ] = {
  &pG_Location_GPS_extent,
  &pG_Location_simulatedGPS_extent,
  &pG_Location_Distance_extent
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t Location_EventDispatcher[ Location_STATE_MODELS ] = {
  Location_class_dispatchers
};

void Location_execute_initialization()
{
}
