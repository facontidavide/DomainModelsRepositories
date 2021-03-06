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
#include "CommRobotinoObjects/CommPlannerGoalListACE.hh"
#include <ace/SString.h>

// serialization operator for element CommPlannerGoalList
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommPlannerGoalList &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element id
	good_bit = good_bit && cdr.write_long(data.id);
	// serialize list-element flag
	good_bit = good_bit && cdr.write_long(data.flag);
	// serialize list-element goalXvector
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.goalXvector.size());
	good_bit = good_bit && cdr.write_double_array(data.goalXvector.data(), data.goalXvector.size());
	// serialize list-element goalYvector
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.goalYvector.size());
	good_bit = good_bit && cdr.write_double_array(data.goalYvector.data(), data.goalYvector.size());
	// serialize list-element nodeObstacleVector
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.nodeObstacleVector.size());
	good_bit = good_bit && cdr.write_double_array(data.nodeObstacleVector.data(), data.nodeObstacleVector.size());
	// serialize list-element finalGoalX
	good_bit = good_bit && cdr.write_double(data.finalGoalX);
	// serialize list-element finalGoalY
	good_bit = good_bit && cdr.write_double(data.finalGoalY);
	
	return good_bit;
}

// de-serialization operator for element CommPlannerGoalList
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommPlannerGoalList &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element id
	good_bit = good_bit && cdr.read_long(data.id);
	// deserialize type element flag
	good_bit = good_bit && cdr.read_long(data.flag);
	// deserialize list-type element goalXvector
	ACE_CDR::ULong data_goalXvectorNbr;
	good_bit = good_bit && cdr >> data_goalXvectorNbr;
	data.goalXvector.resize(data_goalXvectorNbr);
	good_bit = good_bit && cdr.read_double_array(data.goalXvector.data(), data_goalXvectorNbr);
	// deserialize list-type element goalYvector
	ACE_CDR::ULong data_goalYvectorNbr;
	good_bit = good_bit && cdr >> data_goalYvectorNbr;
	data.goalYvector.resize(data_goalYvectorNbr);
	good_bit = good_bit && cdr.read_double_array(data.goalYvector.data(), data_goalYvectorNbr);
	// deserialize list-type element nodeObstacleVector
	ACE_CDR::ULong data_nodeObstacleVectorNbr;
	good_bit = good_bit && cdr >> data_nodeObstacleVectorNbr;
	data.nodeObstacleVector.resize(data_nodeObstacleVectorNbr);
	good_bit = good_bit && cdr.read_double_array(data.nodeObstacleVector.data(), data_nodeObstacleVectorNbr);
	// deserialize type element finalGoalX
	good_bit = good_bit && cdr.read_double(data.finalGoalX);
	// deserialize type element finalGoalY
	good_bit = good_bit && cdr.read_double(data.finalGoalY);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommPlannerGoalList
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommPlannerGoalList &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommPlannerGoalList
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommPlannerGoalList &obj)
{
	return cdr >> obj.set();
}
