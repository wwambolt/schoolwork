/*
 * File:    setOper.h  
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    Feb. 11, 2019
 * Purpose: The header file for the setOper class implementation.
 * 
 * Notes:   
 * 
 */

#ifndef SET_SEEN
#define SET_SEEN

class Interval
{
	friend class setOper;
	public:
		Interval();
		Interval(double low_bound, double upp_bound);
	private:
		double upper;
		double lower;
};

class setOper
{
	public:
		//Check if the value x belongs to the given interval.
		static bool in_interval(double x, Interval * interval);

	    //Check if the value x belongs to the intersection of two intervals.
		static bool in_intersection(double x, Interval * inter_a,
			                        Interval * inter_b);

	    //Check if the value x belongs to the union of two intervals.
		static bool in_union(double x, Interval * inter_a,
			                 Interval * inter_b);
	private:
};

#endif