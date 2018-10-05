all:
	g++ src/*.cpp src/*.c -o hashtag `pkg-config --cflags --libs gtkmm-3.0`
