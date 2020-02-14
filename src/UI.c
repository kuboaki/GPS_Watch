/*----------------------------------------------------------------------------
 * File:  UI.c
 *
 * UML Component Port Messages
 * Component/Module Name:  UI
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/
/*
 Simulates the user interface and has the ability to connect an external GUI
representing the physical watch.

Uses the BridgePoint Java API to connect to an animated version of the watch
while the models are executing in Verifier.

There is also hand-written C code that implments parts of this component to 
allow generated code to connect to the exact same animated watch.
 */

#include "GPS_Watch_sys_types.h"
#include "UI.h"
#include "UI_GuiBridge_bridge.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "GPS_Watch.h"
#include "UI_classes.h"

/*
 * Interface:  UI
 * Provided Port:  UI
 * To Provider Message:  setData
 */
void
UI_UI_setData( const GPS_Watch_UIUnit_t p_unit, const r_t p_value )
{
  /* ::setData( unit:PARAM.unit, value:PARAM.value ) */
  XTUML_OAL_STMT_TRACE( 1, "::setData( unit:PARAM.unit, value:PARAM.value )" );
  UI_setData( p_unit, p_value );
}

/*
 * Interface:  UI
 * Provided Port:  UI
 * To Provider Message:  setIndicator
 */
void
UI_UI_setIndicator( const GPS_Watch_UIIndicator_t p_indicator )
{
  /* ::setIndicator( indicator:PARAM.indicator ) */
  XTUML_OAL_STMT_TRACE( 1, "::setIndicator( indicator:PARAM.indicator )" );
  UI_setIndicator( p_indicator );
}

/*
 * Interface:  UI
 * Provided Port:  UI
 * To Provider Message:  setTime
 */
void
UI_UI_setTime( const i_t p_time )
{
  /* ::setTime( time:PARAM.time ) */
  XTUML_OAL_STMT_TRACE( 1, "::setTime( time:PARAM.time )" );
  UI_setTime( p_time );
}

/*
 * Interface:  UI
 * Provided Port:  UI
 * To Provider Message:  startTest
 */
