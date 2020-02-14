/*----------------------------------------------------------------------------
 * File:  Tracking_WorkoutTimer_class.c
 *
 * Class:       WorkoutTimer  (WorkoutTimer)
 * Component:   Tracking
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "Tracking_classes.h"

/*
 * instance operation:  activate
 */
void
Tracking_WorkoutTimer_op_activate( Tracking_WorkoutTimer * self)
{
  Escher_xtUMLEvent_t * evt;Tracking_WorkoutTimerConstants * wtc=0;Tracking_Goal * executingGoal=0;
  /* WorkoutTimerConstants::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "WorkoutTimerConstants::initialize()" );
  Tracking_WorkoutTimerConstants_op_initialize();
  /* SELECT any wtc FROM INSTANCES OF WorkoutTimerConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any wtc FROM INSTANCES OF WorkoutTimerConstants" );
  wtc = (Tracking_WorkoutTimerConstants *) Escher_SetGetAny( &pG_Tracking_WorkoutTimerConstants_extent.active );
  /* CREATE EVENT INSTANCE evt(  ) TO self */
  XTUML_OAL_STMT_TRACE( 1, "CREATE EVENT INSTANCE evt(  ) TO self" );
  evt = Escher_NewxtUMLEvent( (void *) self, &Tracking_WorkoutTimerevent3c );
  /* ASSIGN self.timer = TIM::timer_start_recurring(event_inst:evt, microseconds:( wtc.timerPeriod * 1000000 )) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.timer = TIM::timer_start_recurring(event_inst:evt, microseconds:( wtc.timerPeriod * 1000000 ))" );
  ((Tracking_WorkoutTimer *)xtUML_detect_empty_handle( self, "WorkoutTimer", "self.timer" ))->timer = TIM_timer_start_recurring( (Escher_xtUMLEvent_t *)evt, ( ((Tracking_WorkoutTimerConstants *)xtUML_detect_empty_handle( wtc, "WorkoutTimerConstants", "wtc.timerPeriod" ))->timerPeriod * 1000000 ) );
  /* SELECT one executingGoal RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for]->Goal[R11.is_currently_executing] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one executingGoal RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for]->Goal[R11.is_currently_executing]" );





  executingGoal = 0;
  {  if ( 0 != self ) {
  Tracking_WorkoutSession * WorkoutSession_R8_acts_as_the_stopwatch_for = self->WorkoutSession_R8_acts_as_the_stopwatch_for;
  if ( 0 != WorkoutSession_R8_acts_as_the_stopwatch_for ) {
  executingGoal = WorkoutSession_R8_acts_as_the_stopwatch_for->Goal_R11_is_currently_executing;
}}}
  /* IF ( not empty executingGoal ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty executingGoal )" );
  if ( !( 0 == executingGoal ) ) {
    /* GENERATE Goal2:Evaluate() TO executingGoal */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE Goal2:Evaluate() TO executingGoal" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( executingGoal, &Tracking_Goalevent2c );
      Escher_SendEvent( e );
    }
  }
  /* LOC::registerListener() */
  XTUML_OAL_STMT_TRACE( 1, "LOC::registerListener()" );
  Tracking_LOC_registerListener();
  /* HR::registerListener() */
  XTUML_OAL_STMT_TRACE( 1, "HR::registerListener()" );
  Tracking_HR_registerListener();
}

/*
 * instance operation:  deactivate
 */
