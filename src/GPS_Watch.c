/*----------------------------------------------------------------------------
 * File:  GPS_Watch.c
 *
 * UML Component Port Messages
 * Component/Module Name:  GPS_Watch
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "GPS_Watch.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "UI.h"
#include "Location.h"
#include "Tracking.h"
#include "HeartRateMonitor.h"

/*
 * Interface:  UI
 * Required Port:  UI
 * To Provider Message:  setData
 */
void
GPS_Watch_UI_setData( const GPS_Watch_UIUnit_t p_unit, const r_t p_value )
{
  UI_UI_setData(  p_unit, p_value );
}

/*
 * Interface:  UI
 * Required Port:  UI
 * To Provider Message:  setIndicator
 */
void
GPS_Watch_UI_setIndicator( const GPS_Watch_UIIndicator_t p_indicator )
{
  UI_UI_setIndicator(  p_indicator );
}

/*
 * Interface:  UI
 * Required Port:  UI
 * To Provider Message:  setTime
 */
void
GPS_Watch_UI_setTime( const i_t p_time )
{
  UI_UI_setTime(  p_time );
}

/*
 * Interface:  UI
 * Required Port:  UI
 * To Provider Message:  startTest
 */
void
GPS_Watch_UI_startTest()
{
  UI_UI_startTest();
}

/*
 * Interface:  LocationProvider
 * Required Port:  Location
 * To Provider Message:  getDistance
 */
void
GPS_Watch_Location_getDistance( const r_t p_fromLat, const r_t p_fromLong, r_t * p_result, const r_t p_toLat, const r_t p_toLong )
{
  Location_LOC_getDistance(  p_fromLat, p_fromLong, p_result, p_toLat, p_toLong );
}

/*
 * Interface:  LocationProvider
 * Required Port:  Location
 * To Provider Message:  getLocation
 */
void
GPS_Watch_Location_getLocation( r_t * p_latitude, r_t * p_longitude )
{
  Location_LOC_getLocation(  p_latitude, p_longitude );
}

/*
 * Interface:  LocationProvider
 * Required Port:  Location
 * To Provider Message:  registerListener
 */
void
GPS_Watch_Location_registerListener()
{
  Location_LOC_registerListener();
}

/*
 * Interface:  LocationProvider
 * Required Port:  Location
 * To Provider Message:  unregisterListener
 */
void
GPS_Watch_Location_unregisterListener()
{
  Location_LOC_unregisterListener();
}

/*
 * Interface:  Tracking
 * Required Port:  Tracking
 * To Provider Message:  heartRateChanged
 */
void
GPS_Watch_Tracking_heartRateChanged( const i_t p_heartRate )
{
  Tracking_Tracking_heartRateChanged(  p_heartRate );
}

/*
 * Interface:  Tracking
 * Required Port:  Tracking
 * To Provider Message:  lapResetPressed
 */
void
GPS_Watch_Tracking_lapResetPressed()
{
  Tracking_Tracking_lapResetPressed();
}

/*
 * Interface:  Tracking
 * Required Port:  Tracking
 * To Provider Message:  lightPressed
 */
void
GPS_Watch_Tracking_lightPressed()
{
  Tracking_Tracking_lightPressed();
}

/*
 * Interface:  Tracking
 * Required Port:  Tracking
 * To Provider Message:  modePressed
 */
void
GPS_Watch_Tracking_modePressed()
{
  Tracking_Tracking_modePressed();
}

/*
 * Interface:  Tracking
 * Required Port:  Tracking
 * To Provider Message:  newGoalSpec
 */
void
GPS_Watch_Tracking_newGoalSpec( const GPS_Watch_GoalCriteria_t p_criteriaType, const r_t p_maximum, const r_t p_minimum, const i_t p_sequenceNumber, const r_t p_span, const GPS_Watch_GoalSpan_t p_spanType )
{
  Tracking_Tracking_newGoalSpec(  p_criteriaType, p_maximum, p_minimum, p_sequenceNumber, p_span, p_spanType );
}

/*
 * Interface:  Tracking
 * Required Port:  Tracking
 * To Provider Message:  setTargetPressed
 */
void
GPS_Watch_Tracking_setTargetPressed()
{
  Tracking_Tracking_setTargetPressed();
}

/*
 * Interface:  Tracking
 * Required Port:  Tracking
 * To Provider Message:  startStopPressed
 */
void
GPS_Watch_Tracking_startStopPressed()
{
  Tracking_Tracking_startStopPressed();
}

/*
 * Interface:  HeartRateProvider
 * Required Port:  HeartRateMonitor
 * To Provider Message:  registerListener
 */
