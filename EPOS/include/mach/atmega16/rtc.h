// EPOS ATMega16 RTC Mediator Declarations

// This work is licensed under the EPOS Software License v1.0.
// A copy of this license is available at the EPOS system source tree root.
// A copy of this license is also available online at:
// http://epos.lisha.ufsc.br/EPOS+Software+License+v1.0
// Note that EPOS Software License applies to both source code and executables.

#ifndef __atmega16_rtc_h
#define __atmega16_rtc_h

#include <rtc.h>

__BEGIN_SYS

class ATMega16_RTC: public RTC_Common
{
private:
    static const unsigned int EPOCH_DAYS = Traits<ATMega16_RTC>::EPOCH_DAYS;

public:
    ATMega16_RTC() {}

    static Date date();
    static void date(const Date & d);

    static Second seconds_since_epoch() { 
	return date().to_offset(EPOCH_DAYS); 
    }
};

__END_SYS

#endif
