/*----------------------------------------------------------------------------
 * File:  Tracking_WorkoutSession_class.c
 *
 * Class:       WorkoutSession  (WorkoutSession)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "Tracking_classes.h"

/*
 * instance operation:  addHeartRateSample
 */
void
Tracking_WorkoutSession_op_addHeartRateSample( Tracking_WorkoutSession * self, const i_t p_heartRate )
{
  Tracking_HeartRateSample * sample;Tracking_WorkoutTimer * workoutTimer=0;Tracking_Display * display=0;
  /* SELECT one workoutTimer RELATED BY self->WorkoutTimer[R8.is_timed_by] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one workoutTimer RELATED BY self->WorkoutTimer[R8.is_timed_by]" );





  workoutTimer = ( 0 != self ) ? self->WorkoutTimer_R8_is_timed_by : 0;
  /* CREATE OBJECT INSTANCE sample OF HeartRateSample */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE sample OF HeartRateSample" );
  sample = (Tracking_HeartRateSample *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_HeartRateSample_CLASS_NUMBER );
  /* ASSIGN sample.time = workoutTimer.time */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN sample.time = workoutTimer.time" );
  ((Tracking_HeartRateSample *)xtUML_detect_empty_handle( sample, "HeartRateSample", "sample.time" ))->time = ((Tracking_WorkoutTimer *)xtUML_detect_empty_handle( workoutTimer, "WorkoutTimer", "workoutTimer.time" ))->time;
  /* ASSIGN sample.heartRate = PARAM.heartRate */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN sample.heartRate = PARAM.heartRate" );
  ((Tracking_HeartRateSample *)xtUML_detect_empty_handle( sample, "HeartRateSample", "sample.heartRate" ))->heartRate = p_heartRate;
  /* RELATE self TO sample ACROSS R6 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE self TO sample ACROSS R6" );
  Tracking_HeartRateSample_R6_Link_tracks_heart_rate_over_time_as( self, sample );
  /* SELECT one display RELATED BY self->Display[R7.current_status_indicated_on] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one display RELATED BY self->Display[R7.current_status_indicated_on]" );





  display = ( 0 != self ) ? self->Display_R7_current_status_indicated_on : 0;
  /* GENERATE Display2:refresh() TO display */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE Display2:refresh() TO display" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( display, &Tracking_Displayevent2c );
    Escher_SendEvent( e );
  }
}

/*
 * instance operation:  clearHeartRateSamples
 */
void
Tracking_WorkoutSession_op_clearHeartRateSamples( Tracking_WorkoutSession * self)
{
  Tracking_HeartRateSample * sample=0;Escher_ObjectSet_s samples_space={0}; Escher_ObjectSet_s * samples = &samples_space;
  /* SELECT many samples RELATED BY self->HeartRateSample[R6] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many samples RELATED BY self->HeartRateSample[R6]" );





  Escher_ClearSet( samples );
  if ( 0 != self ) {
    Escher_CopySet( samples, &self->HeartRateSample_R6_tracks_heart_rate_over_time_as );
  }
  /* FOR EACH sample IN samples */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH sample IN samples" );
  { Escher_Iterator_s itersample;
  Tracking_HeartRateSample * iisample;
  Escher_IteratorReset( &itersample, samples );
  while ( (iisample = (Tracking_HeartRateSample *)Escher_IteratorNext( &itersample )) != 0 ) {
    sample = iisample; {
    /* UNRELATE self FROM sample ACROSS R6 */
    XTUML_OAL_STMT_TRACE( 2, "UNRELATE self FROM sample ACROSS R6" );
    Tracking_HeartRateSample_R6_Unlink_tracks_heart_rate_over_time_as( self, sample );
    /* DELETE OBJECT INSTANCE sample */
    XTUML_OAL_STMT_TRACE( 2, "DELETE OBJECT INSTANCE sample" );
    if ( 0 == sample ) {
      XTUML_EMPTY_HANDLE_TRACE( "HeartRateSample", "Escher_DeleteInstance" );
    }
    Escher_DeleteInstance( (Escher_iHandle_t) sample, Tracking_DOMAIN_ID, Tracking_HeartRateSample_CLASS_NUMBER );
  }}}
  Escher_ClearSet( samples ); 
}

/*
 * class operation:  initialize
 */