void
GPS_Watch_HeartRateMonitor_registerListener()
{
  HeartRateMonitor_HeartRateMonitor_registerListener();
}

/*
 * Interface:  HeartRateProvider
 * Required Port:  HeartRateMonitor
 * To Provider Message:  unregisterListener
 */
void
GPS_Watch_HeartRateMonitor_unregisterListener()
{
  HeartRateMonitor_HeartRateMonitor_unregisterListener();
}

/*
 * Interface:  UI_Tracking
 * Provided Port:  UI__TRACK
 * To Provider Message:  lapResetPressed
 */
void
GPS_Watch_UI__TRACK_lapResetPressed()
{
  /* Tracking::lapResetPressed() */
  XTUML_OAL_STMT_TRACE( 1, "Tracking::lapResetPressed()" );
  GPS_Watch_Tracking_lapResetPressed();
}

/*
 * Interface:  UI_Tracking
 * Provided Port:  UI__TRACK
 * To Provider Message:  lightPressed
 */
void
GPS_Watch_UI__TRACK_lightPressed()
{
  /* Tracking::lightPressed() */
  XTUML_OAL_STMT_TRACE( 1, "Tracking::lightPressed()" );
  GPS_Watch_Tracking_lightPressed();
}

/*
 * Interface:  UI_Tracking
 * Provided Port:  UI__TRACK
 * To Provider Message:  modePressed
 */
void
GPS_Watch_UI__TRACK_modePressed()
{
  /* Tracking::modePressed() */
  XTUML_OAL_STMT_TRACE( 1, "Tracking::modePressed()" );
  GPS_Watch_Tracking_modePressed();
}

/*
 * Interface:  UI_Tracking
 * Provided Port:  UI__TRACK
 * To Provider Message:  newGoalSpec
 */
void
GPS_Watch_UI__TRACK_newGoalSpec( const GPS_Watch_UIGoalCriteria_t p_criteriaType, const r_t p_maximum, const r_t p_minimum, const i_t p_sequenceNumber, const r_t p_span, const GPS_Watch_UIGoalSpan_t p_spanType )
{
  /* IF ( ( PARAM.criteriaType == HeartRate ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( PARAM.criteriaType == HeartRate ) )" );
  if ( ( p_criteriaType == GPS_Watch_UIGoalCriteria_HeartRate_e ) ) {
    /* IF ( ( PARAM.spanType == Distance ) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( ( PARAM.spanType == Distance ) )" );
    if ( ( p_spanType == GPS_Watch_UIGoalSpan_Distance_e ) ) {
      /* Tracking::newGoalSpec(criteriaType:HeartRate, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:Distance) */
      XTUML_OAL_STMT_TRACE( 3, "Tracking::newGoalSpec(criteriaType:HeartRate, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:Distance)" );
      GPS_Watch_Tracking_newGoalSpec( GPS_Watch_GoalCriteria_HeartRate_e, p_maximum, p_minimum, p_sequenceNumber, p_span, GPS_Watch_GoalSpan_Distance_e );
    }
    else if ( ( p_spanType == GPS_Watch_UIGoalSpan_Time_e ) ) {
      /* Tracking::newGoalSpec(criteriaType:HeartRate, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:Time) */
      XTUML_OAL_STMT_TRACE( 3, "Tracking::newGoalSpec(criteriaType:HeartRate, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:Time)" );
      GPS_Watch_Tracking_newGoalSpec( GPS_Watch_GoalCriteria_HeartRate_e, p_maximum, p_minimum, p_sequenceNumber, p_span, GPS_Watch_GoalSpan_Time_e );
    }
  }
  else if ( ( p_criteriaType == GPS_Watch_UIGoalCriteria_Pace_e ) ) {
    /* IF ( ( PARAM.spanType == Distance ) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( ( PARAM.spanType == Distance ) )" );
    if ( ( p_spanType == GPS_Watch_UIGoalSpan_Distance_e ) ) {
      /* Tracking::newGoalSpec(criteriaType:Pace, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:Distance) */
      XTUML_OAL_STMT_TRACE( 3, "Tracking::newGoalSpec(criteriaType:Pace, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:Distance)" );
      GPS_Watch_Tracking_newGoalSpec( GPS_Watch_GoalCriteria_Pace_e, p_maximum, p_minimum, p_sequenceNumber, p_span, GPS_Watch_GoalSpan_Distance_e );
    }
    else if ( ( p_spanType == GPS_Watch_UIGoalSpan_Time_e ) ) {
      /* Tracking::newGoalSpec(criteriaType:Pace, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:Time) */
      XTUML_OAL_STMT_TRACE( 3, "Tracking::newGoalSpec(criteriaType:Pace, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:Time)" );
      GPS_Watch_Tracking_newGoalSpec( GPS_Watch_GoalCriteria_Pace_e, p_maximum, p_minimum, p_sequenceNumber, p_span, GPS_Watch_GoalSpan_Time_e );
    }
  }
}

