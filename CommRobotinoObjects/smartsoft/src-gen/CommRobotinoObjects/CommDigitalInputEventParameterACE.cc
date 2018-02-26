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
#include "CommRobotinoObjects/CommDigitalInputEventParameterACE.hh"
#include <ace/SString.h>

// serialization operator for element CommDigitalInputEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommDigitalInputEventParameter &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element digitalInputValuesNumber
	good_bit = good_bit && cdr.write_ulong(data.digitalInputValuesNumber);
	// serialize list-element digitalInputValue
	good_bit = good_bit && cdr.write_boolean(data.digitalInputValue);
	
	return good_bit;
}

// de-serialization operator for element CommDigitalInputEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommDigitalInputEventParameter &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element digitalInputValuesNumber
	good_bit = good_bit && cdr.read_ulong(data.digitalInputValuesNumber);
	// deserialize type element digitalInputValue
	good_bit = good_bit && cdr.read_boolean(data.digitalInputValue);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommDigitalInputEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommDigitalInputEventParameter &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommDigitalInputEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommDigitalInputEventParameter &obj)
{
	return cdr >> obj.set();
}