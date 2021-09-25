#pragma once

#include "Quark/Core.hpp"

namespace Quark 
{
	namespace Photon
	{
		/**
		 * @brief A universal rendering context abstracting the underlying API
		 */
		class QUARK_API Context
		{
		public:
			/**
			 * @brief Initializes a new rendering context
			 * 
			 * This function gets implemented in a derived class, and is then
			 * responsible for setting up that classes rendering API's context
			 */
			virtual void Init() = 0;

			/**
			 * @brief Displays the frame buffer
			 * 
			 * This function gets implemented in a derived class, and is then
			 * responsible for performing everything that is needed to display
			 * the current frame buffer on the screen.
			 */
			virtual void SwapBuffers() = 0;
		};
	}
}