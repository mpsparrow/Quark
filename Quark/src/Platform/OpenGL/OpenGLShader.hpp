#pragma once

#include "Quark/Photon/Shader.hpp"

namespace Quark
{
	namespace Photon
	{
		/**
		 * @brief OpenGL specific abstraction of a shader program
		 */
		class QUARK_API OpenGLShader : public Shader
		{
		public:
			/**
			 * @brief				Create new OpenGL shader program
			 *
			 * @param vertexSrc     GLSL source code of the vertex shader
			 * @param fragmentSrc	GLSL source code of the fragment shader
			 * @returns				A new OpenGL shader program
			 */
			OpenGLShader(const std::string& vertexSrc, const std::string& fragmentSrc);

			/** 
			 * @brief Delete the shader program
			 */
			virtual ~OpenGLShader();

			virtual void Bind() const;
			virtual void Unbind() const;

		private:
			uint32_t m_Program;
		};
	}
}