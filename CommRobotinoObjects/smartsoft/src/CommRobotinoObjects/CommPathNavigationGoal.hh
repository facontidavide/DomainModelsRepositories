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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONGOAL_H_
#define COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONGOAL_H_

#include "CommRobotinoObjects/CommPathNavigationGoalCore.hh"

namespace CommRobotinoObjects {
		
class CommPathNavigationGoal : public CommPathNavigationGoalCore {
	public:
		// default constructors
		CommPathNavigationGoal();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPathNavigationGoal(const int &goalID, const CommRobotinoObjects::CommNavigationPaths &paths, const double &goalX, const double &goalY, const int &goal_id, const double &startX, const double &startY, const int &start_id);
		
		CommPathNavigationGoal(const CommPathNavigationGoalCore &commPathNavigationGoal);
		CommPathNavigationGoal(const DATATYPE &commPathNavigationGoal);
		virtual ~CommPathNavigationGoal();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPathNavigationGoalCore::get;
		using CommPathNavigationGoalCore::set;
		
		//
		// feel free to add customized methods here
		//

		void setGoal(double startX, double startY, int startID, double goalX, double goalY, int goalID, double unit = 1.0);

		void getGoal(double& startX, double& startY, int& startID, double& goalX, double &goalY, int& goalID, double unit = 1.0);
};

inline std::ostream &operator<<(std::ostream &os, const CommPathNavigationGoal &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONGOAL_H_ */