void
UI_UI_startTest()
{
  /* ::startTest(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::startTest(  )" );
  UI_startTest();
}

/*
 * Interface:  UI_Tracking
 * Required Port:  TRACK
 * To Provider Message:  lapResetPressed
 */
void
UI_TRACK_lapResetPressed()
{
  GPS_Watch_UI__TRACK_lapResetPressed();
}

/*
 * Interface:  UI_Tracking
 * Required Port:  TRACK
 * To Provider Message:  lightPressed
 */
void
UI_TRACK_lightPressed()
{
  GPS_Watch_UI__TRACK_lightPressed();
}

/*
 * Interface:  UI_Tracking
 * Required Port:  TRACK
 * To Provider Message:  modePressed
 */
void
UI_TRACK_modePressed()
{
  GPS_Watch_UI__TRACK_modePressed();
}

/*
 * Interface:  UI_Tracking
 * Required Port:  TRACK
 * To Provider Message:  newGoalSpec
 */
void
UI_TRACK_newGoalSpec( const GPS_Watch_UIGoalCriteria_t p_criteriaType, const r_t p_maximum, const r_t p_minimum, const i_t p_sequenceNumber, const r_t p_span, const GPS_Watch_UIGoalSpan_t p_spanType )
{
  GPS_Watch_UI__TRACK_newGoalSpec(  p_criteriaType, p_maximum, p_minimum, p_sequenceNumber, p_span, p_spanType );
}

/*
 * Interface:  UI_Tracking
 * Required Port:  TRACK
 * To Provider Message:  setTargetPressed
 */
void
UI_TRACK_setTargetPressed()
{
  GPS_Watch_UI__TRACK_setTargetPressed();
}

/*
 * Interface:  UI_Tracking
 * Required Port:  TRACK
 * To Provider Message:  startStopPressed
 */
void
UI_TRACK_startStopPressed()
{
  GPS_Watch_UI__TRACK_startStopPressed();
}
/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  RunTestCase
 */
void
UI_RunTestCase()
{
  /* TestCase::execute() */
  XTUML_OAL_STMT_TRACE( 1, "TestCase::execute()" );
  UI_TestCase_op_execute();
}

/*
 * Domain Function:  createGoals_1
 */
void
UI_createGoals_1()
{
  /* TRACK::newGoalSpec(criteriaType:Pace, maximum:8.0, minimum:2.0, sequenceNumber:1, span:150.0, spanType:Distance) */
  XTUML_OAL_STMT_TRACE( 1, "TRACK::newGoalSpec(criteriaType:Pace, maximum:8.0, minimum:2.0, sequenceNumber:1, span:150.0, spanType:Distance)" );
  UI_TRACK_newGoalSpec( GPS_Watch_UIGoalCriteria_Pace_e, 8.0, 2.0, 1, 150.0, GPS_Watch_UIGoalSpan_Distance_e );
  /* TRACK::newGoalSpec(criteriaType:HeartRate, maximum:80.0, minimum:60.0, sequenceNumber:2, span:10, spanType:Time) */
  XTUML_OAL_STMT_TRACE( 1, "TRACK::newGoalSpec(criteriaType:HeartRate, maximum:80.0, minimum:60.0, sequenceNumber:2, span:10, spanType:Time)" );
  UI_TRACK_newGoalSpec( GPS_Watch_UIGoalCriteria_HeartRate_e, 80.0, 60.0, 2, 10, GPS_Watch_UIGoalSpan_Time_e );
  /* TRACK::newGoalSpec(criteriaType:Pace, maximum:6.0, minimum:5.0, sequenceNumber:3, span:15, spanType:Time) */
  XTUML_OAL_STMT_TRACE( 1, "TRACK::newGoalSpec(criteriaType:Pace, maximum:6.0, minimum:5.0, sequenceNumber:3, span:15, spanType:Time)" );
  UI_TRACK_newGoalSpec( GPS_Watch_UIGoalCriteria_Pace_e, 6.0, 5.0, 3, 15, GPS_Watch_UIGoalSpan_Time_e );
  /* TRACK::newGoalSpec(criteriaType:Pace, maximum:2.0, minimum:1.0, sequenceNumber:4, span:15, spanType:Time) */
  XTUML_OAL_STMT_TRACE( 1, "TRACK::newGoalSpec(criteriaType:Pace, maximum:2.0, minimum:1.0, sequenceNumber:4, span:15, spanType:Time)" );
  UI_TRACK_newGoalSpec( GPS_Watch_UIGoalCriteria_Pace_e, 2.0, 1.0, 4, 15, GPS_Watch_UIGoalSpan_Time_e );
}

/*
 * Domain Function:  init
 */
void
UI_init()
{
  /* UI::connect() */
  XTUML_OAL_STMT_TRACE( 1, "UI::connect()" );
  UI_UI_op_connect();
}

/*
 * Domain Function:  sendLapResetPressed
 */
void
UI_sendLapResetPressed()
{
  /* TRACK::lapResetPressed() */
  XTUML_OAL_STMT_TRACE( 1, "TRACK::lapResetPressed()" );
  UI_TRACK_lapResetPressed();
}

/*
 * Domain Function:  sendLightPressed
 */
void
UI_sendLightPressed()
{
  /* TRACK::lightPressed() */
  XTUML_OAL_STMT_TRACE( 1, "TRACK::lightPressed()" );
  UI_TRACK_lightPressed();
}

/*
 * Domain Function:  sendModePressed
 */
void
UI_sendModePressed()
{
  /* TRACK::modePressed() */
  XTUML_OAL_STMT_TRACE( 1, "TRACK::modePressed()" );
  UI_TRACK_modePressed();
}

/*
 * Domain Function:  sendStartStopPressed
 */
void
UI_sendStartStopPressed()
{
  /* TRACK::startStopPressed() */
  XTUML_OAL_STMT_TRACE( 1, "TRACK::startStopPressed()" );
  UI_TRACK_startStopPressed();
}

/*
 * Domain Function:  sendTargetPressed
 */
void
UI_sendTargetPressed()
{
  /* TRACK::setTargetPressed() */
  XTUML_OAL_STMT_TRACE( 1, "TRACK::setTargetPressed()" );
  UI_TRACK_setTargetPressed();
}

/*
 * Domain Function:  setData
 */
void
UI_setData( const GPS_Watch_UIUnit_t p_unit, const r_t p_value )
{
  UI_UI * ui=0;
  /* SELECT any ui FROM INSTANCES OF UI */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ui FROM INSTANCES OF UI" );
  ui = (UI_UI *) Escher_SetGetAny( &pG_UI_UI_extent.active );
  /* IF ( not_empty ui ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty ui )" );
  if ( ( 0 != ui ) ) {
    /* IF ( ( PARAM.unit == km ) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( ( PARAM.unit == km ) )" );
    if ( ( p_unit == GPS_Watch_UIUnit_km_e ) ) {
      /* ui.setData( unit:0, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:0, value:PARAM.value )" );
      UI_UI_op_setData( ui,  0, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_meters_e ) ) {
      /* ui.setData( unit:1, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:1, value:PARAM.value )" );
      UI_UI_op_setData( ui,  1, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_minPerKm_e ) ) {
      /* ui.setData( unit:2, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:2, value:PARAM.value )" );
      UI_UI_op_setData( ui,  2, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_kmPerHour_e ) ) {
      /* ui.setData( unit:3, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:3, value:PARAM.value )" );
      UI_UI_op_setData( ui,  3, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_miles_e ) ) {
      /* ui.setData( unit:4, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:4, value:PARAM.value )" );
      UI_UI_op_setData( ui,  4, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_yards_e ) ) {
      /* ui.setData( unit:5, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:5, value:PARAM.value )" );
      UI_UI_op_setData( ui,  5, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_feet_e ) ) {
      /* ui.setData( unit:6, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:6, value:PARAM.value )" );
      UI_UI_op_setData( ui,  6, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_minPerMile_e ) ) {
      /* ui.setData( unit:7, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:7, value:PARAM.value )" );
      UI_UI_op_setData( ui,  7, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_mph_e ) ) {
      /* ui.setData( unit:8, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:8, value:PARAM.value )" );
      UI_UI_op_setData( ui,  8, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_bpm_e ) ) {
      /* ui.setData( unit:9, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:9, value:PARAM.value )" );
      UI_UI_op_setData( ui,  9, p_value );
    }
    else if ( ( p_unit == GPS_Watch_UIUnit_laps_e ) ) {
      /* ui.setData( unit:10, value:PARAM.value ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setData( unit:10, value:PARAM.value )" );
      UI_UI_op_setData( ui,  10, p_value );
    }
  }
}

/*
 * Domain Function:  setIndicator
 */
void
UI_setIndicator( const GPS_Watch_UIIndicator_t p_indicator )
{
  UI_UI * ui=0;
  /* SELECT any ui FROM INSTANCES OF UI */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ui FROM INSTANCES OF UI" );
  ui = (UI_UI *) Escher_SetGetAny( &pG_UI_UI_extent.active );
  /* IF ( not_empty ui ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty ui )" );
  if ( ( 0 != ui ) ) {
    /* IF ( ( PARAM.indicator == Blank ) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( ( PARAM.indicator == Blank ) )" );
    if ( ( p_indicator == GPS_Watch_UIIndicator_Blank_e ) ) {
      /* ui.setIndicator( value:0 ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setIndicator( value:0 )" );
      UI_UI_op_setIndicator( ui,  0 );
    }
    else if ( ( p_indicator == GPS_Watch_UIIndicator_Down_e ) ) {
      /* ui.setIndicator( value:1 ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setIndicator( value:1 )" );
      UI_UI_op_setIndicator( ui,  1 );
    }
    else if ( ( p_indicator == GPS_Watch_UIIndicator_Flat_e ) ) {
      /* ui.setIndicator( value:2 ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setIndicator( value:2 )" );
      UI_UI_op_setIndicator( ui,  2 );
    }
    else if ( ( p_indicator == GPS_Watch_UIIndicator_Up_e ) ) {
      /* ui.setIndicator( value:3 ) */
      XTUML_OAL_STMT_TRACE( 3, "ui.setIndicator( value:3 )" );
      UI_UI_op_setIndicator( ui,  3 );
    }
  }
}

