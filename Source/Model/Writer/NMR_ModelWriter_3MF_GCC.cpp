/*++

Copyright (C) 2015 Microsoft Corporation
Copyright (C) 2015 netfabb GmbH (Original Author)

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Abstract:

NMR_ModelWriter_3MF_GCC.cpp implements the Native Model Repair 3MF Model Writer
Class for GCC. This model writer exports the in memory represenation into a 3MF
file, using a native ZIP implementation.

--*/

#include "Model/Writer/NMR_ModelWriter_3MF_GCC.h" 
#include "Model/Classes/NMR_ModelConstants.h" 
#include "Common/NMR_Exception.h" 
#include "Common/NMR_Exception_Windows.h" 
#include "Common/Platform/NMR_XmlWriter.h" 
#include <sstream>

namespace NMR {
	
	CModelWriter_3MF_GCC::CModelWriter_3MF_GCC(_In_ PModel pModel)
		: CModelWriter_3MF(pModel)
	{
		// empty on purpose
	}

	// These are OPC dependent functions
	void CModelWriter_3MF_GCC::createPackage(_In_ CModel * pModel)
	{
		throw CNMRException (NMR_ERROR_NOTIMPLEMENTED);
	}

	void CModelWriter_3MF_GCC::releasePackage()
	{
		throw CNMRException (NMR_ERROR_NOTIMPLEMENTED);
	}

	void CModelWriter_3MF_GCC::writePackageToStream(_In_ PExportStream pStream)
	{
		throw CNMRException (NMR_ERROR_NOTIMPLEMENTED);
	}

}
