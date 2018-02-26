//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
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

// --------------------------------------------------------------------------
//
//  Copyright (C) 2008 Christian Schlegel, Andreas Steck
//
//        schlegel@hs-ulm.de
//        steck@hs-ulm.de
//
//        ZAFH Servicerobotik Ulm
//        University of Applied Sciences
//        Prittwitzstr. 10
//        D-89075 Ulm
//        Germany
//
//  This file is part of the "SmartSoft Communication Classes".
//  It provides basic standardized data types for communication between
//  different components in the mobile robotics context. These classes
//  are designed to be used in conjunction with the SmartSoft Communication
//  Library.
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// --------------------------------------------------------------------------


#ifndef COMMNAVIGATIONOBJECTS_COMMGRIDMAP_H_
#define COMMNAVIGATIONOBJECTS_COMMGRIDMAP_H_

#include "CommNavigationObjects/CommGridMapCore.hh"
#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>

// --------------------------------------------------------------------
// Values for the actual map
// 0-127    denote traversability with 0 completely free
// 128-255  special values
// --------------------------------------------------------------------
#define MAPPER_FREE          0
#define MAPPER_OBSTACLE      128
#define MAPPER_GROWING       129
#define MAPPER_UNDELETABLE   130
#define MAPPER_UNKNOWN 		 205

// --------------------------------------------------------------------
// Values to define obstacle growing
// --------------------------------------------------------------------
#define MAPPER_GROWING_NO          0
#define MAPPER_GROWING_CIRCLE_16   1
#define MAPPER_GROWING_CIRCLE_8    2
#define MAPPER_GROWING_STAR_16     3
#define MAPPER_GROWING_STAR_32     4
#define MAPPER_GROWING_CIRCLE_20   5
#define MAPPER_GROWING_CIRCLE_40   6
#define MAPPER_GROWING_CIRCLE_32   7

namespace CommNavigationObjects {
		
class CommGridMap : public CommGridMapCore {
	public:
		// default constructors
		CommGridMap();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommGridMap(const unsigned int &id, const int &updateCount, const bool &is_valid, const CommBasicObjects::CommTimeStamp &time, const int &xOffsetMM, const int &yOffsetMM, const int &xOffsetCells, const int &yOffsetCells, const int &cellSizeMM, const unsigned int &xSizeMM, const unsigned int &ySizeMM, const unsigned int &xSizeCells, const unsigned int &ySizeCells, const unsigned int &size, const std::vector<unsigned char> &cell);
		
		CommGridMap(const CommGridMapCore &commGridMap);
		CommGridMap(const DATATYPE &commGridMap);
		virtual ~CommGridMap();
		
		// use framework specific getter and setter methods from core (base) class
		using CommGridMapCore::get;
		using CommGridMapCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline std::vector<unsigned char> getCellRef()
		{
			std::vector<unsigned char> local;
			for(unsigned i=0; i<idl_CommGridMap.cell.size(); ++i) {
				local.push_back(idl_CommGridMap.cell[i]);
			}
			return local;
			//return idl_CommGridMap.cell;
		}

		inline void allocateMap(){
			idl_CommGridMap.cell.resize(idl_CommGridMap.size);
		}

		inline unsigned int getCellSizeMM() const
		{
			return idl_CommGridMap.cellSizeMM;
		}
		inline void setCellSizeMM(const unsigned int &cellSizeMM)
		{
			idl_CommGridMap.cellSizeMM = cellSizeMM;
		}

		inline unsigned int getId() const
		{
			return idl_CommGridMap.id;
		}
		inline void setId(const unsigned int &id)
		{
			idl_CommGridMap.id = id;
		}

		inline bool getIs_valid() const
		{
			return idl_CommGridMap.is_valid;
		}
		inline void setIs_valid(const bool &is_valid)
		{
			idl_CommGridMap.is_valid = is_valid;
		}

		inline unsigned int getSize() const
		{
			return idl_CommGridMap.size;
		}
		inline void setSize(const unsigned int &size)
		{
			idl_CommGridMap.size = size;
		}

