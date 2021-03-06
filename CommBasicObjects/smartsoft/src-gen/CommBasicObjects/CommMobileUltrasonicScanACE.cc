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
#include "CommBasicObjects/CommMobileUltrasonicScanACE.hh"
#include <ace/SString.h>
#include "CommBasicObjects/CommBaseStateACE.hh"
#include "CommBasicObjects/CommUltrasonicScanACE.hh"

// serialization operator for element CommMobileUltrasonicScan
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::CommMobileUltrasonicScan &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element baseState
	good_bit = good_bit && cdr << data.baseState;
	// serialize list-element usScan
	good_bit = good_bit && cdr << data.usScan;
	
	return good_bit;
}

// de-serialization operator for element CommMobileUltrasonicScan
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::CommMobileUltrasonicScan &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element baseState
	good_bit = good_bit && cdr >> data.baseState;
	// deserialize type element usScan
	good_bit = good_bit && cdr >> data.usScan;
	
	return good_bit;
}

// serialization operator for CommunicationObject CommMobileUltrasonicScan
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::CommMobileUltrasonicScan &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommMobileUltrasonicScan
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::CommMobileUltrasonicScan &obj)
{
	return cdr >> obj.set();
}
