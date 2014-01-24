//
//  VST3SDK.cpp
//  VST3NetSend
//
//  Created by Vlad Gorloff on 06.01.13.
//  Copyright (c) 2013 Vlad Gorloff. All rights reserved.
//

// Base
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"

#include "base/source/baseiids.cpp"
#include "base/source/classfactory.cpp"
#include "base/source/fatomic.cpp"
#include "base/source/fbuffer.cpp"
#include "base/source/fcpu.cpp"
#include "base/source/fdebug.cpp"
#include "base/source/finitializer.cpp"
#include "base/source/fobject.cpp"
#include "base/source/fpoint.cpp"
#include "base/source/frect.cpp"
#include "base/source/fstreamer.cpp"
#pragma GCC diagnostic ignored "-Wshorten-64-to-32"
#include "base/source/fbitset.cpp"
#include "base/source/fmemory.cpp"
#pragma GCC diagnostic ignored "-Wunsequenced"
#include "base/source/fstring.cpp"
#pragma GCC diagnostic warning "-Wunsequenced"
#pragma GCC diagnostic warning "-Wshorten-64-to-32"
#pragma GCC diagnostic ignored "-Wint-to-void-pointer-cast"
#include "base/source/fthread.cpp"
#pragma GCC diagnostic warning "-Wint-to-void-pointer-cast"
#pragma GCC diagnostic ignored "-Wunused-function"
#include "base/source/updatehandler.cpp"
#pragma GCC diagnostic warning "-Wunused-function"
#include "pluginterfaces/base/conststringtable.cpp"
#include "pluginterfaces/base/funknown.cpp"
#include "base/source/timer.cpp"
#include "base/source/fdynlib.cpp"

// Others
#include "pluginterfaces/base/ustring.cpp"
#include "public.sdk/source/common/pluginview.cpp"
#include "public.sdk/source/main/pluginfactoryvst3.cpp"
#include "public.sdk/source/main/macmain.cpp"
#include "public.sdk/source/vst/vstaudioeffect.cpp"
#include "public.sdk/source/vst/vstbus.cpp"
#include "public.sdk/source/vst/vstcomponent.cpp"
#include "public.sdk/source/vst/vstcomponentbase.cpp"
#include "public.sdk/source/vst/vsteditcontroller.cpp"
#include "public.sdk/source/vst/vstinitiids.cpp"
#include "public.sdk/source/vst/vstparameters.cpp"

#pragma GCC diagnostic warning "-Wnon-virtual-dtor"
