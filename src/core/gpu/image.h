#pragma once

#include "core/gpu/texture2D.h"

#include <glm/glm.hpp>

namespace gfxc
{
    class Image : public Texture2D
    {
    public:
        void Init(unsigned int width, unsigned int height,
            unsigned int channels, const glm::vec3 initial_value = glm::vec3(0));

        void UpdateInternalData();

        void Set(unsigned int row, unsigned int column, glm::vec3 data);
        glm::vec3 Get(unsigned int row, unsigned int column);

        void Clear(const glm::vec3 &color);
    };
}
