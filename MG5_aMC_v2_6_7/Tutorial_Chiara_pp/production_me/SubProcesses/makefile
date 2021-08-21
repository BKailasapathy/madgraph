
# For python linking (require f2py part of numpy)
ifeq ($(origin MENUM),undefined)
  MENUM=2
endif
P1_gg_uvuvx/matrix$(MENUM)py.so:
	cd P1_gg_uvuvx;make matrix$(MENUM)py.so
P1_uux_uvuvx/matrix$(MENUM)py.so:
	cd P1_uux_uvuvx;make matrix$(MENUM)py.so
all:  P1_gg_uvuvx/matrix$(MENUM)py.so  P1_uux_uvuvx/matrix$(MENUM)py.so 
	echo 'done'