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
#include "CommLocalizationObjects/CMatrixDouble22ACE.hh"
#include <ace/SString.h>

// serialization operator for element CMatrixDouble22
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjectsIDL::CMatrixDouble22 &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element m_00
	good_bit = good_bit && cdr.write_double(data.m_00);
	// serialize list-element m_01
	good_bit = good_bit && cdr.write_double(data.m_01);
	// serialize list-element m_10
	good_bit = good_bit && cdr.write_double(data.m_10);
	// serialize list-element m_11
	good_bit = good_bit && cdr.write_double(data.m_11);
	
	return good_bit;
}

// de-serialization operator for element CMatrixDouble22
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjectsIDL::CMatrixDouble22 &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element m_00
	good_bit = good_bit && cdr.read_double(data.m_00);
	// deserialize type element m_01
	good_bit = good_bit && cdr.read_double(data.m_01);
	// deserialize type element m_10
	good_bit = good_bit && cdr.read_double(data.m_10);
	// deserialize type element m_11
	good_bit = good_bit && cdr.read_double(data.m_11);
	
	return good_bit;
}

// serialization operator for CommunicationObject CMatrixDouble22
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjects::CMatrixDouble22 &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CMatrixDouble22
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjects::CMatrixDouble22 &obj)
{
	return cdr >> obj.set();
}
