/*----------------------------------------------------------------------------
 * File:  UI_UI_class.h
 *
 * Class:       UI  (UI)
 * Component:   UI
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef UI_UI_CLASS_H
#define UI_UI_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   UI  (UI)
 */
struct UI_UI {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t socket_id;  /* - socket_id */
  Escher_Timer_t * timer;  /* - timer */
};
void UI_UI_op_connect( void );
i_t UI_UI_op_poll( UI_UI * );
void UI_UI_op_setData( UI_UI *, const i_t, const r_t );
void UI_UI_op_setIndicator( UI_UI *, const i_t );
void UI_UI_op_setTime( UI_UI *, const i_t );
void UI_UI_op_initialize( void );


#define UI_UI_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_UI_UI_extent;

/*
 * instance event:  UI3:'setTargetPressed'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_UIevent3;
extern const Escher_xtUMLEventConstant_t UI_UIevent3c;
/*
 * instance event:  UI4:'startStopPressed'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_UIevent4;
extern const Escher_xtUMLEventConstant_t UI_UIevent4c;
/*
 * instance event:  UI5:'lapResetPressed'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_UIevent5;
extern const Escher_xtUMLEventConstant_t UI_UIevent5c;
/*
 * instance event:  UI6:'lightPressed'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_UIevent6;
extern const Escher_xtUMLEventConstant_t UI_UIevent6c;
/*
 * instance event:  UI7:'modePressed'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_UIevent7;
extern const Escher_xtUMLEventConstant_t UI_UIevent7c;
/*
 * instance event:  UI8:'running'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_UIevent8;
extern const Escher_xtUMLEventConstant_t UI_UIevent8c;
/*
 * instance event:  UI9:'tick'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UI_UIevent9;
extern const Escher_xtUMLEventConstant_t UI_UIevent9c;
/*
 * union of events targeted towards 'UI' state machine
 */
typedef union {
  UI_UIevent3 ui3_1;  
  UI_UIevent4 ui4_2;  
  UI_UIevent5 ui5_3;  
  UI_UIevent6 ui6_4;  
  UI_UIevent7 ui7_5;  
  UI_UIevent8 ui8_6;  
  UI_UIevent9 ui9_7;  
} UI_UI_Events_u;
/*
 * enumeration of state model states for class
 */
#define UI_UI_STATE_1 1  /* state [1]:  (running) */
#define UI_UI_STATE_2 2  /* state [2]:  (setTargetPressed) */
#define UI_UI_STATE_3 3  /* state [3]:  (startStopPresssed) */
#define UI_UI_STATE_4 4  /* state [4]:  (lapResetPressed) */
#define UI_UI_STATE_5 5  /* state [5]:  (lightPressed) */
#define UI_UI_STATE_6 6  /* state [6]:  (modePressed) */
/*
 * enumeration of state model event numbers
 */
#define UI_UIEVENT3NUM 0  /* UI3:'setTargetPressed' */
#define UI_UIEVENT4NUM 1  /* UI4:'startStopPressed' */
#define UI_UIEVENT5NUM 2  /* UI5:'lapResetPressed' */
#define UI_UIEVENT6NUM 3  /* UI6:'lightPressed' */
#define UI_UIEVENT7NUM 4  /* UI7:'modePressed' */
#define UI_UIEVENT8NUM 5  /* UI8:'running' */
#define UI_UIEVENT9NUM 6  /* UI9:'tick' */
extern void UI_UI_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* UI_UI_CLASS_H */
