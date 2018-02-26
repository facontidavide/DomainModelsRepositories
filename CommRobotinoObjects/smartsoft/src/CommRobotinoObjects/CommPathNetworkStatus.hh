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
#ifndef COMMROBOTINOOBJECTS_COMMPATHNETWORKSTATUS_H_
#define COMMROBOTINOOBJECTS_COMMPATHNETWORKSTATUS_H_

#include "CommRobotinoObjects/CommPathNetworkStatusCore.hh"

namespace CommRobotinoObjects {
		
class CommPathNetworkStatus : public CommPathNetworkStatusCore {
	public:
		// default constructors
		CommPathNetworkStatus();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommPathNetworkStatus(const std::vector<CommRobotinoObjects::CommPathNode> &nodes);
		
		CommPathNetworkStatus(const CommPathNetworkStatusCore &commPathNetworkStatus);
		CommPathNetworkStatus(const DATATYPE &commPathNetworkStatus);
		virtual ~CommPathNetworkStatus();
		
		// use framework specific getter and setter methods from core (base) class
		using CommPathNetworkStatusCore::get;
		using CommPathNetworkStatusCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommPathNetworkStatus &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMPATHNETWORKSTATUS_H_ */