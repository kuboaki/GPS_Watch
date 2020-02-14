/*----------------------------------------------------------------------------
 * File:  UI_UI_class.c
 *
 * Class:       UI  (UI)
 * Component:   UI
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "GPS_Watch_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "UI_GuiBridge_bridge.h"
#include "UI_classes.h"

/*
 * class operation:  connect
 */
void
UI_UI_op_connect()
{
  UI_UIConstants * uiconst=0;UI_UI * ui=0;
  /* UIConstants::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "UIConstants::initialize()" );
  UI_UIConstants_op_initialize();
  /* SELECT any uiconst FROM INSTANCES OF UIConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any uiconst FROM INSTANCES OF UIConstants" );
  uiconst = (UI_UIConstants *) Escher_SetGetAny( &pG_UI_UIConstants_extent.active );
  /* SELECT any ui FROM INSTANCES OF UI */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ui FROM INSTANCES OF UI" );
  ui = (UI_UI *) Escher_SetGetAny( &pG_UI_UI_extent.active );
  /* UI::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "UI::initialize()" );
  UI_UI_op_initialize();
  /* SELECT any ui FROM INSTANCES OF UI */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ui FROM INSTANCES OF UI" );
  ui = (UI_UI *) Escher_SetGetAny( &pG_UI_UI_extent.active );
  /* ASSIGN ui.socket_id = GuiBridge::connect() */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN ui.socket_id = GuiBridge::connect()" );
  ((UI_UI *)xtUML_detect_empty_handle( ui, "UI", "ui.socket_id" ))->socket_id = UI_GuiBridge_connect();
  /* IF ( ( uiconst.SOCKET_ERROR != ui.socket_id ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( uiconst.SOCKET_ERROR != ui.socket_id ) )" );
  if ( ( ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SOCKET_ERROR" ))->SOCKET_ERROR != ((UI_UI *)xtUML_detect_empty_handle( ui, "UI", "ui.socket_id" ))->socket_id ) ) {
    Escher_xtUMLEvent_t * evt;
    /* CREATE EVENT INSTANCE evt(  ) TO ui */
    XTUML_OAL_STMT_TRACE( 2, "CREATE EVENT INSTANCE evt(  ) TO ui" );
    evt = Escher_NewxtUMLEvent( (void *) ui, &UI_UIevent9c );
    /* ASSIGN ui.timer = TIM::timer_start_recurring(event_inst:evt, microseconds:uiconst.tick_period) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN ui.timer = TIM::timer_start_recurring(event_inst:evt, microseconds:uiconst.tick_period)" );
    ((UI_UI *)xtUML_detect_empty_handle( ui, "UI", "ui.timer" ))->timer = TIM_timer_start_recurring( (Escher_xtUMLEvent_t *)evt, ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.tick_period" ))->tick_period );
  }
}

/*
 * instance operation:  poll
 */
i_t
UI_UI_op_poll( UI_UI * self)
{
  /* RETURN GuiBridge::poll() */
  XTUML_OAL_STMT_TRACE( 1, "RETURN GuiBridge::poll()" );
  {i_t xtumlOALrv = UI_GuiBridge_poll();
  return xtumlOALrv;}
}

/*
 * instance operation:  setData
 */
void
UI_UI_op_setData( UI_UI * self, const i_t p_unit, const r_t p_value )
{
  /* GuiBridge::setData( unit:PARAM.unit, value:PARAM.value ) */
  XTUML_OAL_STMT_TRACE( 1, "GuiBridge::setData( unit:PARAM.unit, value:PARAM.value )" );
  UI_GuiBridge_setData( p_unit, p_value );
}

/*
 * instance operation:  setIndicator
 */
void
UI_UI_op_setIndicator( UI_UI * self, const i_t p_value )
{
  /* GuiBridge::setIndicator( value:PARAM.value ) */
  XTUML_OAL_STMT_TRACE( 1, "GuiBridge::setIndicator( value:PARAM.value )" );
  UI_GuiBridge_setIndicator( p_value );
}

/*
 * instance operation:  setTime
 */
void
UI_UI_op_setTime( UI_UI * self, const i_t p_time )
{
  /* GuiBridge::setTime( time:PARAM.time ) */
  XTUML_OAL_STMT_TRACE( 1, "GuiBridge::setTime( time:PARAM.time )" );
  UI_GuiBridge_setTime( p_time );
}

/*
 * class operation:  initialize
 */
void
UI_UI_op_initialize()
{
  UI_UI * ui=0;
  /* SELECT any ui FROM INSTANCES OF UI */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ui FROM INSTANCES OF UI" );
  ui = (UI_UI *) Escher_SetGetAny( &pG_UI_UI_extent.active );
  /* IF ( empty ui ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty ui )" );
  if ( ( 0 == ui ) ) {
    UI_UIConstants * uiconst=0;
    /* UIConstants::initialize() */
    XTUML_OAL_STMT_TRACE( 2, "UIConstants::initialize()" );
    UI_UIConstants_op_initialize();
    /* SELECT any uiconst FROM INSTANCES OF UIConstants */
    XTUML_OAL_STMT_TRACE( 2, "SELECT any uiconst FROM INSTANCES OF UIConstants" );
    uiconst = (UI_UIConstants *) Escher_SetGetAny( &pG_UI_UIConstants_extent.active );
    /* CREATE OBJECT INSTANCE ui OF UI */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE ui OF UI" );
    ui = (UI_UI *) Escher_CreateInstance( UI_DOMAIN_ID, UI_UI_CLASS_NUMBER );
    /* ASSIGN ui.id = 1 */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN ui.id = 1" );
    ((UI_UI *)xtUML_detect_empty_handle( ui, "UI", "ui.id" ))->id = 1;
    /* ASSIGN ui.socket_id = uiconst.SOCKET_ERROR */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN ui.socket_id = uiconst.SOCKET_ERROR" );
    ((UI_UI *)xtUML_detect_empty_handle( ui, "UI", "ui.socket_id" ))->socket_id = ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SOCKET_ERROR" ))->SOCKET_ERROR;
  }
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      UI  (UI)
 * Component:  UI
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s UI_UI_container[ UI_UI_MAX_EXTENT_SIZE ];
static UI_UI UI_UI_instances[ UI_UI_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_UI_UI_extent = {
  {0}, {0}, &UI_UI_container[ 0 ],
  (Escher_iHandle_t) &UI_UI_instances,
  sizeof( UI_UI ), UI_UI_STATE_1, UI_UI_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      UI  (UI)
 * Component:  UI
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [running]
 */
static void UI_UI_act1( UI_UI *, const Escher_xtUMLEvent_t * const );
static void
UI_UI_act1( UI_UI * self, const Escher_xtUMLEvent_t * const event )
{
  i_t signal_no;UI_UIConstants * uiconst=0;
  /* UIConstants::initialize() */
  XTUML_OAL_STMT_TRACE( 1, "UIConstants::initialize()" );
  UI_UIConstants_op_initialize();
  /* SELECT any uiconst FROM INSTANCES OF UIConstants */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any uiconst FROM INSTANCES OF UIConstants" );
  uiconst = (UI_UIConstants *) Escher_SetGetAny( &pG_UI_UIConstants_extent.active );
  /* ASSIGN signal_no = self.poll() */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN signal_no = self.poll()" );
  signal_no = UI_UI_op_poll(self);
  /* IF ( ( uiconst.SOCKET_ERROR == signal_no ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( uiconst.SOCKET_ERROR == signal_no ) )" );
  if ( ( ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SOCKET_ERROR" ))->SOCKET_ERROR == signal_no ) ) {
    bool res;
    /* ASSIGN self.socket_id = uiconst.SOCKET_ERROR */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN self.socket_id = uiconst.SOCKET_ERROR" );
    ((UI_UI *)xtUML_detect_empty_handle( self, "UI", "self.socket_id" ))->socket_id = ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SOCKET_ERROR" ))->SOCKET_ERROR;
    /* ASSIGN res = TIM::timer_cancel(timer_inst_ref:self.timer) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN res = TIM::timer_cancel(timer_inst_ref:self.timer)" );
    res = TIM_timer_cancel( ((UI_UI *)xtUML_detect_empty_handle( self, "UI", "self.timer" ))->timer );
  }
  else if ( ( ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_START_STOP_PRESSED" ))->SIGNAL_NO_START_STOP_PRESSED == signal_no ) ) {
    /* GENERATE UI4:startStopPressed() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE UI4:startStopPressed() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent4c );
      Escher_SendSelfEvent( e );
    }
  }
  else if ( ( ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_TARGET_PRESSED" ))->SIGNAL_NO_TARGET_PRESSED == signal_no ) ) {
    /* GENERATE UI3:setTargetPressed() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE UI3:setTargetPressed() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent3c );
      Escher_SendSelfEvent( e );
    }
  }
  else if ( ( ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_LAP_RESET_PRESSED" ))->SIGNAL_NO_LAP_RESET_PRESSED == signal_no ) ) {
    /* GENERATE UI5:lapResetPressed() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE UI5:lapResetPressed() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent5c );
      Escher_SendSelfEvent( e );
    }
  }
  else if ( ( ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_LIGHT_PRESSED" ))->SIGNAL_NO_LIGHT_PRESSED == signal_no ) ) {
    /* GENERATE UI6:lightPressed() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE UI6:lightPressed() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent6c );
      Escher_SendSelfEvent( e );
    }
  }
  else if ( ( ((UI_UIConstants *)xtUML_detect_empty_handle( uiconst, "UIConstants", "uiconst.SIGNAL_NO_MODE_PRESSED" ))->SIGNAL_NO_MODE_PRESSED == signal_no ) ) {
    /* GENERATE UI7:modePressed() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE UI7:modePressed() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent7c );
      Escher_SendSelfEvent( e );
    }
  }
}

/*
 * State 2:  [setTargetPressed]
 */
static void UI_UI_act2( UI_UI *, const Escher_xtUMLEvent_t * const );
static void
UI_UI_act2( UI_UI * self, const Escher_xtUMLEvent_t * const event )
{
  /* ::sendTargetPressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::sendTargetPressed(  )" );
  UI_sendTargetPressed();
  /* GENERATE UI8:running() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE UI8:running() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent8c );
    Escher_SendSelfEvent( e );
  }
}

/*
 * State 3:  [startStopPresssed]
 */
static void UI_UI_act3( UI_UI *, const Escher_xtUMLEvent_t * const );
static void
UI_UI_act3( UI_UI * self, const Escher_xtUMLEvent_t * const event )
{
  /* ::sendStartStopPressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::sendStartStopPressed(  )" );
  UI_sendStartStopPressed();
  /* GENERATE UI8:running() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE UI8:running() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent8c );
    Escher_SendSelfEvent( e );
  }
}

/*
 * State 4:  [lapResetPressed]
 */
static void UI_UI_act4( UI_UI *, const Escher_xtUMLEvent_t * const );
static void
UI_UI_act4( UI_UI * self, const Escher_xtUMLEvent_t * const event )
{
  /* ::sendLapResetPressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::sendLapResetPressed(  )" );
  UI_sendLapResetPressed();
  /* GENERATE UI8:running() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE UI8:running() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent8c );
    Escher_SendSelfEvent( e );
  }
}

/*
 * State 5:  [lightPressed]
 */
static void UI_UI_act5( UI_UI *, const Escher_xtUMLEvent_t * const );
static void
UI_UI_act5( UI_UI * self, const Escher_xtUMLEvent_t * const event )
{
  /* ::sendLightPressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::sendLightPressed(  )" );
  UI_sendLightPressed();
  /* GENERATE UI8:running() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE UI8:running() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent8c );
    Escher_SendSelfEvent( e );
  }
}

/*
 * State 6:  [modePressed]
 */
static void UI_UI_act6( UI_UI *, const Escher_xtUMLEvent_t * const );
static void
UI_UI_act6( UI_UI * self, const Escher_xtUMLEvent_t * const event )
{
  /* ::sendModePressed(  ) */
  XTUML_OAL_STMT_TRACE( 1, "::sendModePressed(  )" );
  UI_sendModePressed();
  /* GENERATE UI8:running() TO self */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE UI8:running() TO self" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UI_UIevent8c );
    Escher_SendSelfEvent( e );
  }
}

const Escher_xtUMLEventConstant_t UI_UIevent3c = {
  UI_DOMAIN_ID, UI_UI_CLASS_NUMBER, UI_UIEVENT3NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t UI_UIevent4c = {
  UI_DOMAIN_ID, UI_UI_CLASS_NUMBER, UI_UIEVENT4NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t UI_UIevent5c = {
  UI_DOMAIN_ID, UI_UI_CLASS_NUMBER, UI_UIEVENT5NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t UI_UIevent6c = {
  UI_DOMAIN_ID, UI_UI_CLASS_NUMBER, UI_UIEVENT6NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t UI_UIevent7c = {
  UI_DOMAIN_ID, UI_UI_CLASS_NUMBER, UI_UIEVENT7NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t UI_UIevent8c = {
  UI_DOMAIN_ID, UI_UI_CLASS_NUMBER, UI_UIEVENT8NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t UI_UIevent9c = {
  UI_DOMAIN_ID, UI_UI_CLASS_NUMBER, UI_UIEVENT9NUM,
  ESCHER_IS_INSTANCE_EVENT };


/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t UI_UI_StateEventMatrix[ 6 + 1 ][ 7 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  UI_UI_STATE_1 (running) */
  { UI_UI_STATE_2, UI_UI_STATE_3, UI_UI_STATE_4, UI_UI_STATE_5, UI_UI_STATE_6, EVENT_CANT_HAPPEN, UI_UI_STATE_1 },
  /* row 2:  UI_UI_STATE_2 (setTargetPressed) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UI_UI_STATE_1, EVENT_IS_IGNORED },
  /* row 3:  UI_UI_STATE_3 (startStopPresssed) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UI_UI_STATE_1, EVENT_IS_IGNORED },
  /* row 4:  UI_UI_STATE_4 (lapResetPressed) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UI_UI_STATE_1, EVENT_IS_IGNORED },
  /* row 5:  UI_UI_STATE_5 (lightPressed) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UI_UI_STATE_1, EVENT_IS_IGNORED },
  /* row 6:  UI_UI_STATE_6 (modePressed) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UI_UI_STATE_1, EVENT_IS_IGNORED }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t UI_UI_acts[ 7 ] = {
    (StateAction_t) 0,
    (StateAction_t) UI_UI_act1,  /* running */
    (StateAction_t) UI_UI_act2,  /* setTargetPressed */
    (StateAction_t) UI_UI_act3,  /* startStopPresssed */
    (StateAction_t) UI_UI_act4,  /* lapResetPressed */
    (StateAction_t) UI_UI_act5,  /* lightPressed */
    (StateAction_t) UI_UI_act6  /* modePressed */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 7 ] = {
    "",
    "running",
    "setTargetPressed",
    "startStopPresssed",
    "lapResetPressed",
    "lightPressed",
    "modePressed"
  };

/*
 * instance state machine event dispatching
 */
void
UI_UI_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 6 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = UI_UI_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 6 ) {
        STATE_TXN_START_TRACE( "UI", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *UI_UI_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "UI", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "UI", current_state );
      } else if ( next_state == EVENT_IS_IGNORED ) {
          /* event ignored */
          STATE_TXN_IG_TRACE( "UI", current_state );
      } else {
        /* empty else */
      }
    }
  }
}

