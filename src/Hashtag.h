#ifndef HASHTAG_H
#define HASHTAG_H

#include <iostream>
#include <string.h>
#include "hashtagUtils.h"

/**
 * This was a plain C-project, I ported it to C++ by adding some 
 * awful lines;
 * TODO: Correctly port to C++ with C++'s standards
 *
 */
namespace Hashtag
{
std::string hashTagizer(std::string sourceString);
}; // namespace Hashtag

#endif