/*
 * Interface:  UI_Tracking
 * Provided Port:  UI__TRACK
 * To Provider Message:  setTargetPressed
 */
void
GPS_Watch_UI__TRACK_setTargetPressed()
{
  /* Tracking::setTargetPressed() */
  XTUML_OAL_STMT_TRACE( 1, "Tracking::setTargetPressed()" );
  GPS_Watch_Tracking_setTargetPressed();
}

/*
 * Interface:  UI_Tracking
 * Provided Port:  UI__TRACK
 * To Provider Message:  startStopPressed
 */
void
GPS_Watch_UI__TRACK_startStopPressed()
{
  /* Tracking::startStopPressed() */
  XTUML_OAL_STMT_TRACE( 1, "Tracking::startStopPressed()" );
  GPS_Watch_Tracking_startStopPressed();
}

/*
 * Interface:  HRChange
 * Provided Port:  HeartRateMonitor__HRChange
 * To Provider Message:  heartRateChanged
 */
void
GPS_Watch_HeartRateMonitor__HRChange_heartRateChanged( const i_t p_heartRate )
{
  /* Tracking::heartRateChanged(heartRate:PARAM.heartRate) */
  XTUML_OAL_STMT_TRACE( 1, "Tracking::heartRateChanged(heartRate:PARAM.heartRate)" );
  GPS_Watch_Tracking_heartRateChanged( p_heartRate );
}

/*
 * Interface:  Tracking_UI
 * Provided Port:  Tracking__UI
 * To Provider Message:  setData
 */
void
GPS_Watch_Tracking__UI_setData( const GPS_Watch_Unit_t p_unit, const r_t p_value )
{
  /* IF ( ( PARAM.unit == km ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( PARAM.unit == km ) )" );
  if ( ( p_unit == GPS_Watch_Unit_km_e ) ) {
    /* UI::setData(unit:km, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:km, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_km_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_meters_e ) ) {
    /* UI::setData(unit:meters, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:meters, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_meters_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_minPerKm_e ) ) {
    /* UI::setData(unit:minPerKm, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:minPerKm, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_minPerKm_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_kmPerHour_e ) ) {
    /* UI::setData(unit:kmPerHour, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:kmPerHour, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_kmPerHour_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_miles_e ) ) {
    /* UI::setData(unit:miles, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:miles, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_miles_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_yards_e ) ) {
    /* UI::setData(unit:yards, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:yards, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_yards_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_feet_e ) ) {
    /* UI::setData(unit:feet, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:feet, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_feet_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_minPerMile_e ) ) {
    /* UI::setData(unit:minPerMile, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:minPerMile, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_minPerMile_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_mph_e ) ) {
    /* UI::setData(unit:mph, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:mph, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_mph_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_bpm_e ) ) {
    /* UI::setData(unit:bpm, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:bpm, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_bpm_e, p_value );
  }
  else if ( ( p_unit == GPS_Watch_Unit_laps_e ) ) {
    /* UI::setData(unit:laps, value:PARAM.value) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setData(unit:laps, value:PARAM.value)" );
    GPS_Watch_UI_setData( GPS_Watch_UIUnit_laps_e, p_value );
  }
}

/*
 * Interface:  Tracking_UI
 * Provided Port:  Tracking__UI
 * To Provider Message:  setIndicator
 */
void
GPS_Watch_Tracking__UI_setIndicator( const GPS_Watch_Indicator_t p_indicator )
{
  /* IF ( ( PARAM.indicator == Blank ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( PARAM.indicator == Blank ) )" );
  if ( ( p_indicator == GPS_Watch_Indicator_Blank_e ) ) {
    /* UI::setIndicator(indicator:Blank) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setIndicator(indicator:Blank)" );
    GPS_Watch_UI_setIndicator( GPS_Watch_UIIndicator_Blank_e );
  }
  else if ( ( p_indicator == GPS_Watch_Indicator_Down_e ) ) {
    /* UI::setIndicator(indicator:Down) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setIndicator(indicator:Down)" );
    GPS_Watch_UI_setIndicator( GPS_Watch_UIIndicator_Down_e );
  }
  else if ( ( p_indicator == GPS_Watch_Indicator_Flat_e ) ) {
    /* UI::setIndicator(indicator:Flat) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setIndicator(indicator:Flat)" );
    GPS_Watch_UI_setIndicator( GPS_Watch_UIIndicator_Flat_e );
  }
  else if ( ( p_indicator == GPS_Watch_Indicator_Up_e ) ) {
    /* UI::setIndicator(indicator:Up) */
    XTUML_OAL_STMT_TRACE( 2, "UI::setIndicator(indicator:Up)" );
    GPS_Watch_UI_setIndicator( GPS_Watch_UIIndicator_Up_e );
  }
}

