# Makefile.am for the AMIGAOS version of `libarch.a'.

bin_PROGRAMS = x64ns x64dtvns x64scns x128ns xvicns xplus4ns xcbm2ns xcbm5x0ns xpetns

x64ns_SOURCES = x64ns.c

x64dtvns_SOURCES = x64dtvns.c

x64scns_SOURCES = x64scns.c

x128ns_SOURCES = x128ns.c

xvicns_SOURCES = xvicns.c

xplus4ns_SOURCES = xplus4ns.c

xcbm2ns_SOURCES = xcbm2ns.c

xcbm5x0ns_SOURCES = xcbm5x0ns.c

xpetns_SOURCES = xpetns.c

INCLUDES = \
	@ARCH_INCLUDES@ \
	-I$(top_builddir)/src \
	-I$(top_srcdir)/src/drive \
	-I$(top_srcdir)/src/c64 \
	-I$(top_srcdir)/src/c64dtv \
	-I$(top_srcdir)/src/c128 \
	-I$(top_srcdir)/src/vic20 \
	-I$(top_srcdir)/src/pet \
	-I$(top_srcdir)/src/plus4 \
	-I$(top_srcdir)/src/cbm2 \
	-I$(top_srcdir)/src/sid \
	-I$(top_srcdir)/src/vdrive \
	-I$(top_srcdir)/src/userport \
	-I$(top_srcdir)/src/imagecontents \
	-I$(top_srcdir)/src/lib/p64 \
	-I$(top_srcdir)/src/platform \
	-I$(top_srcdir)/src

noinst_LIBRARIES = libarch.a