void
Tracking_WorkoutSession_op_initialize()
{
  Tracking_WorkoutSession * session=0;
  /* SELECT any session FROM INSTANCES OF WorkoutSession */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any session FROM INSTANCES OF WorkoutSession" );
  session = (Tracking_WorkoutSession *) Escher_SetGetAny( &pG_Tracking_WorkoutSession_extent.active );
  /* IF ( empty session ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty session )" );
  if ( ( 0 == session ) ) {
    Tracking_WorkoutTimer * workoutTimer;Tracking_TrackLog * trackLog;Tracking_Display * display;
    /* CREATE OBJECT INSTANCE session OF WorkoutSession */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE session OF WorkoutSession" );
    session = (Tracking_WorkoutSession *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_WorkoutSession_CLASS_NUMBER );
    /* ASSIGN session.startTime = TIM::current_clock() */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN session.startTime = TIM::current_clock()" );
    ((Tracking_WorkoutSession *)xtUML_detect_empty_handle( session, "WorkoutSession", "session.startTime" ))->startTime = TIM_current_clock();
    /* ASSIGN session.accumulatedDistance = 0.0 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN session.accumulatedDistance = 0.0" );
    ((Tracking_WorkoutSession *)xtUML_detect_empty_handle( session, "WorkoutSession", "session.accumulatedDistance" ))->accumulatedDistance = 0.0;
    /* CREATE OBJECT INSTANCE workoutTimer OF WorkoutTimer */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE workoutTimer OF WorkoutTimer" );
    workoutTimer = (Tracking_WorkoutTimer *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_WorkoutTimer_CLASS_NUMBER );
    /* workoutTimer.initialize() */
    XTUML_OAL_STMT_TRACE( 2, "workoutTimer.initialize()" );
    Tracking_WorkoutTimer_op_initialize( workoutTimer );
    /* CREATE OBJECT INSTANCE trackLog OF TrackLog */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE trackLog OF TrackLog" );
    trackLog = (Tracking_TrackLog *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_TrackLog_CLASS_NUMBER );
    /* CREATE OBJECT INSTANCE display OF Display */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE display OF Display" );
    display = (Tracking_Display *) Escher_CreateInstance( Tracking_DOMAIN_ID, Tracking_Display_CLASS_NUMBER );
    /* RELATE trackLog TO session ACROSS R4 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE trackLog TO session ACROSS R4" );
    Tracking_TrackLog_R4_Link_captures_path_in( session, trackLog );
    /* RELATE workoutTimer TO session ACROSS R8 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE workoutTimer TO session ACROSS R8" );
    Tracking_WorkoutTimer_R8_Link_is_timed_by( session, workoutTimer );
    /* RELATE display TO session ACROSS R7 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE display TO session ACROSS R7" );
    Tracking_Display_R7_Link_current_status_indicated_on( session, display );
  }
}

/*
 * instance operation:  reset
 */
void
Tracking_WorkoutSession_op_reset( Tracking_WorkoutSession * self)
{
  Tracking_GoalSpec * goalSpec=0;Tracking_Goal * goal=0;Tracking_WorkoutTimer * workoutTimer=0;Tracking_TrackLog * trackLog=0;Escher_ObjectSet_s goalSpecs_space={0}; Escher_ObjectSet_s * goalSpecs = &goalSpecs_space;Tracking_Goal * executingGoal=0;Escher_ObjectSet_s goals_space={0}; Escher_ObjectSet_s * goals = &goals_space;
  /* SELECT one workoutTimer RELATED BY self->WorkoutTimer[R8.is_timed_by] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one workoutTimer RELATED BY self->WorkoutTimer[R8.is_timed_by]" );





  workoutTimer = ( 0 != self ) ? self->WorkoutTimer_R8_is_timed_by : 0;
  /* workoutTimer.initialize() */
  XTUML_OAL_STMT_TRACE( 1, "workoutTimer.initialize()" );
  Tracking_WorkoutTimer_op_initialize( workoutTimer );
  /* SELECT one trackLog RELATED BY self->TrackLog[R4.captures_path_in] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one trackLog RELATED BY self->TrackLog[R4.captures_path_in]" );





  trackLog = ( 0 != self ) ? self->TrackLog_R4_captures_path_in : 0;
  /* trackLog.clearTrackPoints() */
  XTUML_OAL_STMT_TRACE( 1, "trackLog.clearTrackPoints()" );
  Tracking_TrackLog_op_clearTrackPoints( trackLog );
  /* trackLog.clearLapMarkers() */
  XTUML_OAL_STMT_TRACE( 1, "trackLog.clearLapMarkers()" );
  Tracking_TrackLog_op_clearLapMarkers( trackLog );
  /* SELECT many goalSpecs RELATED BY self->GoalSpec[R10.includes] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many goalSpecs RELATED BY self->GoalSpec[R10.includes]" );





  Escher_ClearSet( goalSpecs );
  if ( 0 != self ) {
    Escher_CopySet( goalSpecs, &self->GoalSpec_R10_includes );
  }
  /* FOR EACH goalSpec IN goalSpecs */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH goalSpec IN goalSpecs" );
  { Escher_Iterator_s itergoalSpec;
  Tracking_GoalSpec * iigoalSpec;
  Escher_IteratorReset( &itergoalSpec, goalSpecs );
  while ( (iigoalSpec = (Tracking_GoalSpec *)Escher_IteratorNext( &itergoalSpec )) != 0 ) {
    goalSpec = iigoalSpec; {
    /* UNRELATE self FROM goalSpec ACROSS R10 */
    XTUML_OAL_STMT_TRACE( 2, "UNRELATE self FROM goalSpec ACROSS R10" );
    Tracking_GoalSpec_R10_Unlink_includes( self, goalSpec );
    /* DELETE OBJECT INSTANCE goalSpec */
    XTUML_OAL_STMT_TRACE( 2, "DELETE OBJECT INSTANCE goalSpec" );
    if ( 0 == goalSpec ) {
      XTUML_EMPTY_HANDLE_TRACE( "GoalSpec", "Escher_DeleteInstance" );
    }
    Escher_DeleteInstance( (Escher_iHandle_t) goalSpec, Tracking_DOMAIN_ID, Tracking_GoalSpec_CLASS_NUMBER );
  }}}
  /* SELECT one executingGoal RELATED BY self->Goal[R11.is_currently_executing] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one executingGoal RELATED BY self->Goal[R11.is_currently_executing]" );





  executingGoal = ( 0 != self ) ? self->Goal_R11_is_currently_executing : 0;
  /* IF ( not empty executingGoal ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty executingGoal )" );
  if ( !( 0 == executingGoal ) ) {
    Tracking_Achievement * openAchievement=0;
    /* SELECT one openAchievement RELATED BY executingGoal->Achievement[R14.has_open] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT one openAchievement RELATED BY executingGoal->Achievement[R14.has_open]" );





    openAchievement = ( 0 != executingGoal ) ? executingGoal->Achievement_R14_has_open : 0;
    /* IF ( not empty openAchievement ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( not empty openAchievement )" );
    if ( !( 0 == openAchievement ) ) {
      /* UNRELATE openAchievement FROM executingGoal ACROSS R14 */
      XTUML_OAL_STMT_TRACE( 3, "UNRELATE openAchievement FROM executingGoal ACROSS R14" );
      Tracking_Achievement_R14_Unlink_has_open( executingGoal, openAchievement );
      /* DELETE OBJECT INSTANCE openAchievement */
      XTUML_OAL_STMT_TRACE( 3, "DELETE OBJECT INSTANCE openAchievement" );
      if ( 0 == openAchievement ) {
        XTUML_EMPTY_HANDLE_TRACE( "Achievement", "Escher_DeleteInstance" );
      }
      Escher_DeleteInstance( (Escher_iHandle_t) openAchievement, Tracking_DOMAIN_ID, Tracking_Achievement_CLASS_NUMBER );
    }
    /* UNRELATE self FROM executingGoal ACROSS R11 */
    XTUML_OAL_STMT_TRACE( 2, "UNRELATE self FROM executingGoal ACROSS R11" );
    Tracking_Goal_R11_Unlink_is_currently_executing( self, executingGoal );
    /* DELETE OBJECT INSTANCE executingGoal */
    XTUML_OAL_STMT_TRACE( 2, "DELETE OBJECT INSTANCE executingGoal" );
    if ( 0 == executingGoal ) {
      XTUML_EMPTY_HANDLE_TRACE( "Goal", "Escher_DeleteInstance" );
    }
    Escher_DeleteInstance( (Escher_iHandle_t) executingGoal, Tracking_DOMAIN_ID, Tracking_Goal_CLASS_NUMBER );
  }
  /* SELECT many goals RELATED BY self->Goal[R13.has_executed] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many goals RELATED BY self->Goal[R13.has_executed]" );





  Escher_ClearSet( goals );
  if ( 0 != self ) {
    Escher_CopySet( goals, &self->Goal_R13_has_executed );
  }
  /* FOR EACH goal IN goals */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH goal IN goals" );
  { Escher_Iterator_s itergoal;
  Tracking_Goal * iigoal;
  Escher_IteratorReset( &itergoal, goals );
  while ( (iigoal = (Tracking_Goal *)Escher_IteratorNext( &itergoal )) != 0 ) {
    goal = iigoal; {
    Tracking_Achievement * achievement=0;Escher_ObjectSet_s achievements_space={0}; Escher_ObjectSet_s * achievements = &achievements_space;
    /* SELECT many achievements RELATED BY goal->Achievement[R12.has_recorded] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT many achievements RELATED BY goal->Achievement[R12.has_recorded]" );





    Escher_ClearSet( achievements );
    if ( 0 != goal ) {
      Escher_CopySet( achievements, &goal->Achievement_R12_has_recorded );
    }
    /* FOR EACH achievement IN achievements */
    XTUML_OAL_STMT_TRACE( 2, "FOR EACH achievement IN achievements" );
    { Escher_Iterator_s iterachievement;
    Tracking_Achievement * iiachievement;
    Escher_IteratorReset( &iterachievement, achievements );
    while ( (iiachievement = (Tracking_Achievement *)Escher_IteratorNext( &iterachievement )) != 0 ) {
      achievement = iiachievement; {
      /* UNRELATE goal FROM achievement ACROSS R12 */
      XTUML_OAL_STMT_TRACE( 3, "UNRELATE goal FROM achievement ACROSS R12" );
      Tracking_Achievement_R12_Unlink_has_recorded( goal, achievement );
      /* DELETE OBJECT INSTANCE achievement */
      XTUML_OAL_STMT_TRACE( 3, "DELETE OBJECT INSTANCE achievement" );
      if ( 0 == achievement ) {
        XTUML_EMPTY_HANDLE_TRACE( "Achievement", "Escher_DeleteInstance" );
      }
      Escher_DeleteInstance( (Escher_iHandle_t) achievement, Tracking_DOMAIN_ID, Tracking_Achievement_CLASS_NUMBER );
    }}}
    /* UNRELATE self FROM goal ACROSS R13 */
    XTUML_OAL_STMT_TRACE( 2, "UNRELATE self FROM goal ACROSS R13" );
    Tracking_Goal_R13_Unlink_has_executed( self, goal );
    /* DELETE OBJECT INSTANCE goal */
    XTUML_OAL_STMT_TRACE( 2, "DELETE OBJECT INSTANCE goal" );
    if ( 0 == goal ) {
      XTUML_EMPTY_HANDLE_TRACE( "Goal", "Escher_DeleteInstance" );
    }
    Escher_DeleteInstance( (Escher_iHandle_t) goal, Tracking_DOMAIN_ID, Tracking_Goal_CLASS_NUMBER );
    Escher_ClearSet( achievements ); 
  }}}
  /* ASSIGN self.accumulatedDistance = 0.0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.accumulatedDistance = 0.0" );
  ((Tracking_WorkoutSession *)xtUML_detect_empty_handle( self, "WorkoutSession", "self.accumulatedDistance" ))->accumulatedDistance = 0.0;
  /* self.clearHeartRateSamples() */
  XTUML_OAL_STMT_TRACE( 1, "self.clearHeartRateSamples()" );
  Tracking_WorkoutSession_op_clearHeartRateSamples( self );
  Escher_ClearSet( goalSpecs ); Escher_ClearSet( goals ); 
}

