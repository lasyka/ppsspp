#pragma once

#include "GPU/ge_constants.h"
#include "GPU/GPUCommon.h"
#include "Common/GPU/ShaderWriter.h"

void GenerateReinterpretFragmentShader(char *buffer, GEBufferFormat from, GEBufferFormat to, const ShaderLanguageDesc &lang);

// Just a single one. Can probably be shared with a lot of similar use cases.
// Generates the coordinates for a fullscreen triangle.
void GenerateReinterpretVertexShader(char *buffer, const ShaderLanguageDesc &lang);