libarch_a_SOURCES = \
	ahi.c \
	ahi.h \
	amigamain.c \
	archdep.c \
	archdep.h \
	blockdev.c \
	c128ui.c \
	c128uires.h \
	c64ui.c \
	c64uires.h \
	c64dtvui.c \
	c64dtvuires.h \
	catweaselmkiii.c \
	cbm2ui.c \
	cbm2uires.h \
	cbm5x0ui.c \
	cbm5x0uires.h \
	console.c \
	cw.h \
	cw_device.c \
	cw_openpci.c \
	cw_os4.c \
	fullscreen.c \
	fullscreenarch.h \
	hardsid.c \
	intl.c \
	intl_funcs.h \
	joy.c \
	joy.h \
	joyai.c \
	joyai.h \
	joyll.c \
	joyll.h \
	kbd.c \
	kbd.h \
	loadlibs.c \
	loadlibs.h \
	memory.h \
	mousedrv.c \
	mousedrv.h \
	noinlineargs.c \
	petui.c \
	petuires.h \
	plus4ui.c \
	plus4uires.h \
	pointer.c \
	pointer.h \
	private.h \
	rs232.c \
	screen-shot.c \
	screen-shot.h \
	signals.c \
	socketimpl.c \
	socketimpl.h \
	statusbar.c \
	statusbar.h \
	rawnetarch.c \
	timer.c \
	timer.h \
	types.h \
	ui.c \
	ui.h \
	uiapi.c \
	uiattach.c \
	uiattach.h \
	uic64cart.c \
	uic64cart.h \
	uicart.c \
	uicart.h \
	uicmdline.c \
	uicolor.c \
	uilib.c \
	uilib.h \
	uimon.c \
	uires.h \
	vic20ui.c \
	vic20uires.h \
	video.c \
	videoarch.h \
	vsidui.c \
	vsiduires.h \
	vsyncapi.c \
	mui/filereq.c \
	mui/filereq.h \
	mui/mui.c \
	mui/mui.h \
	mui/uiacia.c \
	mui/uiacia.h \
	mui/uiautostart.c \
	mui/uiautostart.h \
	mui/uiburstmod.c \
	mui/uiburstmod.h \
	mui/uic64_256k.c \
	mui/uic64_256k.h \
	mui/uic64dtv.c \
	mui/uic64dtv.h \
	mui/uic64model.c \
	mui/uic64model.h \
	mui/uic128settings.c \
	mui/uic128settings.h \
	mui/uicbm2settings.c \
	mui/uicbm2settings.h \
	mui/uicbm5x0settings.c \
	mui/uicbm5x0settings.h \
	mui/uiciamodel.c \
	mui/uiciamodel.h \
	mui/uidatasette.c \
	mui/uidatasette.h \
	mui/uidigimax.c \
	mui/uidigimax.h \
	mui/uidqbb.c \
	mui/uidqbb.h \
	mui/uidrivec128.c \
	mui/uidrivec128.h \
	mui/uidrivec64vic20.c \
	mui/uidrivec64vic20.h \
	mui/uidrivepetcbm2.c \
	mui/uidrivepetcbm2.h \
	mui/uidriveplus4.c \
	mui/uidriveplus4.h \
	mui/uids12c887rtc.c \
	mui/uids12c887rtc.h \
	mui/uieasyflash.c \
	mui/uieasyflash.h \
	mui/uiexpert.c \
	mui/uiexpert.h \
	mui/uifliplist.c \
	mui/uifliplist.h \
	mui/uigeoram.c \
	mui/uigeoram.h \
	mui/uiide64.c \
	mui/uiide64.h \
	mui/uiisepic.c \
	mui/uiisepic.h \
	mui/uijoystick.c \
	mui/uijoystick.h \
	mui/uijoystickll.c \
	mui/uijoystickll.h \
	mui/uimagicvoice.c \
	mui/uimagicvoice.h \
	mui/uimmc64.c \
	mui/uimmc64.h \
	mui/uimmcreplay.c \
	mui/uimmcreplay.h \
	mui/uimouse.c \
	mui/uimouse.h \
	mui/uinetwork.c \
	mui/uinetwork.h \
	mui/uipetdww.c \
	mui/uipetdww.h \
	mui/uipetreu.c \
	mui/uipetreu.h \
	mui/uipetsettings.c \
	mui/uipetsettings.h \
	mui/uiplus256k.c \
	mui/uiplus256k.h \
	mui/uiplus4settings.c \
	mui/uiplus4settings.h \
	mui/uiplus60k.c \
	mui/uiplus60k.h \
	mui/uiprinter.c \
	mui/uiprinter.h \
	mui/uiram.c \
	mui/uiram.h \
	mui/uiramcart.c \
	mui/uiramcart.h \
	mui/uiretroreplay.c \
	mui/uiretroreplay.h \
	mui/uireu.c \
	mui/uireu.h \
	mui/uiromc128settings.c \
	mui/uiromc128settings.h \
	mui/uiromc64vic20settings.c \
	mui/uiromc64vic20settings.h \
	mui/uiromcbm2settings.c \
	mui/uiromcbm2settings.h \
	mui/uirompetsettings.c \
	mui/uirompetsettings.h \
	mui/uiromplus4settings.c \
	mui/uiromplus4settings.h \
	mui/uirs232user.c \
	mui/uirs232user.h \
	mui/uisid.c \
	mui/uisid.h \
	mui/uisidcart.c \
	mui/uisidcart.h \
	mui/uisiddtv.c \
	mui/uisiddtv.h \
	mui/uisnapshot.c \
	mui/uisnapshot.h \
	mui/uisound.c \
	mui/uisound.h \
	mui/uisoundexpander.c \
	mui/uisoundexpander.h \
	mui/uisoundsampler.c \
	mui/uisoundsampler.h \
	mui/uited.c \
	mui/uited.h \
	mui/uiv364speech.c \
	mui/uiv364speech.h \
	mui/uivic.c \
	mui/uivic.h \
	mui/uivic20mem.c \
	mui/uivic20mem.h \
	mui/uivicii.c \
	mui/uivicii.h \
	mui/uivideo.c \
	mui/uivideo.h

EXTRA_DIST = \
	intl_text.c \
	info-files/VICE.info \
	info-files/vsid.exe.info \
	info-files/x128.exe.info \
	info-files/x64.exe.info \
	info-files/x64dtv.exe.info \
	info-files/x64sc.exe.info \
	info-files/xcbm2.exe.info \
	info-files/xcbm5x0.exe.info \
	info-files/xpet.exe.info \
	info-files/xplus4.exe.info \
	info-files/xvic.exe.info \
	info-files/morphos/VICE.info \
	info-files/morphos/vsid.info \
	info-files/morphos/x128.info \
	info-files/morphos/x64.info \
	info-files/morphos/x64dtv.info \
	info-files/morphos/x64sc.info \
	info-files/morphos/xcbm2.info \
	info-files/morphos/xcbm5x0.info \
	info-files/morphos/xpet.info \
	info-files/morphos/xplus4.info \
	info-files/morphos/xvic.info \
	fixdeps.c \
	genintl_h.sh.in \
	genintltable.sh \
	intl.txt \
	make-bindist.sh

BUILT_SOURCES = intl.h intl_table.h

intl.h: $(srcdir)/intl.txt
	echo "generating intl.h..."
	$(SHELL) genintl_h.sh <$(srcdir)/intl.txt >intl.h

intl_table.h: $(srcdir)/intl.txt
	echo "generating intl_table.h..."
	$(SHELL) $(srcdir)/genintltable.sh <$(srcdir)/intl.txt >intl_table.h