/*
 * instance operation:  getCurrentSpeed
 */
r_t
Tracking_WorkoutSession_op_getCurrentSpeed( Tracking_WorkoutSession * self)
{
  r_t speed;Tracking_TrackPoint * lastPoint=0;
  /* SELECT one lastPoint RELATED BY self->TrackLog[R4.captures_path_in]->TrackPoint[R3.has_last] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one lastPoint RELATED BY self->TrackLog[R4.captures_path_in]->TrackPoint[R3.has_last]" );





  lastPoint = 0;
  {  if ( 0 != self ) {
  Tracking_TrackLog * TrackLog_R4_captures_path_in = self->TrackLog_R4_captures_path_in;
  if ( 0 != TrackLog_R4_captures_path_in ) {
  lastPoint = TrackLog_R4_captures_path_in->TrackPoint_R3_has_last;
}}}
  /* ASSIGN speed = 0.0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN speed = 0.0" );
  speed = 0.0;
  /* IF ( not empty lastPoint ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty lastPoint )" );
  if ( !( 0 == lastPoint ) ) {
    Tracking_TrackPoint * cursor;i_t index;r_t totalDistance;r_t elapsedTime;Tracking_Speed * spd=0;
    /* ASSIGN cursor = lastPoint */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN cursor = lastPoint" );
    cursor = lastPoint;
    /* Speed::initialize() */
    XTUML_OAL_STMT_TRACE( 2, "Speed::initialize()" );
    Tracking_Speed_op_initialize();
    /* SELECT any spd FROM INSTANCES OF Speed */
    XTUML_OAL_STMT_TRACE( 2, "SELECT any spd FROM INSTANCES OF Speed" );
    spd = (Tracking_Speed *) Escher_SetGetAny( &pG_Tracking_Speed_extent.active );
    /* ASSIGN index = spd.SpeedAveragingWindow */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN index = spd.SpeedAveragingWindow" );
    index = ((Tracking_Speed *)xtUML_detect_empty_handle( spd, "Speed", "spd.SpeedAveragingWindow" ))->SpeedAveragingWindow;
    /* ASSIGN totalDistance = 0.0 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN totalDistance = 0.0" );
    totalDistance = 0.0;
    /* ASSIGN elapsedTime = 0.0 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN elapsedTime = 0.0" );
    elapsedTime = 0.0;
    /* ASSIGN elapsedTime = lastPoint.time */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN elapsedTime = lastPoint.time" );
    elapsedTime = ((Tracking_TrackPoint *)xtUML_detect_empty_handle( lastPoint, "TrackPoint", "lastPoint.time" ))->time;
    /* WHILE ( ( index > 0 ) ) */
    XTUML_OAL_STMT_TRACE( 2, "WHILE ( ( index > 0 ) )" );
    while ( ( index > 0 ) ) {
      r_t distance;Tracking_TrackPoint * previousPoint=0;
      /* SELECT one previousPoint RELATED BY cursor->TrackPoint[R2.preceeds] */
      XTUML_OAL_STMT_TRACE( 3, "SELECT one previousPoint RELATED BY cursor->TrackPoint[R2.preceeds]" );





      previousPoint = ( 0 != cursor ) ? cursor->TrackPoint_R2_preceeds : 0;
      /* IF ( empty previousPoint ) */
      XTUML_OAL_STMT_TRACE( 3, "IF ( empty previousPoint )" );
      if ( ( 0 == previousPoint ) ) {
        /* BREAK */
        XTUML_OAL_STMT_TRACE( 4, "BREAK" );
        break;
      }
      /* ASSIGN distance = 0.0 */
      XTUML_OAL_STMT_TRACE( 3, "ASSIGN distance = 0.0" );
      distance = 0.0;
      /* LOC::getDistance(fromLat:cursor.latitude, fromLong:cursor.longitude, result:distance, toLat:previousPoint.latitude, toLong:previousPoint.longitude) */
      XTUML_OAL_STMT_TRACE( 3, "LOC::getDistance(fromLat:cursor.latitude, fromLong:cursor.longitude, result:distance, toLat:previousPoint.latitude, toLong:previousPoint.longitude)" );
      Tracking_LOC_getDistance( ((Tracking_TrackPoint *)xtUML_detect_empty_handle( cursor, "TrackPoint", "cursor.latitude" ))->latitude, ((Tracking_TrackPoint *)xtUML_detect_empty_handle( cursor, "TrackPoint", "cursor.longitude" ))->longitude, &(distance), ((Tracking_TrackPoint *)xtUML_detect_empty_handle( previousPoint, "TrackPoint", "previousPoint.latitude" ))->latitude, ((Tracking_TrackPoint *)xtUML_detect_empty_handle( previousPoint, "TrackPoint", "previousPoint.longitude" ))->longitude );
      /* ASSIGN totalDistance = ( totalDistance + distance ) */
      XTUML_OAL_STMT_TRACE( 3, "ASSIGN totalDistance = ( totalDistance + distance )" );
      totalDistance = ( totalDistance + distance );
      /* ASSIGN index = ( index - 1 ) */
      XTUML_OAL_STMT_TRACE( 3, "ASSIGN index = ( index - 1 )" );
      index = ( index - 1 );
      /* ASSIGN cursor = previousPoint */
      XTUML_OAL_STMT_TRACE( 3, "ASSIGN cursor = previousPoint" );
      cursor = previousPoint;
    }
    /* ASSIGN elapsedTime = ( elapsedTime - cursor.time ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN elapsedTime = ( elapsedTime - cursor.time )" );
    elapsedTime = ( elapsedTime - ((Tracking_TrackPoint *)xtUML_detect_empty_handle( cursor, "TrackPoint", "cursor.time" ))->time );
    /* ASSIGN speed = ( ( totalDistance / 1000 ) / ( elapsedTime / spd.SecondsPerHour ) ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN speed = ( ( totalDistance / 1000 ) / ( elapsedTime / spd.SecondsPerHour ) )" );
    speed = ( ( totalDistance / 1000 ) / ( elapsedTime / ((Tracking_Speed *)xtUML_detect_empty_handle( spd, "Speed", "spd.SecondsPerHour" ))->SecondsPerHour ) );
  }
  /* RETURN speed */
  XTUML_OAL_STMT_TRACE( 1, "RETURN speed" );
  {r_t xtumlOALrv = speed;
  return xtumlOALrv;}
}

