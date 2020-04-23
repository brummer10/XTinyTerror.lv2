
BLUE = "\033[1;34m"
RED =  "\033[1;31m"
NONE = "\033[0m"

SUBDIR := XTinyTerror

.PHONY: $(SUBDIR) libxputty  recurse

$(MAKECMDGOALS) recurse: $(SUBDIR)

check-and-reinit-submodules :
	@if git submodule status | egrep -q '^[-]|^[+]' ; then \
		echo $(RED)"INFO: Need to reinitialize git submodules"$(NONE); \
		git submodule update --init; \
		echo $(BLUE)"Done"$(NONE); \
	else echo $(BLUE)"Submodule up to date"$(NONE); \
	fi

clean:
	@rm -f ./libxputty/xputty/resources/knob.png
	@rm -f ./libxputty/xputty/resources/switch.png
	@rm -f ./libxputty/xputty/resources/terror.png

libxputty: check-and-reinit-submodules
ifeq (,$(wildcard ./libxputty/xputty/resources/knob.png))
	cp ./XTinyTerror/gui/knob.png ./libxputty/xputty/resources/
endif
ifeq (,$(wildcard ./libxputty/xputty/resources/switch.png))
	cp ./XTinyTerror/gui/switch.png ./libxputty/xputty/resources/
endif
ifeq (,$(wildcard ./libxputty/xputty/resources/terror.png))
	cp ./XTinyTerror/gui/terror.png ./libxputty/xputty/resources/
endif
	@exec $(MAKE) -j 1 -C $@ $(MAKECMDGOALS)

$(SUBDIR): libxputty
	@exec $(MAKE) -j 1 -C $@ $(MAKECMDGOALS)

