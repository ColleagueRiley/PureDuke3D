all:
	make PureDuke3D.h
	make test

debug:
	rm -f PureDuke3D.h
	make PureDuke3D.h
	make test	

PureDuke3D.h:
	touch PureDuke3D.h
	cat DUKE3D/basics.h > PureDuke3D.h
	cat DUKE3D/*/*/*.h >> PureDuke3D.h
	cat DUKE3D/*/*.h >> PureDuke3D.h
	
	echo "#ifdef DUKE3D_IMPLEMENTATION" >> PureDuke3D.h
	cat DUKE3D/*/*.c >> PureDuke3D.h
	cat DUKE3D/*/*/*.c >> PureDuke3D.h
	echo "#endif" >> PureDuke3D.h

	grep '^#include' PureDuke3D.h | sed -i '/#include[[:space:]]*"/d' PureDuke3D.h

test:
	gcc -Wno-conflicting-types -Wno-redundant-decls test.c -w