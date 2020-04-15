
SUBDIR := XTinyTerror

.PHONY: $(SUBDIR) libxputty  recurse

$(MAKECMDGOALS) recurse: $(SUBDIR)

clean:
	@rm -f ./libxputty/xputty/resources/knob.png
	@rm -f ./libxputty/xputty/resources/switch.png
	@rm -f ./libxputty/xputty/resources/terror.png

libxputty:
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

