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
#include "CommRobotinoObjects/CommRobotinoIOValuesCore.hh"

// serialization/deserialization operators
//#include "CommRobotinoObjects/CommRobotinoIOValuesACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommRobotinoObjects 
{
	const char* CommRobotinoIOValuesCore::getCompiledHash()
	{
		return CommRobotinoObjectsIDL::REPO_HASH;
	}
	
	void CommRobotinoIOValuesCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommRobotinoObjects::AnalogOutputRequest(idl_CommRobotinoIOValues.analogOutputValues)
		CommRobotinoObjects::AnalogOutputRequest::getAllHashValues(hashes);
		// get hash value(s) for CommRobotinoObjects::DigitalOutputRequest(idl_CommRobotinoIOValues.digitalOutputValues)
		CommRobotinoObjects::DigitalOutputRequest::getAllHashValues(hashes);
	}
	
	void CommRobotinoIOValuesCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommRobotinoIOValuesCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommRobotinoObjects::AnalogOutputRequest(idl_CommRobotinoIOValues.analogOutputValues)
		CommRobotinoObjects::AnalogOutputRequest::checkAllHashValues(hashes);
		// check hash value(s) for CommRobotinoObjects::DigitalOutputRequest(idl_CommRobotinoIOValues.digitalOutputValues)
		CommRobotinoObjects::DigitalOutputRequest::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommRobotinoIOValuesCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ACE_CDR::Float>::const_iterator data_analogInputValuesIt;
		for(data_analogInputValuesIt=data.analogInputValues.begin(); data_analogInputValuesIt!=data.analogInputValues.end(); data_analogInputValuesIt++) {
			boost::hash_combine(seed, *data_analogInputValuesIt);
		}
		std::vector<ACE_CDR::Boolean>::const_iterator data_digitalInputValuesIt;
		for(data_digitalInputValuesIt=data.digitalInputValues.begin(); data_digitalInputValuesIt!=data.digitalInputValues.end(); data_digitalInputValuesIt++) {
			boost::hash_combine(seed, *data_digitalInputValuesIt);
		}
		std::vector<CommRobotinoObjectsIDL::AnalogOutputRequest>::const_iterator data_analogOutputValuesIt;
		for(data_analogOutputValuesIt=data.analogOutputValues.begin(); data_analogOutputValuesIt!=data.analogOutputValues.end(); data_analogOutputValuesIt++) {
			seed += CommRobotinoObjects::AnalogOutputRequest::generateDataHash(*data_analogOutputValuesIt);
		}
		std::vector<CommRobotinoObjectsIDL::DigitalOutputRequest>::const_iterator data_digitalOutputValuesIt;
		for(data_digitalOutputValuesIt=data.digitalOutputValues.begin(); data_digitalOutputValuesIt!=data.digitalOutputValues.end(); data_digitalOutputValuesIt++) {
			seed += CommRobotinoObjects::DigitalOutputRequest::generateDataHash(*data_digitalOutputValuesIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	CommRobotinoIOValuesCore::CommRobotinoIOValuesCore()
	:	idl_CommRobotinoIOValues()
	{  
		setAnalogInputValues(std::vector<float>());
		setDigitalInputValues(std::vector<bool>());
		setAnalogOutputValues(std::vector<CommRobotinoObjects::AnalogOutputRequest>());
		setDigitalOutputValues(std::vector<CommRobotinoObjects::DigitalOutputRequest>());
	}
	
	CommRobotinoIOValuesCore::CommRobotinoIOValuesCore(const DATATYPE &data)
	:	idl_CommRobotinoIOValues(data)
	{  }

	CommRobotinoIOValuesCore::~CommRobotinoIOValuesCore()
	{  }
	
	void CommRobotinoIOValuesCore::to_ostream(std::ostream &os) const
	{
	  os << "CommRobotinoIOValues(";
	  std::vector<float>::const_iterator analogInputValuesIt;
	  std::vector<float> analogInputValuesList = getAnalogInputValuesCopy();
	  for(analogInputValuesIt=analogInputValuesList.begin(); analogInputValuesIt!=analogInputValuesList.end(); analogInputValuesIt++) {
	  	os << *analogInputValuesIt << " ";
	  }
	  std::vector<bool>::const_iterator digitalInputValuesIt;
	  std::vector<bool> digitalInputValuesList = getDigitalInputValuesCopy();
	  for(digitalInputValuesIt=digitalInputValuesList.begin(); digitalInputValuesIt!=digitalInputValuesList.end(); digitalInputValuesIt++) {
	  	os << *digitalInputValuesIt << " ";
	  }
	  std::vector<CommRobotinoObjects::AnalogOutputRequest>::const_iterator analogOutputValuesIt;
	  std::vector<CommRobotinoObjects::AnalogOutputRequest> analogOutputValuesList = getAnalogOutputValuesCopy();
	  for(analogOutputValuesIt=analogOutputValuesList.begin(); analogOutputValuesIt!=analogOutputValuesList.end(); analogOutputValuesIt++) {
	  	analogOutputValuesIt->to_ostream(os);
	  }
	  std::vector<CommRobotinoObjects::DigitalOutputRequest>::const_iterator digitalOutputValuesIt;
	  std::vector<CommRobotinoObjects::DigitalOutputRequest> digitalOutputValuesList = getDigitalOutputValuesCopy();
	  for(digitalOutputValuesIt=digitalOutputValuesList.begin(); digitalOutputValuesIt!=digitalOutputValuesList.end(); digitalOutputValuesIt++) {
	  	digitalOutputValuesIt->to_ostream(os);
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void CommRobotinoIOValuesCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<float>::const_iterator analogInputValuesIt;
		std::vector<float> analogInputValuesList = getAnalogInputValuesCopy();
		counter = 0;
		os << indent << "<analogInputValuesList n=\"" << analogInputValuesList.size() << "\">";
		for(analogInputValuesIt=analogInputValuesList.begin(); analogInputValuesIt!=analogInputValuesList.end(); analogInputValuesIt++) {
			os << indent << "<analogInputValues i=\"" << counter++ << "\">" << *analogInputValuesIt << "</analogInputValues>";
		}
		os << indent << "</analogInputValuesList>";
		std::vector<bool>::const_iterator digitalInputValuesIt;
		std::vector<bool> digitalInputValuesList = getDigitalInputValuesCopy();
		counter = 0;
		os << indent << "<digitalInputValuesList n=\"" << digitalInputValuesList.size() << "\">";
		for(digitalInputValuesIt=digitalInputValuesList.begin(); digitalInputValuesIt!=digitalInputValuesList.end(); digitalInputValuesIt++) {
			os << indent << "<digitalInputValues i=\"" << counter++ << "\">" << *digitalInputValuesIt << "</digitalInputValues>";
		}
		os << indent << "</digitalInputValuesList>";
		std::vector<CommRobotinoObjects::AnalogOutputRequest>::const_iterator analogOutputValuesIt;
		std::vector<CommRobotinoObjects::AnalogOutputRequest> analogOutputValuesList = getAnalogOutputValuesCopy();
		counter = 0;
		os << indent << "<analogOutputValuesList n=\"" << analogOutputValuesList.size() << "\">";
		for(analogOutputValuesIt=analogOutputValuesList.begin(); analogOutputValuesIt!=analogOutputValuesList.end(); analogOutputValuesIt++) {
			os << indent << "<analogOutputValues i=\"" << counter++ << "\">";
			analogOutputValuesIt->to_xml(os, indent);
			os << indent << "</analogOutputValues>";
		}
		os << indent << "</analogOutputValuesList>";
		std::vector<CommRobotinoObjects::DigitalOutputRequest>::const_iterator digitalOutputValuesIt;
		std::vector<CommRobotinoObjects::DigitalOutputRequest> digitalOutputValuesList = getDigitalOutputValuesCopy();
		counter = 0;
		os << indent << "<digitalOutputValuesList n=\"" << digitalOutputValuesList.size() << "\">";
		for(digitalOutputValuesIt=digitalOutputValuesList.begin(); digitalOutputValuesIt!=digitalOutputValuesList.end(); digitalOutputValuesIt++) {
			os << indent << "<digitalOutputValues i=\"" << counter++ << "\">";
			digitalOutputValuesIt->to_xml(os, indent);
			os << indent << "</digitalOutputValues>";
		}
		os << indent << "</digitalOutputValuesList>";
	}
	
	// restore from xml stream
	void CommRobotinoIOValuesCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_analogInputValuesList("<analogInputValuesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_analogInputValues("\">");
		static const Smart::KnuthMorrisPratt kmp_digitalInputValuesList("<digitalInputValuesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_digitalInputValues("\">");
		static const Smart::KnuthMorrisPratt kmp_analogOutputValuesList("<analogOutputValuesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_analogOutputValues("\">");
		static const Smart::KnuthMorrisPratt kmp_digitalOutputValuesList("<digitalOutputValuesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_digitalOutputValues("\">");
		
		if(kmp_analogInputValuesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			float analogInputValuesItem;
			std::vector<float> analogInputValuesList;
			kmp_analogInputValues.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_analogInputValues.search(is)) {
					is >> analogInputValuesItem;
					analogInputValuesList.push_back(analogInputValuesItem);
				}
			}
			setAnalogInputValues(analogInputValuesList);
		}
		if(kmp_digitalInputValuesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			bool digitalInputValuesItem;
			std::vector<bool> digitalInputValuesList;
			kmp_digitalInputValues.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_digitalInputValues.search(is)) {
					is >> digitalInputValuesItem;
					digitalInputValuesList.push_back(digitalInputValuesItem);
				}
			}
			setDigitalInputValues(digitalInputValuesList);
		}
		if(kmp_analogOutputValuesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			CommRobotinoObjects::AnalogOutputRequest analogOutputValuesItem;
			std::vector<CommRobotinoObjects::AnalogOutputRequest> analogOutputValuesList;
			kmp_analogOutputValues.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_analogOutputValues.search(is)) {
					analogOutputValuesItem.from_xml(is);
					analogOutputValuesList.push_back(analogOutputValuesItem);
				}
			}
			setAnalogOutputValues(analogOutputValuesList);
		}
		if(kmp_digitalOutputValuesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			CommRobotinoObjects::DigitalOutputRequest digitalOutputValuesItem;
			std::vector<CommRobotinoObjects::DigitalOutputRequest> digitalOutputValuesList;
			kmp_digitalOutputValues.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_digitalOutputValues.search(is)) {
					digitalOutputValuesItem.from_xml(is);
					digitalOutputValuesList.push_back(digitalOutputValuesItem);
				}
			}
			setDigitalOutputValues(digitalOutputValuesList);
		}
	}
	
	/*
	void CommRobotinoIOValuesCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommRobotinoObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommRobotinoObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommRobotinoIOValuesACE.hh)
		cdr << idl_CommRobotinoIOValues;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommRobotinoIOValues);
		cdr << data_hash;
		// std::cout << "CommRobotinoIOValuesCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommRobotinoIOValuesCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommRobotinoObjectsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see CommRobotinoIOValuesACE.hh)
		cdr >> idl_CommRobotinoIOValues;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommRobotinoIOValues);
		assert(data_hash == own_hash);
		// std::cout << "CommRobotinoIOValuesCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommRobotinoObjects */
