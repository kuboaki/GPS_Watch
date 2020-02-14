/*----------------------------------------------------------------------------
 * File:  Location_simulatedGPS_class.h
 *
 * Class:       simulatedGPS  (simulatedGPS)
 * Component:   Location
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef LOCATION_SIMULATEDGPS_CLASS_H
#define LOCATION_SIMULATEDGPS_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   simulatedGPS  (simulatedGPS)
 */
struct Location_simulatedGPS {

  /* application analysis class attributes */
  i_t id;  /* * id */
  r_t initialLatitude;  /* - initialLatitude */
  r_t initialLongitude;  /* - initialLongitude */
  r_t latitudeIncrement;  /* - latitudeIncrement */
  r_t longitudeIncrement;  /* - longitudeIncrement */
  i_t updatePeriod;  /* - updatePeriod */
};
void Location_simulatedGPS_op_initialize( void );


#define Location_simulatedGPS_MAX_EXTENT_SIZE 200
extern Escher_Extent_t pG_Location_simulatedGPS_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* LOCATION_SIMULATEDGPS_CLASS_H */