/*
 * Domain Function:  setTime
 */
void
UI_setTime( const i_t p_time )
{
  UI_UI * ui=0;
  /* SELECT any ui FROM INSTANCES OF UI */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ui FROM INSTANCES OF UI" );
  ui = (UI_UI *) Escher_SetGetAny( &pG_UI_UI_extent.active );
  /* IF ( not_empty ui ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty ui )" );
  if ( ( 0 != ui ) ) {
    /* ui.setTime( time:PARAM.time ) */
    XTUML_OAL_STMT_TRACE( 2, "ui.setTime( time:PARAM.time )" );
    UI_UI_op_setTime( ui,  p_time );
  }
}

/*
 * Domain Function:  startTest
 */
void
UI_startTest()
{
  UI_TestCase * tc;
  /* CREATE OBJECT INSTANCE tc OF TestCase */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE tc OF TestCase" );
  tc = (UI_TestCase *) Escher_CreateInstance( UI_DOMAIN_ID, UI_TestCase_CLASS_NUMBER );
  /* ASSIGN tc.id = 1 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN tc.id = 1" );
  ((UI_TestCase *)xtUML_detect_empty_handle( tc, "TestCase", "tc.id" ))->id = 1;
  /* GENERATE TestCase5:initialize(iterations:2) TO tc */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE TestCase5:initialize(iterations:2) TO tc" );
  { UI_TestCaseevent5 * e = (UI_TestCaseevent5 *) Escher_NewxtUMLEvent( tc, &UI_TestCaseevent5c );
    e->p_iterations = 2;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }
}
/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const UI_class_info[ UI_MAX_CLASS_NUMBERS ] = {
  &pG_UI_UI_extent,
  &pG_UI_TestCase_extent,
  &pG_UI_UIConstants_extent
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t UI_EventDispatcher[ UI_STATE_MODELS ] = {
  UI_class_dispatchers
};

void UI_execute_initialization()
{
  /*
   * Initialization Function:  init
   * Component:  UI
   */
  UI_init();

}
