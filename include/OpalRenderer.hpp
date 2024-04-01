#include "OpalWindow.hpp"
/// @class OpalRenderer
/// @brief Rendering system
/// @details Creates a glfw window and binds it with Vulkan for rendering,
/// future window lib support planned
class OpalRenderer
{
public:
    OpalRenderer(int width, int height, bool resizable);
private:
    OpalWindow _window;
};

// Ideas: Need to provide this with an output destination for rendering. For on screen rendering you would
// pass in a window and for off screen rendering you would pass some frame buffer handling object

// This can render vertex buffers and object primatives defined in this class
