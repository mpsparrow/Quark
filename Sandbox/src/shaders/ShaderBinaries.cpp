/**
 * This file was auto generated by Quark. 
 *
 * ANY MODIFICATIONS TO THIS FILE WILL BE LOST UPON RECONFIGURATION.
 *
 * If you want to change the contents of this file, edit the arguments 
 * passed to quark_add_shaders in your build script.
 */

#include "ShaderBinaries.hpp"

const Quark::Photon::VertexShaderBinary SandboxVertexShaders::shader = {
R"(#version 460 core

layout(location = 0) in vec3 a_Position;
layout(location = 0) out vec3 o_Position;

void main()
{
	o_Position = a_Position;
	gl_Position = vec4(a_Position, 1.0);
})",
{	// 1011.6.0
	0x07230203,0x00010000,0x0008000a,0x0000001e,0x00000000,0x00020011,0x00000001,0x0006000b,
	0x00000001,0x4c534c47,0x6474732e,0x3035342e,0x00000000,0x0003000e,0x00000000,0x00000001,
	0x0008000f,0x00000000,0x00000004,0x6e69616d,0x00000000,0x00000009,0x0000000b,0x00000013,
	0x00030003,0x00000002,0x000001cc,0x00040005,0x00000004,0x6e69616d,0x00000000,0x00050005,
	0x00000009,0x6f505f6f,0x69746973,0x00006e6f,0x00050005,0x0000000b,0x6f505f61,0x69746973,
	0x00006e6f,0x00060005,0x00000011,0x505f6c67,0x65567265,0x78657472,0x00000000,0x00060006,
	0x00000011,0x00000000,0x505f6c67,0x7469736f,0x006e6f69,0x00070006,0x00000011,0x00000001,
	0x505f6c67,0x746e696f,0x657a6953,0x00000000,0x00070006,0x00000011,0x00000002,0x435f6c67,
	0x4470696c,0x61747369,0x0065636e,0x00070006,0x00000011,0x00000003,0x435f6c67,0x446c6c75,
	0x61747369,0x0065636e,0x00030005,0x00000013,0x00000000,0x00040047,0x00000009,0x0000001e,
	0x00000000,0x00040047,0x0000000b,0x0000001e,0x00000000,0x00050048,0x00000011,0x00000000,
	0x0000000b,0x00000000,0x00050048,0x00000011,0x00000001,0x0000000b,0x00000001,0x00050048,
	0x00000011,0x00000002,0x0000000b,0x00000003,0x00050048,0x00000011,0x00000003,0x0000000b,
	0x00000004,0x00030047,0x00000011,0x00000002,0x00020013,0x00000002,0x00030021,0x00000003,
	0x00000002,0x00030016,0x00000006,0x00000020,0x00040017,0x00000007,0x00000006,0x00000003,
	0x00040020,0x00000008,0x00000003,0x00000007,0x0004003b,0x00000008,0x00000009,0x00000003,
	0x00040020,0x0000000a,0x00000001,0x00000007,0x0004003b,0x0000000a,0x0000000b,0x00000001,
	0x00040017,0x0000000d,0x00000006,0x00000004,0x00040015,0x0000000e,0x00000020,0x00000000,
	0x0004002b,0x0000000e,0x0000000f,0x00000001,0x0004001c,0x00000010,0x00000006,0x0000000f,
	0x0006001e,0x00000011,0x0000000d,0x00000006,0x00000010,0x00000010,0x00040020,0x00000012,
	0x00000003,0x00000011,0x0004003b,0x00000012,0x00000013,0x00000003,0x00040015,0x00000014,
	0x00000020,0x00000001,0x0004002b,0x00000014,0x00000015,0x00000000,0x0004002b,0x00000006,
	0x00000017,0x3f800000,0x00040020,0x0000001c,0x00000003,0x0000000d,0x00050036,0x00000002,
	0x00000004,0x00000000,0x00000003,0x000200f8,0x00000005,0x0004003d,0x00000007,0x0000000c,
	0x0000000b,0x0003003e,0x00000009,0x0000000c,0x0004003d,0x00000007,0x00000016,0x0000000b,
	0x00050051,0x00000006,0x00000018,0x00000016,0x00000000,0x00050051,0x00000006,0x00000019,
	0x00000016,0x00000001,0x00050051,0x00000006,0x0000001a,0x00000016,0x00000002,0x00070050,
	0x0000000d,0x0000001b,0x00000018,0x00000019,0x0000001a,0x00000017,0x00050041,0x0000001c,
	0x0000001d,0x00000013,0x00000015,0x0003003e,0x0000001d,0x0000001b,0x000100fd,0x00010038
}
};


const Quark::Photon::FragmentShaderBinary SandboxFragmentShaders::shader = {
R"(#version 460 core

layout(location = 0) in vec3 o_Position;
layout(location = 0) out vec4 color;

void main()
{
	color = vec4(o_Position, 1.0);
})",
{	// 1011.6.0
	0x07230203,0x00010000,0x0008000a,0x00000013,0x00000000,0x00020011,0x00000001,0x0006000b,
	0x00000001,0x4c534c47,0x6474732e,0x3035342e,0x00000000,0x0003000e,0x00000000,0x00000001,
	0x0007000f,0x00000004,0x00000004,0x6e69616d,0x00000000,0x00000009,0x0000000c,0x00030010,
	0x00000004,0x00000007,0x00030003,0x00000002,0x000001cc,0x00040005,0x00000004,0x6e69616d,
	0x00000000,0x00040005,0x00000009,0x6f6c6f63,0x00000072,0x00050005,0x0000000c,0x6f505f6f,
	0x69746973,0x00006e6f,0x00040047,0x00000009,0x0000001e,0x00000000,0x00040047,0x0000000c,
	0x0000001e,0x00000000,0x00020013,0x00000002,0x00030021,0x00000003,0x00000002,0x00030016,
	0x00000006,0x00000020,0x00040017,0x00000007,0x00000006,0x00000004,0x00040020,0x00000008,
	0x00000003,0x00000007,0x0004003b,0x00000008,0x00000009,0x00000003,0x00040017,0x0000000a,
	0x00000006,0x00000003,0x00040020,0x0000000b,0x00000001,0x0000000a,0x0004003b,0x0000000b,
	0x0000000c,0x00000001,0x0004002b,0x00000006,0x0000000e,0x3f800000,0x00050036,0x00000002,
	0x00000004,0x00000000,0x00000003,0x000200f8,0x00000005,0x0004003d,0x0000000a,0x0000000d,
	0x0000000c,0x00050051,0x00000006,0x0000000f,0x0000000d,0x00000000,0x00050051,0x00000006,
	0x00000010,0x0000000d,0x00000001,0x00050051,0x00000006,0x00000011,0x0000000d,0x00000002,
	0x00070050,0x00000007,0x00000012,0x0000000f,0x00000010,0x00000011,0x0000000e,0x0003003e,
	0x00000009,0x00000012,0x000100fd,0x00010038
}
};

