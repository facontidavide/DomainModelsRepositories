//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMNAVIGATIONOBJECTS_PLANNEREVENTTYPE_ENUM_H_
#define COMMNAVIGATIONOBJECTS_PLANNEREVENTTYPE_ENUM_H_

#include <CommNavigationObjects/enumPlannerEventTypeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace CommNavigationObjects {
	
	class PlannerEventType {
	private:
		CommNavigationObjectsIDL::PlannerEventType value;
		
	public:
		enum ENUM_PlannerEventType {
			ENUM_VALUE_UNDEFINED = 0,
			PLANNER_NO_ERROR = 1,
			PLANNER_UNKNOWN_ERROR = 2,
			PLANNER_NO_GOAL_AVAILABLE = 3,
			PLANNER_GOAL_OK = 4,
			PLANNER_GOAL_NOT_MARKED = 5,
			PLANNER_START_OCCUPIED_OBSTACLE = 6,
			PLANNER_START_OCCUPIED_GOAL = 7,
			PLANNER_NO_PATH = 8,
			PLANNER_PATH_FOUND = 9,
			PLANNER_WRONG_MAPID = 10,
			PLANNER_INVALID_MAP = 11,
			PLANNER_UNKNOWN = 12
		};
		
		// default constructor
		PlannerEventType() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		PlannerEventType(ENUM_PlannerEventType e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		PlannerEventType(CommNavigationObjectsIDL::PlannerEventType e) {
			value = e;
		}
		
		//const CommNavigationObjectsIDL::PlannerEventType& get() const { return value; }
		
		// ENUM operator
		operator ENUM_PlannerEventType() const {
			return static_cast<ENUM_PlannerEventType>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_PlannerEventType t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case PLANNER_NO_ERROR:
					result = "PlannerEventType::PLANNER_NO_ERROR";
					break;
				case PLANNER_UNKNOWN_ERROR:
					result = "PlannerEventType::PLANNER_UNKNOWN_ERROR";
					break;
				case PLANNER_NO_GOAL_AVAILABLE:
					result = "PlannerEventType::PLANNER_NO_GOAL_AVAILABLE";
					break;
				case PLANNER_GOAL_OK:
					result = "PlannerEventType::PLANNER_GOAL_OK";
					break;
				case PLANNER_GOAL_NOT_MARKED:
					result = "PlannerEventType::PLANNER_GOAL_NOT_MARKED";
					break;
				case PLANNER_START_OCCUPIED_OBSTACLE:
					result = "PlannerEventType::PLANNER_START_OCCUPIED_OBSTACLE";
					break;
				case PLANNER_START_OCCUPIED_GOAL:
					result = "PlannerEventType::PLANNER_START_OCCUPIED_GOAL";
					break;
				case PLANNER_NO_PATH:
					result = "PlannerEventType::PLANNER_NO_PATH";
					break;
				case PLANNER_PATH_FOUND:
					result = "PlannerEventType::PLANNER_PATH_FOUND";
					break;
				case PLANNER_WRONG_MAPID:
					result = "PlannerEventType::PLANNER_WRONG_MAPID";
					break;
				case PLANNER_INVALID_MAP:
					result = "PlannerEventType::PLANNER_INVALID_MAP";
					break;
				case PLANNER_UNKNOWN:
					result = "PlannerEventType::PLANNER_UNKNOWN";
					break;
				default:
					result = "ENUM_VALUE_UNDEFINED";
					break;
			};
			return result;
		}
		
		// helper method to easily implement output stream
		void to_ostream(std::ostream &os = std::cout) const {
			os << to_string();
		}
		
		// convert to xml stream
		void to_xml(std::ostream &os, const std::string &indent = "") const {
			os << indent << "<value>" << value << "</value>";
		}
		
		// restore from xml stream
		void from_xml(std::istream &is) {
			static const Smart::KnuthMorrisPratt kmp_value("<value>");
			if(kmp_value.search(is)) {
				is >> value;
			}
		}
	
	};
	
	inline std::ostream &operator<<(std::ostream &os, const PlannerEventType &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif
