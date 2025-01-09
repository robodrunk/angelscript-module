/*
 AngelCode Scripting Library
 Copyright (c) 2003-2012 Andreas Jonsson
 
 This software is provided 'as-is', without any express or implied
 warranty. In no event will the authors be held liable for any
 damages arising from the use of this software.
 
 Permission is granted to anyone to use this software for any
 purpose, including commercial applications, and to alter it and
 redistribute it freely, subject to the following restrictions:
 
 1. The origin of this software must not be misrepresented; you
 must not claim that you wrote the original software. If you use
 this software in a product, an acknowledgment in the product
 documentation would be appreciated but is not required.
 
 2. Altered source versions must be plainly marked as such, and
 must not be misrepresented as being the original software.
 
 3. This notice may not be removed or altered from any source
 distribution.
 
 The original version of this library can be located at:
 http://www.angelcode.com/angelscript/
 
 Andreas Jonsson
 andreas@angelcode.com
*/

/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.md file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:                 angelscript
  vendor:             angelscript
  version:            2.38.0
  name:               Angelscript Scripting
  description:        Convenient Scripting Library
  website:            https://www.angelcode.com/angelscript/
  license:            zlib
  minimumCppStandard: 17
  dependencies:       
  windowsLibs:        angelscript

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#pragma once
#define ANGELSCRIPT_H_INCLUDED

#ifndef ANGELSCRIPT_H
 #include "angelscript-mirror/sdk/angelscript/include/angelscript.h"
#endif

#ifndef AS_GEN_WRAPPER_H
 #include "angelscript-mirror/sdk/add_on/autowrapper/aswrappedcall.h"
#endif

#ifndef CONTEXTMGR_H
 #include "angelscript-mirror/sdk/add_on/contextmgr/contextmgr.h"
#endif

#ifndef DEBUGGER_H
 #include "angelscript-mirror/sdk/add_on/debugger/debugger.h"
#endif

#ifndef SCRIPTANY_H
 #include "angelscript-mirror/sdk/add_on/scriptany/scriptany.h"
#endif

#ifndef SCRIPTARRAY_H
 #include "angelscript-mirror/sdk/add_on/scriptarray/scriptarray.h"
#endif

#ifndef SCRIPTBUILDER_H
 #include "angelscript-mirror/sdk/add_on/scriptbuilder/scriptbuilder.h"
#endif

#ifndef SCRIPTDICTIONARY_H
 #include "angelscript-mirror/sdk/add_on/scriptdictionary/scriptdictionary.h"
#endif

#ifndef SCRIPTFILE_H
 #include "angelscript-mirror/sdk/add_on/scriptfile/scriptfile.h"
#endif

#ifndef SCRIPTHANDLE_H
 #include "angelscript-mirror/sdk/add_on/scripthandle/scripthandle.h"
#endif

#ifndef SCRIPTHELPER_H
 #include "angelscript-mirror/sdk/add_on/scripthelper/scripthelper.h"
#endif

#ifndef SCRIPTMATH_H
 #include "angelscript-mirror/sdk/add_on/scriptmath/scriptmath.h"
#endif

#ifndef SCRIPTMATHCOMPLEX_H
 #include "angelscript-mirror/sdk/add_on/scriptmath/scriptmathcomplex.h"
#endif

#ifndef SCRIPTSTDSTRING_H
 #include "angelscript-mirror/sdk/add_on/scriptstdstring/scriptstdstring.h"
#endif

#ifndef SERIALIZER_H
 #include "angelscript-mirror/sdk/add_on/serializer/serializer.h"
#endif
