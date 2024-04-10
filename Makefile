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
	#cat DUKE3D/*/*/*.c >> PureDuke3D.h
	echo "#endif" >> PureDuke3D.h

	grep '^#include' PureDuke3D.h | sed -i '/#include[[:space:]]*"/d' PureDuke3D.h

test:
	#gcc -c -D PLATFORM_WIN32 Duke3D/basics.h DUKE3D/*/*.c -I./DUKE3D/Engine -I./DUKE3D/Game -w
	gcc test.c -w