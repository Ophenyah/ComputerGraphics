TINYOBJ_INCLUDE_PATH = ./headers
VULKAN_SDK_PATH = /home/user/VulkanSDK/x.x.x.x/x86_64

CFLAGS = -std=c++17 -O2 -I$(VULKAN_SDK_PATH)/include -I$(TINYOBJ_INCLUDE_PATH)
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

VulkanTest: A01.cpp triangles.hpp
	g++ $(CFLAGS) -o VulkanTest A01.cpp $(LDFLAGS)
	./VulkanTest

.PHONY: clean run

run:
	./VulkanTest

clean:
	rm -f VulkanTest