		inline CommBasicObjects::CommTimeStamp getTime() const
		{
			return CommBasicObjects::CommTimeStamp(idl_CommGridMap.time);
		}
		inline void setTime(const CommBasicObjects::CommTimeStamp &time)
		{
			idl_CommGridMap.time = time;
		}

		inline int getXOffsetCells() const
		{
			return idl_CommGridMap.xOffsetCells;
		}
		inline void setXOffsetCells(const int &xOffsetCells)
		{
			idl_CommGridMap.xOffsetCells = xOffsetCells;
		}

		inline int getXOffsetMM() const
		{
			return idl_CommGridMap.xOffsetMM;
		}
		inline void setXOffsetMM(const int &xOffsetMM)
		{
			idl_CommGridMap.xOffsetMM = xOffsetMM;
		}

		inline unsigned int getXSizeCells() const
		{
			return idl_CommGridMap.xSizeCells;
		}
		inline void setXSizeCells(const unsigned int &xSizeCells)
		{
			idl_CommGridMap.xSizeCells = xSizeCells;
		}

		inline unsigned int getXSizeMM() const
		{
			return idl_CommGridMap.xSizeMM;
		}
		inline void setXSizeMM(const unsigned int &xSizeMM)
		{
			idl_CommGridMap.xSizeMM = xSizeMM;
		}

		inline int getYOffsetCells() const
		{
			return idl_CommGridMap.yOffsetCells;
		}
		inline void setYOffsetCells(const int &yOffsetCells)
		{
			idl_CommGridMap.yOffsetCells = yOffsetCells;
		}

		inline int getYOffsetMM() const
		{
			return idl_CommGridMap.yOffsetMM;
		}
		inline void setYOffsetMM(const int &yOffsetMM)
		{
			idl_CommGridMap.yOffsetMM = yOffsetMM;
		}

		inline unsigned int getYSizeCells() const
		{
			return idl_CommGridMap.ySizeCells;
		}
		inline void setYSizeCells(const unsigned int &ySizeCells)
		{
			idl_CommGridMap.ySizeCells = ySizeCells;
		}

		inline unsigned int getYSizeMM() const
		{
			return idl_CommGridMap.ySizeMM;
		}
		inline void setYSizeMM(const unsigned int &ySizeMM)
		{
			idl_CommGridMap.ySizeMM = ySizeMM;
		}

		//
		// add your customized interface here
		//

		/// extract all relevant parameters from the communication class of the map
		int get_parameter( unsigned int &id,
				bool &is_valid,
				struct timeval &time,
				int &xOffsetMM,
				int &yOffsetMM,
				int &xOffsetCells,
				int &yOffsetCells,
				unsigned int &cellSizeMM,
				unsigned int &xSizeMM,
				unsigned int &ySizeMM,
				unsigned int &xSizeCells,
				unsigned int &ySizeCells ) const;

		/// extract a cell from the communication class of the map
		inline unsigned char get_cells(unsigned int xcell, unsigned int ycell) const
		{
			return ( idl_CommGridMap.cell[xcell+ycell*idl_CommGridMap.xSizeCells]);
		}

		inline void set_cells(unsigned int xcell, unsigned int ycell, unsigned char value)
		{
			idl_CommGridMap.cell[xcell+ycell*idl_CommGridMap.xSizeCells] = value;
		}

        /// save the map in X11 XPM format
        void save_xpm( std::ostream &os ) const;



		/**
		      Get the time stamp.
		 */
		inline CommBasicObjects::CommTimeStamp get_time_stamp() const { return CommBasicObjects::CommTimeStamp(idl_CommGridMap.time); }

		/**
		      Set the time stamp.
		 */
		inline void set_time_stamp(const CommBasicObjects::CommTimeStamp &ts) { idl_CommGridMap.time = ts; }
};

inline std::ostream &operator<<(std::ostream &os, const CommGridMap &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommNavigationObjects */
#endif /* COMMNAVIGATIONOBJECTS_COMMGRIDMAP_H_ */