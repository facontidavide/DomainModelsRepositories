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
#ifndef COMMROBOTINOOBJECTS_COMMNAVIGATIONPATHS_DATA_H_
#define COMMROBOTINOOBJECTS_COMMNAVIGATIONPATHS_DATA_H_

#include "CommRobotinoObjects/CommPathNodeData.hh"

#include <vector>
#include <string>

namespace CommRobotinoObjectsIDL 
{
	typedef std::vector<CommRobotinoObjectsIDL::CommPathNode> CommNavigationPaths_nodes_type;
	typedef std::vector<double> CommNavigationPaths_pathWidth_type;
	struct CommNavigationPaths
	{
		CommNavigationPaths_nodes_type nodes;
		CommNavigationPaths_pathWidth_type pathWidth;
		std::string robotID;
  	};
};

#endif /* COMMROBOTINOOBJECTS_COMMNAVIGATIONPATHS_DATA_H_ */