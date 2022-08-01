#include <stdio.h>
#include "bitmap.h"


/* Determine whether the value is valid or invalid */

enum Validity ValidateRH(RelHumidity rh)
{
	if (rh > 45) return Valid;
	else return Invalid;
	// to be implemented..
}

/* Determine whether the value is valid or invalid */

enum Validity ValidateTemp(Temp t)
{
	if (t < 0) return Valid;
	else return Invalid;
	 // to be implemented...
}

/* Determine whether the value is valid or invalid */

enum Validity ValidateHourOfDay(HourOfDay hr)
{
	if (hr > 0) return Valid;
	else return Invalid;
	 // to be implemented...
}

/* Determines the category of Relative Humidity based on Table 1 */

enum RHCategory GetRHCategory(RelHumidity rh)
{
 // to be implemented...
 if(rh>=45 && rh<=50) return Soothing;
 else if(rh>=51 && rh<=60) return Humid;
 else if(rh>=61 && rh<=70) return VeryHumid;
 else return InvalidRHCategory;
}

/* Determines the category of Temperature based on Table 2 */

enum TempCategory GetTempCategory(Temp t)
{
	if(t>=0 && t<=20) return Cold;
	 else if(t>=21 && t<=30) return Pleasant;
	 else if(t>=31 && t<=50) return Hot;
	 else return InvalidTempCategory;
	 // to be implemented...
}

/* Determines the category of Hour of day based on Table 3 */

enum HourOfDayCategory GetHourOfDayCategory(HourOfDay h)
{
	if(h>=0 && h<=10) return Morning;
	 else if(h>=11 && h<=17) return Afternoon;
	 else if(h>=18 && h<=23) return Evening;
	 else return InvalidHrCategory;
	 // to be implemented...
}

/* Determines the AC fan speed based on condition  in Table 4 */

enum ACFanSpeed GetACFanSpeed(RelHumidity rh, Temp t, HourOfDay h)
{
	if(rh>=45 && rh<=50) {
		if(t>=0 && t<=20){
			if(h>=0 && h<=10) return Off;
			else if(h>=11 && h<=17) return Normal;
			else if(h>=18 && h<=23) return Off;
		} 
		else if(t>=21 && t<=30) {
			if(h>=0 && h<=10) return Off;
			else if(h>=11 && h<=17) return High;
			else if(h>=18 && h<=23) return Normal;
		}
		else if(t>=31 && t<=50) {
			if(h>=0 && h<=10) return Normal;
			else if(h>=11 && h<=17) return VeryHigh;
			else if(h>=18 && h<=23) return Normal;
		}
	}
	else if(rh>=51 && rh<=60) {
		if(t>=0 && t<=20){
			if(h>=0 && h<=10) return Normal;
			else if(h>=11 && h<=17) return High;
			else if(h>=18 && h<=23) return Normal;
		} 
		else if(t>=21 && t<=30) {
			if(h>=0 && h<=10) return Normal;
			else if(h>=11 && h<=17) return High;
			else if(h>=18 && h<=23) return Off;
		}
		else if(t>=31 && t<=50) {
			if(h>=0 && h<=10) return High;
			else if(h>=11 && h<=17) return VeryHigh;
			else if(h>=18 && h<=23) return VeryHigh;
		}
	}
	else if(rh>=61 && rh<=70) {
		if(t>=0 && t<=20){
			if(h>=0 && h<=10) return High;
			else if(h>=11 && h<=17) return VeryHigh;
			else if(h>=18 && h<=23) return VeryHigh;
		} 
		else if(t>=21 && t<=30) {
			if(h>=0 && h<=10) return Normal;
			else if(h>=11 && h<=17) return Normal;
			else if(h>=18 && h<=23) return VeryHigh;
		}
		else if(t>=31 && t<=50) {
			if(h>=0 && h<=10) return High;
			else if(h>=11 && h<=17) return VeryHigh;
			else if(h>=18 && h<=23) return High;
		}
	} 
	 // to be implemented...
}