/*
 * instance operation:  getCurrentPace
 */
r_t
Tracking_WorkoutSession_op_getCurrentPace( Tracking_WorkoutSession * self)
{
  r_t result;
  /* ASSIGN result = 0.0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN result = 0.0" );
  result = 0.0;
  /* IF ( ( self.getCurrentSpeed() != 0.0 ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( self.getCurrentSpeed() != 0.0 ) )" );
  if ( ( Tracking_WorkoutSession_op_getCurrentSpeed(self) != 0.0 ) ) {
    /* ASSIGN result = ( 60.0 / self.getCurrentSpeed() ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN result = ( 60.0 / self.getCurrentSpeed() )" );
    result = ( 60.0 / Tracking_WorkoutSession_op_getCurrentSpeed(self) );
  }
  else {
    /* ASSIGN result = 0.0 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN result = 0.0" );
    result = 0.0;
  }
  /* RETURN result */
  XTUML_OAL_STMT_TRACE( 1, "RETURN result" );
  {r_t xtumlOALrv = result;
  return xtumlOALrv;}
}

/*
 * instance operation:  getCurrentHeartRate
 */
i_t
Tracking_WorkoutSession_op_getCurrentHeartRate( Tracking_WorkoutSession * self)
{
  Tracking_HeartRateSample * sample=0;i_t numberOfSamples;i_t sum;i_t result;Tracking_HeartRateConstants * hrc=0;Tracking_WorkoutTimer * workoutTimer=0;Escher_ObjectSet_s samples_space={0}; Escher_ObjectSet_s * samples = &samples_space;
  /* HeartRateConstants::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "HeartRateConstants::initialize()" );
  Tracking_HeartRateConstants_op_initialize();
  /* SELECT any hrc FROM INSTANCES OF HeartRateConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any hrc FROM INSTANCES OF HeartRateConstants" );
  hrc = (Tracking_HeartRateConstants *) Escher_SetGetAny( &pG_Tracking_HeartRateConstants_extent.active );
  /* SELECT one workoutTimer RELATED BY self->WorkoutTimer[R8.is_timed_by] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one workoutTimer RELATED BY self->WorkoutTimer[R8.is_timed_by]" );





  workoutTimer = ( 0 != self ) ? self->WorkoutTimer_R8_is_timed_by : 0;
  /* SELECT many samples RELATED BY self->HeartRateSample[R6.tracks_heart_rate_over_time_as] WHERE ( ( SELECTED.time >= ( workoutTimer.time - ( hrc.HeartRateSamplingPeriod * hrc.HeartRateAveragingWindow ) ) ) ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many samples RELATED BY self->HeartRateSample[R6.tracks_heart_rate_over_time_as] WHERE ( ( SELECTED.time >= ( workoutTimer.time - ( hrc.HeartRateSamplingPeriod * hrc.HeartRateAveragingWindow ) ) ) )" );






  Escher_ClearSet( samples );
  if ( 0 != self ) {
  {Tracking_HeartRateSample * selected;
  Escher_Iterator_s iHeartRateSample_R6_tracks_heart_rate_over_time_as;
  Escher_IteratorReset( &iHeartRateSample_R6_tracks_heart_rate_over_time_as, &self->HeartRateSample_R6_tracks_heart_rate_over_time_as );
  while ( 0 != ( selected = (Tracking_HeartRateSample *) Escher_IteratorNext( &iHeartRateSample_R6_tracks_heart_rate_over_time_as ) ) ) {
    if ( ( ((Tracking_HeartRateSample *)xtUML_detect_empty_handle( selected, "HeartRateSample", "SELECTED.time" ))->time >= ( ((Tracking_WorkoutTimer *)xtUML_detect_empty_handle( workoutTimer, "WorkoutTimer", "workoutTimer.time" ))->time - ( ((Tracking_HeartRateConstants *)xtUML_detect_empty_handle( hrc, "HeartRateConstants", "hrc.HeartRateSamplingPeriod" ))->HeartRateSamplingPeriod * ((Tracking_HeartRateConstants *)xtUML_detect_empty_handle( hrc, "HeartRateConstants", "hrc.HeartRateAveragingWindow" ))->HeartRateAveragingWindow ) ) ) ) {
      if ( ! Escher_SetContains( (Escher_ObjectSet_s *) samples, selected ) ) {
        Escher_SetInsertElement( (Escher_ObjectSet_s *) samples, selected );
  }}}}}
  /* ASSIGN numberOfSamples = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN numberOfSamples = 0" );
  numberOfSamples = 0;
  /* ASSIGN sum = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN sum = 0" );
  sum = 0;
  /* ASSIGN result = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN result = 0" );
  result = 0;
  /* FOR EACH sample IN samples */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH sample IN samples" );
  { Escher_Iterator_s itersample;
  Tracking_HeartRateSample * iisample;
  Escher_IteratorReset( &itersample, samples );
  while ( (iisample = (Tracking_HeartRateSample *)Escher_IteratorNext( &itersample )) != 0 ) {
    sample = iisample; {
    /* ASSIGN numberOfSamples = ( numberOfSamples + 1 ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN numberOfSamples = ( numberOfSamples + 1 )" );
    numberOfSamples = ( numberOfSamples + 1 );
    /* ASSIGN sum = ( sum + sample.heartRate ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN sum = ( sum + sample.heartRate )" );
    sum = ( sum + ((Tracking_HeartRateSample *)xtUML_detect_empty_handle( sample, "HeartRateSample", "sample.heartRate" ))->heartRate );
  }}}
  /* IF ( ( numberOfSamples > 0 ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( numberOfSamples > 0 ) )" );
  if ( ( numberOfSamples > 0 ) ) {
    /* ASSIGN result = ( sum / numberOfSamples ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN result = ( sum / numberOfSamples )" );
    result = ( sum / numberOfSamples );
  }
  /* RETURN result */
  XTUML_OAL_STMT_TRACE( 1, "RETURN result" );
  {i_t xtumlOALrv = result;
  Escher_ClearSet( samples ); 
  return xtumlOALrv;}
  Escher_ClearSet( samples ); 
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      WorkoutSession  (WorkoutSession)
 * Component:  Tracking
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Tracking_WorkoutSession_container[ Tracking_WorkoutSession_MAX_EXTENT_SIZE ];
static Tracking_WorkoutSession Tracking_WorkoutSession_instances[ Tracking_WorkoutSession_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Tracking_WorkoutSession_extent = {
  {0}, {0}, &Tracking_WorkoutSession_container[ 0 ],
  (Escher_iHandle_t) &Tracking_WorkoutSession_instances,
  sizeof( Tracking_WorkoutSession ), 0, Tracking_WorkoutSession_MAX_EXTENT_SIZE
  };