/*
 * Interface:  Tracking_UI
 * Provided Port:  Tracking__UI
 * To Provider Message:  setTime
 */
void
GPS_Watch_Tracking__UI_setTime( const i_t p_time )
{
  /* UI::setTime(time:PARAM.time) */
  XTUML_OAL_STMT_TRACE( 1, "UI::setTime(time:PARAM.time)" );
  GPS_Watch_UI_setTime( p_time );
}

/*
 * Interface:  Tracking_Location
 * Provided Port:  Tracking__LOC
 * To Provider Message:  getDistance
 */
void
GPS_Watch_Tracking__LOC_getDistance( const r_t p_fromLat, const r_t p_fromLong, r_t * p_result, const r_t p_toLat, const r_t p_toLong )
{
  r_t distance;
  /* ASSIGN distance = PARAM.result */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN distance = PARAM.result" );
  distance = (*p_result);
  /* Location::getDistance(fromLat:PARAM.fromLat, fromLong:PARAM.fromLong, result:distance, toLat:PARAM.toLat, toLong:PARAM.toLong) */
  XTUML_OAL_STMT_TRACE( 1, "Location::getDistance(fromLat:PARAM.fromLat, fromLong:PARAM.fromLong, result:distance, toLat:PARAM.toLat, toLong:PARAM.toLong)" );
  GPS_Watch_Location_getDistance( p_fromLat, p_fromLong, &(distance), p_toLat, p_toLong );
  /* ASSIGN PARAM.result = distance */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN PARAM.result = distance" );
  (*p_result) = distance;
}

/*
 * Interface:  Tracking_Location
 * Provided Port:  Tracking__LOC
 * To Provider Message:  getLocation
 */
void
GPS_Watch_Tracking__LOC_getLocation( r_t * p_latitude, r_t * p_longitude )
{
  r_t lat;r_t longi;
  /* ASSIGN lat = PARAM.latitude */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN lat = PARAM.latitude" );
  lat = (*p_latitude);
  /* ASSIGN longi = PARAM.longitude */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN longi = PARAM.longitude" );
  longi = (*p_longitude);
  /* Location::getLocation(latitude:lat, longitude:longi) */
  XTUML_OAL_STMT_TRACE( 1, "Location::getLocation(latitude:lat, longitude:longi)" );
  GPS_Watch_Location_getLocation( &(lat), &(longi) );
  /* ASSIGN PARAM.latitude = lat */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN PARAM.latitude = lat" );
  (*p_latitude) = lat;
  /* ASSIGN PARAM.longitude = longi */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN PARAM.longitude = longi" );
  (*p_longitude) = longi;
}

/*
 * Interface:  Tracking_Location
 * Provided Port:  Tracking__LOC
 * To Provider Message:  registerListener
 */
void
GPS_Watch_Tracking__LOC_registerListener()
{
  /* Location::registerListener() */
  XTUML_OAL_STMT_TRACE( 1, "Location::registerListener()" );
  GPS_Watch_Location_registerListener();
}

/*
 * Interface:  Tracking_Location
 * Provided Port:  Tracking__LOC
 * To Provider Message:  unregisterListener
 */
void
GPS_Watch_Tracking__LOC_unregisterListener()
{
  /* Location::unregisterListener() */
  XTUML_OAL_STMT_TRACE( 1, "Location::unregisterListener()" );
  GPS_Watch_Location_unregisterListener();
}

/*
 * Interface:  Tracking_HeartRateMonitor
 * Provided Port:  Tracking__HR
 * To Provider Message:  registerListener
 */
void
GPS_Watch_Tracking__HR_registerListener()
{
  /* HeartRateMonitor::registerListener() */
  XTUML_OAL_STMT_TRACE( 1, "HeartRateMonitor::registerListener()" );
  GPS_Watch_HeartRateMonitor_registerListener();
}

/*
 * Interface:  Tracking_HeartRateMonitor
 * Provided Port:  Tracking__HR
 * To Provider Message:  unregisterListener
 */
void
GPS_Watch_Tracking__HR_unregisterListener()
{
  /* HeartRateMonitor::unregisterListener() */
  XTUML_OAL_STMT_TRACE( 1, "HeartRateMonitor::unregisterListener()" );
  GPS_Watch_HeartRateMonitor_unregisterListener();
}
