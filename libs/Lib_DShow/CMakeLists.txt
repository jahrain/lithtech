cmake_minimum_required (VERSION 2.8)
project (Lib_DShow)

include_directories(.
	"../../vendor/dxsdk_aug2007/Include")

add_library(Lib_DShow STATIC
	amfilter.cpp
	amvideo.cpp
	combase.cpp
	cprop.cpp
	ctlutil.cpp
	ddmm.cpp
	dllentry.cpp
	dllsetup.cpp
	mtype.cpp
	outputq.cpp
	pstream.cpp
	pullpin.cpp
	refclock.cpp
	renbase.cpp
	schedule.cpp
	seekpt.cpp
	source.cpp
	strmctl.cpp
	sysclock.cpp
	transfrm.cpp
	transip.cpp
	videoctl.cpp
	vtrans.cpp
	winctrl.cpp
	winutil.cpp
	wxdebug.cpp
	wxlist.cpp
	wxutil.cpp)