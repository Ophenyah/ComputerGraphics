TINYOBJ_INCLUDE_PATH = ./headers
VULKAN_SDK_PATH = /home/usr/include/vulkan

CFLAGS = -std=c++17 -O2 -I$(VULKAN_SDK_PATH) -I$(TINYOBJ_INCLUDE_PATH)
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

Vulkan: A02.cpp transforms.hpp
	g++ $(CFLAGS) -o Vulkan A02.cpp $(LDFLAGS)
	./Vulkan

.PHONY: clean run

run:
	./Vulkan

clean:
	rm -f Vulkan