void
Tracking_WorkoutTimer_op_deactivate( Tracking_WorkoutTimer * self)
{
  bool cancelSucceeded;Tracking_Goal * executingGoal=0;
  /* ASSIGN cancelSucceeded = TIM::timer_cancel(timer_inst_ref:self.timer) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN cancelSucceeded = TIM::timer_cancel(timer_inst_ref:self.timer)" );
  cancelSucceeded = TIM_timer_cancel( ((Tracking_WorkoutTimer *)xtUML_detect_empty_handle( self, "WorkoutTimer", "self.timer" ))->timer );
  /* SELECT one executingGoal RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for]->Goal[R11.is_currently_executing] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one executingGoal RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for]->Goal[R11.is_currently_executing]" );





  executingGoal = 0;
  {  if ( 0 != self ) {
  Tracking_WorkoutSession * WorkoutSession_R8_acts_as_the_stopwatch_for = self->WorkoutSession_R8_acts_as_the_stopwatch_for;
  if ( 0 != WorkoutSession_R8_acts_as_the_stopwatch_for ) {
  executingGoal = WorkoutSession_R8_acts_as_the_stopwatch_for->Goal_R11_is_currently_executing;
}}}
  /* IF ( not empty executingGoal ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty executingGoal )" );
  if ( !( 0 == executingGoal ) ) {
    /* GENERATE Goal3:Pause() TO executingGoal */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE Goal3:Pause() TO executingGoal" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( executingGoal, &Tracking_Goalevent3c );
      Escher_SendEvent( e );
    }
  }
  /* LOC::unregisterListener() */
  XTUML_OAL_STMT_TRACE( 1, "LOC::unregisterListener()" );
  Tracking_LOC_unregisterListener();
  /* HR::unregisterListener() */
  XTUML_OAL_STMT_TRACE( 1, "HR::unregisterListener()" );
  Tracking_HR_unregisterListener();
}

/*
 * instance operation:  initialize
 */
void
Tracking_WorkoutTimer_op_initialize( Tracking_WorkoutTimer * self)
{
  /* ASSIGN self.time = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.time = 0" );
  ((Tracking_WorkoutTimer *)xtUML_detect_empty_handle( self, "WorkoutTimer", "self.time" ))->time = 0;
}

/*
 * RELATE WorkoutSession TO WorkoutTimer ACROSS R8
 */
void
Tracking_WorkoutTimer_R8_Link_is_timed_by( Tracking_WorkoutSession * part, Tracking_WorkoutTimer * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "WorkoutTimer", "Tracking_WorkoutTimer_R8_Link_is_timed_by" );
    return;
  }
  Escher_memmove( &form->session_startTime, &part->startTime, sizeof( form->session_startTime ) );
  form->WorkoutSession_R8_acts_as_the_stopwatch_for = part;
  part->WorkoutTimer_R8_is_timed_by = form;
}

