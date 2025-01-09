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

#ifdef ANGELSCRIPT_H_INCLUDED
 /* When you add this cpp file to your project, you mustn't include it in a file where you've
    already included any other headers - just put it inside a file on its own, possibly with your config
    flags preceding it, but don't include anything else. That also includes avoiding any automatic prefix
    header files that the compiler may be using.
 */
 #error "Incorrect use of JUCE cpp file"
#endif

#ifndef WIN32

#include "angelscript-mirror/sdk/angelscript/source/as_atomic.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_builder.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_bytecode.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_arm.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_mips.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_ppc_64.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_ppc.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_sh4.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_x64_gcc.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_x64_mingw.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_x64_msvc.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_x86.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc_xenon.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_callfunc.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_compiler.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_configgroup.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_context.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_datatype.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_gc.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_generic.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_globalproperty.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_memory.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_module.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_objecttype.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_outputbuffer.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_parser.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_restore.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_scriptcode.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_scriptengine.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_scriptfunction.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_scriptnode.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_scriptobject.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_string_util.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_string.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_thread.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_tokenizer.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_typeinfo.cpp"
#include "angelscript-mirror/sdk/angelscript/source/as_variablescope.cpp"

#include "angelscript-mirror/sdk/add_on/contextmgr/contextmgr.cpp"
#include "angelscript-mirror/sdk/add_on/debugger/debugger.cpp"
#include "angelscript-mirror/sdk/add_on/scriptany/scriptany.cpp"

#if __clang__
#pragma clang diagnostic ignored "-Wall"
#endif

 #include "angelscript-mirror/sdk/add_on/scriptarray/scriptarray.cpp"

#if __clang__
#pragma clang diagnostic pop
#endif

#include "angelscript-mirror/sdk/add_on/scriptbuilder/scriptbuilder.cpp"
#include "angelscript-mirror/sdk/add_on/scriptdictionary/scriptdictionary.cpp"
#include "angelscript-mirror/sdk/add_on/scriptfile/scriptfile.cpp"
#include "angelscript-mirror/sdk/add_on/scripthandle/scripthandle.cpp"

#if __clang__
#pragma clang diagnostic ignored "-Wall"
#endif

 #include "angelscript-mirror/sdk/add_on/scripthelper/scripthelper.cpp"

#if __clang__
#pragma clang diagnostic pop
#endif

#include "angelscript-mirror/sdk/add_on/scriptmath/scriptmath.cpp"
#include "angelscript-mirror/sdk/add_on/scriptmath/scriptmathcomplex.cpp"
#include "angelscript-mirror/sdk/add_on/scriptstdstring/scriptstdstring_utils.cpp"

#if __clang__
#pragma clang diagnostic ignored "-Wall"
#endif

 #include "angelscript-mirror/sdk/add_on/scriptstdstring/scriptstdstring.cpp"

#if __clang__
#pragma clang diagnostic pop
#endif

#include "angelscript-mirror/sdk/add_on/serializer/serializer.cpp"

#endif
