#pragma once 
#include "Parseable.hpp"
/**
 * @brief Namespace for the miscellaneous classes
 */
namespace miscellaneous {
class ORLibParser : public miscellaneous::Parseable {
	private:
	public:
		 Problem parse(const std::string& path) const override;
	};
}