/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      WorkoutTimer  (WorkoutTimer)
 * Component:  Tracking
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Tracking_WorkoutTimer_container[ Tracking_WorkoutTimer_MAX_EXTENT_SIZE ];
static Tracking_WorkoutTimer Tracking_WorkoutTimer_instances[ Tracking_WorkoutTimer_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Tracking_WorkoutTimer_extent = {
  {0}, {0}, &Tracking_WorkoutTimer_container[ 0 ],
  (Escher_iHandle_t) &Tracking_WorkoutTimer_instances,
  sizeof( Tracking_WorkoutTimer ), Tracking_WorkoutTimer_STATE_1, Tracking_WorkoutTimer_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      WorkoutTimer  (WorkoutTimer)
 * Component:  Tracking
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [stopped]
 */
static void Tracking_WorkoutTimer_act1( Tracking_WorkoutTimer *, const Escher_xtUMLEvent_t * const );
static void
Tracking_WorkoutTimer_act1( Tracking_WorkoutTimer * self, const Escher_xtUMLEvent_t * const event )
{
  Tracking_WorkoutSession * session=0;Tracking_Display * display=0;
  /* SELECT one session RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one session RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for]" );





  session = ( 0 != self ) ? self->WorkoutSession_R8_acts_as_the_stopwatch_for : 0;
  /* session.reset() */
  XTUML_OAL_STMT_TRACE( 1, "session.reset()" );
  Tracking_WorkoutSession_op_reset( session );
  /* UI::setTime(time:self.time) */
  XTUML_OAL_STMT_TRACE( 1, "UI::setTime(time:self.time)" );
  Tracking_UI_setTime( ((Tracking_WorkoutTimer *)xtUML_detect_empty_handle( self, "WorkoutTimer", "self.time" ))->time );
  /* SELECT one display RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for]->Display[R7.current_status_indicated_on] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one display RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for]->Display[R7.current_status_indicated_on]" );





  display = 0;
  {  if ( 0 != self ) {
  Tracking_WorkoutSession * WorkoutSession_R8_acts_as_the_stopwatch_for = self->WorkoutSession_R8_acts_as_the_stopwatch_for;
  if ( 0 != WorkoutSession_R8_acts_as_the_stopwatch_for ) {
  display = WorkoutSession_R8_acts_as_the_stopwatch_for->Display_R7_current_status_indicated_on;
}}}
  /* GENERATE Display2:refresh() TO display */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE Display2:refresh() TO display" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( display, &Tracking_Displayevent2c );
    Escher_SendEvent( e );
  }
}

/*
 * State 2:  [running]
 */
static void Tracking_WorkoutTimer_act2( Tracking_WorkoutTimer *, const Escher_xtUMLEvent_t * const );
static void
Tracking_WorkoutTimer_act2( Tracking_WorkoutTimer * self, const Escher_xtUMLEvent_t * const event )
{
  Tracking_WorkoutTimerConstants * wtc=0;Tracking_TrackLog * trackLog=0;
  /* WorkoutTimerConstants::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "WorkoutTimerConstants::initialize()" );
  Tracking_WorkoutTimerConstants_op_initialize();
  /* SELECT any wtc FROM INSTANCES OF WorkoutTimerConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any wtc FROM INSTANCES OF WorkoutTimerConstants" );
  wtc = (Tracking_WorkoutTimerConstants *) Escher_SetGetAny( &pG_Tracking_WorkoutTimerConstants_extent.active );
  /* ASSIGN self.time = ( self.time + wtc.timerPeriod ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.time = ( self.time + wtc.timerPeriod )" );
  ((Tracking_WorkoutTimer *)xtUML_detect_empty_handle( self, "WorkoutTimer", "self.time" ))->time = ( ((Tracking_WorkoutTimer *)xtUML_detect_empty_handle( self, "WorkoutTimer", "self.time" ))->time + ((Tracking_WorkoutTimerConstants *)xtUML_detect_empty_handle( wtc, "WorkoutTimerConstants", "wtc.timerPeriod" ))->timerPeriod );
  /* SELECT one trackLog RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for]->TrackLog[R4.captures_path_in] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one trackLog RELATED BY self->WorkoutSession[R8.acts_as_the_stopwatch_for]->TrackLog[R4.captures_path_in]" );





  trackLog = 0;
  {  if ( 0 != self ) {
  Tracking_WorkoutSession * WorkoutSession_R8_acts_as_the_stopwatch_for = self->WorkoutSession_R8_acts_as_the_stopwatch_for;
  if ( 0 != WorkoutSession_R8_acts_as_the_stopwatch_for ) {
  trackLog = WorkoutSession_R8_acts_as_the_stopwatch_for->TrackLog_R4_captures_path_in;
}}}
  /* trackLog.addTrackPoint() */
  XTUML_OAL_STMT_TRACE( 1, "trackLog.addTrackPoint()" );
  Tracking_TrackLog_op_addTrackPoint( trackLog );
  /* UI::setTime(time:self.time) */
  XTUML_OAL_STMT_TRACE( 1, "UI::setTime(time:self.time)" );
  Tracking_UI_setTime( ((Tracking_WorkoutTimer *)xtUML_detect_empty_handle( self, "WorkoutTimer", "self.time" ))->time );
}

/*
 * State 3:  [paused]
 */
static void Tracking_WorkoutTimer_act3( Tracking_WorkoutTimer *, const Escher_xtUMLEvent_t * const );
static void
Tracking_WorkoutTimer_act3( Tracking_WorkoutTimer * self, const Escher_xtUMLEvent_t * const event )
{
  /* self.deactivate() */
  XTUML_OAL_STMT_TRACE( 1, "self.deactivate()" );
  Tracking_WorkoutTimer_op_deactivate( self );
}

/*
 * State 6:  [processingStart]
 */
static void Tracking_WorkoutTimer_act6( Tracking_WorkoutTimer *, const Escher_xtUMLEvent_t * const );
static void
Tracking_WorkoutTimer_act6( Tracking_WorkoutTimer * self, const Escher_xtUMLEvent_t * const event )
{
  /* self.activate() */
  XTUML_OAL_STMT_TRACE( 1, "self.activate()" );
  Tracking_WorkoutTimer_op_activate( self );
  /* GENERATE WorkoutTimer6:startTimer() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE WorkoutTimer6:startTimer() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &Tracking_WorkoutTimerevent6c );
    Escher_SendSelfEvent( e );
  }
}

/*
 * State 8:  [resetLap]
 */
static void Tracking_WorkoutTimer_act8( Tracking_WorkoutTimer *, const Escher_xtUMLEvent_t * const );
static void
Tracking_WorkoutTimer_act8( Tracking_WorkoutTimer * self, const Escher_xtUMLEvent_t * const event )
{
  Tracking_TrackLog * trackLog=0;
  /* SELECT any trackLog FROM INSTANCES OF TrackLog */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any trackLog FROM INSTANCES OF TrackLog" );
  trackLog = (Tracking_TrackLog *) Escher_SetGetAny( &pG_Tracking_TrackLog_extent.active );
  /* IF ( not empty trackLog ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty trackLog )" );
  if ( !( 0 == trackLog ) ) {
    /* trackLog.addLapMarker() */
    XTUML_OAL_STMT_TRACE( 2, "trackLog.addLapMarker()" );
    Tracking_TrackLog_op_addLapMarker( trackLog );
  }
  /* GENERATE WorkoutTimer8:lapResetComplete() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE WorkoutTimer8:lapResetComplete() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &Tracking_WorkoutTimerevent8c );
    Escher_SendSelfEvent( e );
  }
}

const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent1c = {
  Tracking_DOMAIN_ID, Tracking_WorkoutTimer_CLASS_NUMBER, TRACKING_WORKOUTTIMEREVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent2c = {
  Tracking_DOMAIN_ID, Tracking_WorkoutTimer_CLASS_NUMBER, TRACKING_WORKOUTTIMEREVENT2NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent3c = {
  Tracking_DOMAIN_ID, Tracking_WorkoutTimer_CLASS_NUMBER, TRACKING_WORKOUTTIMEREVENT3NUM,
  ESCHER_IS_INSTANCE_EVENT };


const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent6c = {
  Tracking_DOMAIN_ID, Tracking_WorkoutTimer_CLASS_NUMBER, TRACKING_WORKOUTTIMEREVENT6NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Tracking_WorkoutTimerevent8c = {
  Tracking_DOMAIN_ID, Tracking_WorkoutTimer_CLASS_NUMBER, TRACKING_WORKOUTTIMEREVENT8NUM,
  ESCHER_IS_INSTANCE_EVENT };


/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t Tracking_WorkoutTimer_StateEventMatrix[ 5 + 1 ][ 5 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  Tracking_WorkoutTimer_STATE_1 (stopped) */
  { Tracking_WorkoutTimer_STATE_6, EVENT_IS_IGNORED, EVENT_IS_IGNORED, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 2:  Tracking_WorkoutTimer_STATE_2 (running) */
  { Tracking_WorkoutTimer_STATE_3, Tracking_WorkoutTimer_STATE_8, Tracking_WorkoutTimer_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 3:  Tracking_WorkoutTimer_STATE_3 (paused) */
  { Tracking_WorkoutTimer_STATE_6, Tracking_WorkoutTimer_STATE_1, EVENT_IS_IGNORED, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 4:  Tracking_WorkoutTimer_STATE_6 (processingStart) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, Tracking_WorkoutTimer_STATE_2, EVENT_CANT_HAPPEN },
  /* row 5:  Tracking_WorkoutTimer_STATE_8 (resetLap) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, Tracking_WorkoutTimer_STATE_2 }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t Tracking_WorkoutTimer_acts[ 6 ] = {
    (StateAction_t) 0,
    (StateAction_t) Tracking_WorkoutTimer_act1,  /* stopped */
    (StateAction_t) Tracking_WorkoutTimer_act2,  /* running */
    (StateAction_t) Tracking_WorkoutTimer_act3,  /* paused */
    (StateAction_t) Tracking_WorkoutTimer_act6,  /* processingStart */
    (StateAction_t) Tracking_WorkoutTimer_act8  /* resetLap */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 6 ] = {
    "",
    "stopped",
    "running",
    "paused",
    "processingStart",
    "resetLap"
  };

/*
 * instance state machine event dispatching
 */
void
Tracking_WorkoutTimer_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 5 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = Tracking_WorkoutTimer_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 5 ) {
        STATE_TXN_START_TRACE( "WorkoutTimer", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *Tracking_WorkoutTimer_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "WorkoutTimer", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "WorkoutTimer", current_state );
      } else if ( next_state == EVENT_IS_IGNORED ) {
          /* event ignored */
          STATE_TXN_IG_TRACE( "WorkoutTimer", current_state );
      } else {
        /* empty else */
      }
    }
  }
}

