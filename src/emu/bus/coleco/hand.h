// license:BSD-3-Clause
// copyright-holders:Curt Coder
/**********************************************************************

    ColecoVision Hand Controller emulation

    Copyright MESS Team.
    Visit http://mamedev.org for licensing and usage restrictions.

**********************************************************************/

#pragma once

#ifndef __COLECO_HAND_CONTROLLER__
#define __COLECO_HAND_CONTROLLER__

#include "emu.h"
#include "ctrl.h"



//**************************************************************************
//  TYPE DEFINITIONS
//**************************************************************************

// ======================> coleco_hand_controller

class coleco_hand_controller : public device_t,
							   public device_colecovision_control_port_interface
{
public:
	// construction/destruction
	coleco_hand_controller(const machine_config &mconfig, const char *tag, device_t *owner, UINT32 clock);

	// optional information overrides
	virtual ioport_constructor device_input_ports() const;

protected:
	// device-level overrides
	virtual void device_start();

	// device_vcs_control_port_interface overrides
	virtual UINT8 joy_r();

private:
	required_ioport m_io_common0;
	required_ioport m_io_common1;
};


// device type definition
extern const device_type COLECO_HAND_CONTROLLER;


#endif
