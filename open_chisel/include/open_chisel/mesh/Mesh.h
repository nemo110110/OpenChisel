// The MIT License (MIT)
// Copyright (c) 2014 Matthew Klingensmith and Ivan Dryanovski
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef MESH_H_
#define MESH_H_

#include <vector>
#include <open_chisel/geometry/Geometry.h>

namespace chisel
{
    typedef uint16_t VertIndex;
    class Mesh
    {
        public:
            Mesh();
            virtual ~Mesh();

            inline bool HasVertices() { return !vertices.empty(); }
            inline bool HasNormals() { return !normals.empty(); }
            inline bool HasColors() { return !colors.empty(); }
            inline bool HasIndices() { return !indices.empty(); }

            inline void Clear()
            {
                vertices.clear();
                normals.clear();
                colors.clear();
                indices.clear();
            }

            std::vector<Vec3> vertices;
            std::vector<VertIndex> indices;
            std::vector<Vec3> normals;
            std::vector<Vec3> colors;

    };

} // namespace chisel 

#endif // MESH_H_ 
