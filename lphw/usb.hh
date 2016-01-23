/******************************************************************
 * Usb.hh
 *
 *  Created on: Jan 8, 2016
 *      Author: root
 ******************************************************************/

#ifndef USB_HH_
#define USB_HH_

#include <stdbool.h>
#include <stdint.h>
#include "usblib.h"
#include "device/usbdevice.h"

#ifndef __cplusplus

void USBInterruptHdl(void);

#else
namespace lphw
{

/*******************************************************************
 *
 *******************************************************************/
class Usb
{
	private:
		static uint8_t u8Value;
	public:
		Usb();
		virtual ~Usb();
		static void init(void);
		static void vRequestIntHandler(void * pvInstance, tUSBRequest *pUSBRequest);
		static uint8_t get_value();
};

} /* namespace lphw */
#endif /* __cplusplus */
#endif /* USB_HH_ */
