/*----------------------------------------------------------------------------
 * File:  Tracking.c
 *
 * UML Component Port Messages
 * Component/Module Name:  Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/
/*
 The Tracking component encapsulates the entire application software. This is the 
only component in the system from which code will be generated for the final 
product.
 */

#include "GPS_Watch_sys_types.h"
#include "Tracking.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "GPS_Watch.h"
#include "Tracking_classes.h"

/*
 * Interface:  Tracking
 * Provided Port:  Tracking
 * To Provider Message:  heartRateChanged
 */
void
Tracking_Tracking_heartRateChanged( const i_t p_heartRate )
{
  /* ::heartRateChanged( heartRate:PARAM.heartRate ) */
  XTUML_OAL_STMT_TRACE( 1, "::heartRateChanged( heartRate:PARAM.heartRate )" );
  Tracking_heartRateChanged( p_heartRate );
}

/*
 * Interface:  Tracking
 * Provided Port:  Tracking
 * To Provider Message:  lapResetPressed
 */
void
Tracking_Tracking_lapResetPressed()
{
  /* ::lapResetPressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::lapResetPressed(  )" );
  Tracking_lapResetPressed();
}

/*
 * Interface:  Tracking
 * Provided Port:  Tracking
 * To Provider Message:  lightPressed
 */
void
Tracking_Tracking_lightPressed()
{
  /* ::lightPressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::lightPressed(  )" );
  Tracking_lightPressed();
}

/*
 * Interface:  Tracking
 * Provided Port:  Tracking
 * To Provider Message:  modePressed
 */
void
Tracking_Tracking_modePressed()
{
  /* ::modePressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::modePressed(  )" );
  Tracking_modePressed();
}

/*
 * Interface:  Tracking
 * Provided Port:  Tracking
 * To Provider Message:  newGoalSpec
 */
void
Tracking_Tracking_newGoalSpec( const GPS_Watch_GoalCriteria_t p_criteriaType, const r_t p_maximum, const r_t p_minimum, const i_t p_sequenceNumber, const r_t p_span, const GPS_Watch_GoalSpan_t p_spanType )
{
  /* ::newGoalSpec( criteriaType:PARAM.criteriaType, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:PARAM.spanType ) */
  XTUML_OAL_STMT_TRACE( 1, "::newGoalSpec( criteriaType:PARAM.criteriaType, maximum:PARAM.maximum, minimum:PARAM.minimum, sequenceNumber:PARAM.sequenceNumber, span:PARAM.span, spanType:PARAM.spanType )" );
  Tracking_newGoalSpec( p_criteriaType, p_maximum, p_minimum, p_sequenceNumber, p_span, p_spanType );
}

/*
 * Interface:  Tracking
 * Provided Port:  Tracking
 * To Provider Message:  setTargetPressed
 */
void
Tracking_Tracking_setTargetPressed()
{
  /* ::setTargetPressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::setTargetPressed(  )" );
  Tracking_setTargetPressed();
}

/*
 * Interface:  Tracking
 * Provided Port:  Tracking
 * To Provider Message:  startStopPressed
 */
void
Tracking_Tracking_startStopPressed()
{
  /* ::startStopPressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::startStopPressed(  )" );
  Tracking_startStopPressed();
}

/*
 * Interface:  Tracking_HeartRateMonitor
 * Required Port:  HR
 * To Provider Message:  registerListener
 */
void
Tracking_HR_registerListener()
{
  GPS_Watch_Tracking__HR_registerListener();
}

/*
 * Interface:  Tracking_HeartRateMonitor
 * Required Port:  HR
 * To Provider Message:  unregisterListener
 */
void
Tracking_HR_unregisterListener()
{
  GPS_Watch_Tracking__HR_unregisterListener();
}

/*
 * Interface:  Tracking_Location
 * Required Port:  LOC
 * To Provider Message:  getDistance
 */
void
Tracking_LOC_getDistance( const r_t p_fromLat, const r_t p_fromLong, r_t * p_result, const r_t p_toLat, const r_t p_toLong )
{
  GPS_Watch_Tracking__LOC_getDistance(  p_fromLat, p_fromLong, p_result, p_toLat, p_toLong );
}

/*
 * Interface:  Tracking_Location
 * Required Port:  LOC
 * To Provider Message:  getLocation
 */
void
Tracking_LOC_getLocation( r_t * p_latitude, r_t * p_longitude )
{
  GPS_Watch_Tracking__LOC_getLocation(  p_latitude, p_longitude );
}

/*
 * Interface:  Tracking_Location
 * Required Port:  LOC
 * To Provider Message:  registerListener
 */
void
Tracking_LOC_registerListener()
{
  GPS_Watch_Tracking__LOC_registerListener();
}

/*
 * Interface:  Tracking_Location
 * Required Port:  LOC
 * To Provider Message:  unregisterListener
 */
void
Tracking_LOC_unregisterListener()
{
  GPS_Watch_Tracking__LOC_unregisterListener();
}

/*
 * Interface:  Tracking_UI
 * Required Port:  UI
 * To Provider Message:  setData
 */
void
Tracking_UI_setData( const GPS_Watch_Unit_t p_unit, const r_t p_value )
{
  GPS_Watch_Tracking__UI_setData(  p_unit, p_value );
}

/*
 * Interface:  Tracking_UI
 * Required Port:  UI
 * To Provider Message:  setIndicator
 */
void
Tracking_UI_setIndicator( const GPS_Watch_Indicator_t p_indicator )
{
  GPS_Watch_Tracking__UI_setIndicator(  p_indicator );
}

/*
 * Interface:  Tracking_UI
 * Required Port:  UI
 * To Provider Message:  setTime
 */
void
Tracking_UI_setTime( const i_t p_time )
{
  GPS_Watch_Tracking__UI_setTime(  p_time );
}
/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  GoalTest_1
 */
void
Tracking_GoalTest_1()
{
  /* ::Initialize(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::Initialize(  )" );
  Tracking_Initialize();
  /* ::newGoalSpec( criteriaType:Pace, maximum:8.0, minimum:2.0, sequenceNumber:1, span:150.0, spanType:Distance ) */
  XTUML_OAL_STMT_TRACE( 1, "::newGoalSpec( criteriaType:Pace, maximum:8.0, minimum:2.0, sequenceNumber:1, span:150.0, spanType:Distance )" );
  Tracking_newGoalSpec( GPS_Watch_GoalCriteria_Pace_e, 8.0, 2.0, 1, 150.0, GPS_Watch_GoalSpan_Distance_e );
  /* ::newGoalSpec( criteriaType:HeartRate, maximum:80.0, minimum:60.0, sequenceNumber:2, span:10, spanType:Time ) */
  XTUML_OAL_STMT_TRACE( 1, "::newGoalSpec( criteriaType:HeartRate, maximum:80.0, minimum:60.0, sequenceNumber:2, span:10, spanType:Time )" );
  Tracking_newGoalSpec( GPS_Watch_GoalCriteria_HeartRate_e, 80.0, 60.0, 2, 10, GPS_Watch_GoalSpan_Time_e );
  /* ::newGoalSpec( criteriaType:Pace, maximum:6.0, minimum:5.0, sequenceNumber:3, span:15, spanType:Time ) */
  XTUML_OAL_STMT_TRACE( 1, "::newGoalSpec( criteriaType:Pace, maximum:6.0, minimum:5.0, sequenceNumber:3, span:15, spanType:Time )" );
  Tracking_newGoalSpec( GPS_Watch_GoalCriteria_Pace_e, 6.0, 5.0, 3, 15, GPS_Watch_GoalSpan_Time_e );
  /* ::newGoalSpec( criteriaType:Pace, maximum:2.0, minimum:1.0, sequenceNumber:4, span:15, spanType:Time ) */
  XTUML_OAL_STMT_TRACE( 1, "::newGoalSpec( criteriaType:Pace, maximum:2.0, minimum:1.0, sequenceNumber:4, span:15, spanType:Time )" );
  Tracking_newGoalSpec( GPS_Watch_GoalCriteria_Pace_e, 2.0, 1.0, 4, 15, GPS_Watch_GoalSpan_Time_e );
}

/*
 * Domain Function:  Initialize
 */
void
Tracking_Initialize()
{
  /* WorkoutSession::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "WorkoutSession::initialize()" );
  Tracking_WorkoutSession_op_initialize();
}

/*
 * Domain Function:  heartRateChanged
 */
void
Tracking_heartRateChanged( const i_t p_heartRate )
{
  Tracking_WorkoutSession * session=0;
  /* SELECT any session FROM INSTANCES OF WorkoutSession */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any session FROM INSTANCES OF WorkoutSession" );
  session = (Tracking_WorkoutSession *) Escher_SetGetAny( &pG_Tracking_WorkoutSession_extent.active );
  /* IF ( not empty session ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty session )" );
  if ( !( 0 == session ) ) {
    /* session.addHeartRateSample( heartRate:PARAM.heartRate ) */
    XTUML_OAL_STMT_TRACE( 2, "session.addHeartRateSample( heartRate:PARAM.heartRate )" );
    Tracking_WorkoutSession_op_addHeartRateSample( session,  p_heartRate );
  }
}

/*
 * Domain Function:  lapResetPressed
 */
void
Tracking_lapResetPressed()
{
  Tracking_WorkoutTimer * workoutTimer=0;
  /* SELECT any workoutTimer FROM INSTANCES OF WorkoutTimer */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any workoutTimer FROM INSTANCES OF WorkoutTimer" );
  workoutTimer = (Tracking_WorkoutTimer *) Escher_SetGetAny( &pG_Tracking_WorkoutTimer_extent.active );
  /* IF ( not empty workoutTimer ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty workoutTimer )" );
  if ( !( 0 == workoutTimer ) ) {
    /* GENERATE WorkoutTimer2:lapResetPressed() TO workoutTimer */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE WorkoutTimer2:lapResetPressed() TO workoutTimer" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( workoutTimer, &Tracking_WorkoutTimerevent2c );
      Escher_SendEvent( e );
    }
  }
  else {
    /* LOG::LogFailure( message:Tracking:UI:lapResetPressed - No WorkoutTimer, so nothing to do. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogFailure( message:Tracking:UI:lapResetPressed - No WorkoutTimer, so nothing to do. )" );
    LOG_LogFailure( "Tracking:UI:lapResetPressed - No WorkoutTimer, so nothing to do." );
  }
}

/*
 * Domain Function:  lightPressed
 */
void
Tracking_lightPressed()
{

}

/*
 * Domain Function:  modePressed
 */
void
Tracking_modePressed()
{
  Tracking_WorkoutSession * session=0;
  /* SELECT any session FROM INSTANCES OF WorkoutSession */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any session FROM INSTANCES OF WorkoutSession" );
  session = (Tracking_WorkoutSession *) Escher_SetGetAny( &pG_Tracking_WorkoutSession_extent.active );
  /* IF ( not empty session ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty session )" );
  if ( !( 0 == session ) ) {
    Tracking_Display * display=0;
    /* SELECT one display RELATED BY session->Display[R7.current_status_indicated_on] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT one display RELATED BY session->Display[R7.current_status_indicated_on]" );





    display = ( 0 != session ) ? session->Display_R7_current_status_indicated_on : 0;
    /* GENERATE Display1:modeChange() TO display */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE Display1:modeChange() TO display" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( display, &Tracking_Displayevent1c );
      Escher_SendEvent( e );
    }
  }
}

/*
 * Domain Function:  newGoalSpec
 */
void
Tracking_newGoalSpec( const GPS_Watch_GoalCriteria_t p_criteriaType, const r_t p_maximum, const r_t p_minimum, const i_t p_sequenceNumber, const r_t p_span, const GPS_Watch_GoalSpan_t p_spanType )
{
  Tracking_WorkoutSession * session=0;
  /* SELECT any session FROM INSTANCES OF WorkoutSession */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any session FROM INSTANCES OF WorkoutSession" );
  session = (Tracking_WorkoutSession *) Escher_SetGetAny( &pG_Tracking_WorkoutSession_extent.active );
  /* IF ( not empty session ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty session )" );
  if ( !( 0 == session ) ) {
    Tracking_GoalSpec * goalSpec;
    /* CREATE OBJECT INSTANCE goalSpec OF GoalSpec */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE goalSpec OF GoalSpec" );
    goalSpec = (Tracking_GoalSpec *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_GoalSpec_CLASS_NUMBER );
    /* ASSIGN goalSpec.sequenceNumber = PARAM.sequenceNumber */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN goalSpec.sequenceNumber = PARAM.sequenceNumber" );
    ((Tracking_GoalSpec *)xtUML_detect_empty_handle( goalSpec, "GoalSpec", "goalSpec.sequenceNumber" ))->sequenceNumber = p_sequenceNumber;
    /* ASSIGN goalSpec.minimum = PARAM.minimum */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN goalSpec.minimum = PARAM.minimum" );
    ((Tracking_GoalSpec *)xtUML_detect_empty_handle( goalSpec, "GoalSpec", "goalSpec.minimum" ))->minimum = p_minimum;
    /* ASSIGN goalSpec.maximum = PARAM.maximum */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN goalSpec.maximum = PARAM.maximum" );
    ((Tracking_GoalSpec *)xtUML_detect_empty_handle( goalSpec, "GoalSpec", "goalSpec.maximum" ))->maximum = p_maximum;
    /* ASSIGN goalSpec.span = PARAM.span */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN goalSpec.span = PARAM.span" );
    ((Tracking_GoalSpec *)xtUML_detect_empty_handle( goalSpec, "GoalSpec", "goalSpec.span" ))->span = p_span;
    /* ASSIGN goalSpec.criteriaType = PARAM.criteriaType */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN goalSpec.criteriaType = PARAM.criteriaType" );
    ((Tracking_GoalSpec *)xtUML_detect_empty_handle( goalSpec, "GoalSpec", "goalSpec.criteriaType" ))->criteriaType = p_criteriaType;
    /* ASSIGN goalSpec.spanType = PARAM.spanType */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN goalSpec.spanType = PARAM.spanType" );
    ((Tracking_GoalSpec *)xtUML_detect_empty_handle( goalSpec, "GoalSpec", "goalSpec.spanType" ))->spanType = p_spanType;
    /* RELATE goalSpec TO session ACROSS R10 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE goalSpec TO session ACROSS R10" );
    Tracking_GoalSpec_R10_Link_includes( session, goalSpec );
  }
}

/*
 * Domain Function:  setTargetPressed
 */
void
Tracking_setTargetPressed()
{
  /* Goal::nextGoal() */
  XTUML_OAL_STMT_TRACE( 1, "Goal::nextGoal()" );
  Tracking_Goal_op_nextGoal();
}

/*
 * Domain Function:  startStopPressed
 */
void
Tracking_startStopPressed()
{
  Tracking_WorkoutTimer * workoutTimer=0;
  /* WorkoutSession::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "WorkoutSession::initialize()" );
  Tracking_WorkoutSession_op_initialize();
  /* SELECT any workoutTimer FROM INSTANCES OF WorkoutTimer */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any workoutTimer FROM INSTANCES OF WorkoutTimer" );
  workoutTimer = (Tracking_WorkoutTimer *) Escher_SetGetAny( &pG_Tracking_WorkoutTimer_extent.active );
  /* GENERATE WorkoutTimer1:startStopPressed() TO workoutTimer */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE WorkoutTimer1:startStopPressed() TO workoutTimer" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( workoutTimer, &Tracking_WorkoutTimerevent1c );
    Escher_SendEvent( e );
  }
}
/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const Tracking_class_info[ Tracking_MAX_CLASS_NUMBERS ] = {
  &pG_Tracking_WorkoutTimer_extent,
  &pG_Tracking_Display_extent,
  &pG_Tracking_Goal_extent,
  &pG_Tracking_Achievement_extent,
  &pG_Tracking_Speed_extent,
  &pG_Tracking_HeartRateConstants_extent,
  &pG_Tracking_TrackLog_extent,
  &pG_Tracking_GoalAchievement_extent,
  &pG_Tracking_TrackPoint_extent,
  &pG_Tracking_GoalSpecConstants_extent,
  &pG_Tracking_LapMarker_extent,
  &pG_Tracking_HeartRateSample_extent,
  &pG_Tracking_WorkoutTimerConstants_extent,
  &pG_Tracking_WorkoutSession_extent,
  &pG_Tracking_GoalSpec_extent
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t Tracking_EventDispatcher[ Tracking_STATE_MODELS ] = {
  Tracking_class_dispatchers
};

void Tracking_execute_initialization()
{
  /*
   * Initialization Function:  GoalTest_1
   * Component:  Tracking
   */
  Tracking_GoalTest_1();

}
