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
#ifndef COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONEVENTRESULT_ACE_H_
#define COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONEVENTRESULT_ACE_H_

#include "CommRobotinoObjects/CommPathNavigationEventResult.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommPathNavigationEventResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommPathNavigationEventResult &data);

// de-serialization operator for DataStructure CommPathNavigationEventResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommPathNavigationEventResult &data);

// serialization operator for CommunicationObject CommPathNavigationEventResult
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommPathNavigationEventResult &obj);

// de-serialization operator for CommunicationObject CommPathNavigationEventResult
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommPathNavigationEventResult &obj);

#endif /* COMMROBOTINOOBJECTS_COMMPATHNAVIGATIONEVENTRESULT_ACE_H_ */