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
#ifndef COMMLOCALIZATIONOBJECTS_CPOSE2D_H_
#define COMMLOCALIZATIONOBJECTS_CPOSE2D_H_

#include "CommLocalizationObjects/CPose2DCore.hh"

namespace CommLocalizationObjects {
		
class CPose2D : public CPose2DCore {
	public:
		// default constructors
		CPose2D();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CPose2D(const double &m_phi, const bool &m_is3D, const double &m_x, const double &m_y, const double &m_z);
		
		CPose2D(const CPose2DCore &cPose2D);
		CPose2D(const DATATYPE &cPose2D);
		virtual ~CPose2D();
		
		// use framework specific getter and setter methods from core (base) class
		using CPose2DCore::get;
		using CPose2DCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CPose2D &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommLocalizationObjects */
#endif /* COMMLOCALIZATIONOBJECTS_CPOSE2D_H_ */