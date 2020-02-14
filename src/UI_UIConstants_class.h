/*----------------------------------------------------------------------------
 * File:  UI_UIConstants_class.h
 *
 * Class:       UIConstants  (UIConstants)
 * Component:   UI
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef UI_UICONSTANTS_CLASS_H
#define UI_UICONSTANTS_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   UIConstants  (UIConstants)
 */
struct UI_UIConstants {

  /* application analysis class attributes */
  i_t id;  /* * id */
  i_t SIGNAL_NO_NULL_SIGNAL;  /* - SIGNAL_NO_NULL_SIGNAL */
  i_t SIGNAL_NO_START_STOP_PRESSED;  /* - SIGNAL_NO_START_STOP_PRESSED */
  i_t SIGNAL_NO_TARGET_PRESSED;  /* - SIGNAL_NO_TARGET_PRESSED */
  i_t SIGNAL_NO_LAP_RESET_PRESSED;  /* - SIGNAL_NO_LAP_RESET_PRESSED */
  i_t SIGNAL_NO_LIGHT_PRESSED;  /* - SIGNAL_NO_LIGHT_PRESSED */
  i_t SIGNAL_NO_MODE_PRESSED;  /* - SIGNAL_NO_MODE_PRESSED */
  i_t SOCKET_ERROR;  /* - SOCKET_ERROR */
  i_t tick_period;  /* - tick_period */
};
void UI_UIConstants_op_initialize( void );


#define UI_UIConstants_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_UI_UIConstants_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* UI_UICONSTANTS_CLASS_H */
