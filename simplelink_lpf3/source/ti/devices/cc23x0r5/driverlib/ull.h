/******************************************************************************
 *  Filename:       ull.h
 *
 *  Description:    Defines and prototypes for the ULL instruction wrapper
 *                  functions.
 *
 *  Copyright (c) 2024 Texas Instruments Incorporated
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  1) Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 *  2) Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution.
 *
 *  3) Neither the name of the copyright holder nor the names of its
 *     contributors may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************/

#ifndef __ULL_H__
#define __ULL_H__

//*****************************************************************************
//
//! \addtogroup system_control_group
//! @{
//! \addtogroup ull_api
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>

#include "../inc/hw_types.h"
#include "../inc/hw_memmap.h"
#include "../inc/hw_rtc.h"

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! \brief Sync all writes to registers in the ULL domain
//!
//! The SVT and ULL domains are not fully synchronised. If software issues a
//! write to a ULL register followed be a read or write access to an SVT
//! register, the accesses may take effect out of order. That is, the SVT access
//! may happen before the ULL write.
//!
//! This function explicitly synchronises the domains by reading from the ULL
//! domain. When this function returns, all writes to ULL registers are
//! guaranteed to have propagated to hardware.
//!
//! \return None
//!
//
//*****************************************************************************
__STATIC_INLINE void ULLSync(void)
{
    // Read an RTC register to ensure that previous ULL writes have taken effect
    HWREG(RTC_BASE + RTC_O_DESC);
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//! @}
//
//*****************************************************************************

#endif // __ULL_H__
