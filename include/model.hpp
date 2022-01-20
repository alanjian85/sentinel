#ifndef RAYSTER_MODEL_HPP
#define RAYSTER_MODEL_HPP

#include <cstdlib>
#include <string>
#include <vector>

#include "vector.hpp"

namespace rayster {
    class model {
    public:
        void load(const std::string& path);

        vector4 get_vertex(int n) const {
            return vertices_[face_vertices_[n]];
        }

        auto num_vertices() const {
            return face_vertices_.size();
        }
    private:
        std::vector<vector4> vertices_;
        std::vector<vector3> tex_coords_;
        std::vector<vector3> normals_;

        std::vector<std::size_t> face_vertices_; 
        std::vector<std::size_t> face_normals_;
        std::vector<std::size_t> face_tex_coords_;
    };
}

#endif