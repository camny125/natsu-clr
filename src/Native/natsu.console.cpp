#include "System.Console.h"
#include "System.Private.CoreLib.h"

using namespace natsu;
using namespace System_Private_CoreLib;
using namespace System_Private_CoreLib::System;
using namespace System_Console::System;

namespace
{
static const constexpr auto xterm_256color_name = make_string_literal(u"xterm-256color");

// clang-format off
// Generated by vscode-hexdump
static const constexpr auto xterm_256color_data = make_szarray_literal<uint8_t, 3525>(
{
	0x1a, 0x01, 0x25, 0x00, 0x26, 0x00, 0x0f, 0x00, 
	0x9d, 0x01, 0x02, 0x06, 0x78, 0x74, 0x65, 0x72, 
	0x6d, 0x2d, 0x32, 0x35, 0x36, 0x63, 0x6f, 0x6c, 
	0x6f, 0x72, 0x7c, 0x78, 0x74, 0x65, 0x72, 0x6d, 
	0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x32, 0x35, 
	0x36, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x73, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x50, 0x00, 0x08, 0x00, 0x18, 0x00, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x00, 0x01, 0xff, 0x7f, 0x00, 0x00, 
	0x04, 0x00, 0x06, 0x00, 0x08, 0x00, 0x19, 0x00, 
	0x1e, 0x00, 0x26, 0x00, 0x2a, 0x00, 0x2e, 0x00, 
	0xff, 0xff, 0x39, 0x00, 0x4a, 0x00, 0x4c, 0x00, 
	0x50, 0x00, 0x57, 0x00, 0xff, 0xff, 0x59, 0x00, 
	0x66, 0x00, 0xff, 0xff, 0x6a, 0x00, 0x6e, 0x00, 
	0x78, 0x00, 0x7c, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x80, 0x00, 0x84, 0x00, 0x89, 0x00, 0x8e, 0x00, 
	0xff, 0xff, 0xa0, 0x00, 0xa5, 0x00, 0xaa, 0x00, 
	0xff, 0xff, 0xaf, 0x00, 0xb4, 0x00, 0xb9, 0x00, 
	0xbe, 0x00, 0xc7, 0x00, 0xcb, 0x00, 0xd2, 0x00, 
	0xff, 0xff, 0xe4, 0x00, 0xe9, 0x00, 0xef, 0x00, 
	0xf5, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x07, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x19, 0x01, 0xff, 0xff, 0x1d, 0x01, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0x1f, 0x01, 0xff, 0xff, 
	0x24, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x28, 0x01, 0x2c, 0x01, 0x32, 0x01, 
	0x36, 0x01, 0x3a, 0x01, 0x3e, 0x01, 0x44, 0x01, 
	0x4a, 0x01, 0x50, 0x01, 0x56, 0x01, 0x5c, 0x01, 
	0x60, 0x01, 0xff, 0xff, 0x65, 0x01, 0xff, 0xff, 
	0x69, 0x01, 0x6e, 0x01, 0x73, 0x01, 0x77, 0x01, 
	0x7e, 0x01, 0xff, 0xff, 0x85, 0x01, 0x89, 0x01, 
	0x91, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x99, 0x01, 0xa2, 0x01, 0xff, 0xff, 0xff, 0xff, 
	0xab, 0x01, 0xb4, 0x01, 0xbd, 0x01, 0xc6, 0x01, 
	0xcf, 0x01, 0xd8, 0x01, 0xe1, 0x01, 0xea, 0x01, 
	0xf3, 0x01, 0xfc, 0x01, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x05, 0x02, 0x09, 0x02, 0x0e, 0x02, 
	0x13, 0x02, 0x27, 0x02, 0x30, 0x02, 0xff, 0xff, 
	0xff, 0xff, 0x42, 0x02, 0x45, 0x02, 0x50, 0x02, 
	0x53, 0x02, 0x55, 0x02, 0x58, 0x02, 0xb5, 0x02, 
	0xff, 0xff, 0xb8, 0x02, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xba, 0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xbe, 0x02, 0xff, 0xff, 0xf3, 0x02, 
	0xff, 0xff, 0xff, 0xff, 0xf7, 0x02, 0xfd, 0x02, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0x03, 
	0x07, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0x0b, 0x03, 0xff, 0xff, 
	0xff, 0xff, 0x12, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0x19, 0x03, 0x20, 0x03, 
	0x27, 0x03, 0xff, 0xff, 0xff, 0xff, 0x2e, 0x03, 
	0xff, 0xff, 0x35, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x3c, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x43, 0x03, 
	0x49, 0x03, 0x4f, 0x03, 0x56, 0x03, 0x5d, 0x03, 
	0x64, 0x03, 0x6b, 0x03, 0x73, 0x03, 0x7b, 0x03, 
	0x83, 0x03, 0x8b, 0x03, 0x93, 0x03, 0x9b, 0x03, 
	0xa3, 0x03, 0xab, 0x03, 0xb2, 0x03, 0xb9, 0x03, 
	0xc0, 0x03, 0xc7, 0x03, 0xcf, 0x03, 0xd7, 0x03, 
	0xdf, 0x03, 0xe7, 0x03, 0xef, 0x03, 0xf7, 0x03, 
	0xff, 0x03, 0x07, 0x04, 0x0e, 0x04, 0x15, 0x04, 
	0x1c, 0x04, 0x23, 0x04, 0x2b, 0x04, 0x33, 0x04, 
	0x3b, 0x04, 0x43, 0x04, 0x4b, 0x04, 0x53, 0x04, 
	0x5b, 0x04, 0x63, 0x04, 0x6a, 0x04, 0x71, 0x04, 
	0x78, 0x04, 0x7f, 0x04, 0x87, 0x04, 0x8f, 0x04, 
	0x97, 0x04, 0x9f, 0x04, 0xa7, 0x04, 0xaf, 0x04, 
	0xb7, 0x04, 0xbf, 0x04, 0xc6, 0x04, 0xcd, 0x04, 
	0xd4, 0x04, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xd9, 0x04, 0xe4, 0x04, 0xe9, 0x04, 0xfc, 0x04, 
	0x00, 0x05, 0x09, 0x05, 0x10, 0x05, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0x6e, 0x05, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x73, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0x79, 0x05, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0x7d, 0x05, 0xbc, 0x05, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfc, 0x05, 0xff, 0x05, 
	0x1b, 0x5b, 0x5a, 0x00, 0x07, 0x00, 0x0d, 0x00, 
	0x1b, 0x5b, 0x25, 0x69, 0x25, 0x70, 0x31, 0x25, 
	0x64, 0x3b, 0x25, 0x70, 0x32, 0x25, 0x64, 0x72, 
	0x00, 0x1b, 0x5b, 0x33, 0x67, 0x00, 0x1b, 0x5b, 
	0x48, 0x1b, 0x5b, 0x32, 0x4a, 0x00, 0x1b, 0x5b, 
	0x4b, 0x00, 0x1b, 0x5b, 0x4a, 0x00, 0x1b, 0x5b, 
	0x25, 0x69, 0x25, 0x70, 0x31, 0x25, 0x64, 0x47, 
	0x00, 0x1b, 0x5b, 0x25, 0x69, 0x25, 0x70, 0x31, 
	0x25, 0x64, 0x3b, 0x25, 0x70, 0x32, 0x25, 0x64, 
	0x48, 0x00, 0x0a, 0x00, 0x1b, 0x5b, 0x48, 0x00, 
	0x1b, 0x5b, 0x3f, 0x32, 0x35, 0x6c, 0x00, 0x08, 
	0x00, 0x1b, 0x5b, 0x3f, 0x31, 0x32, 0x6c, 0x1b, 
	0x5b, 0x3f, 0x32, 0x35, 0x68, 0x00, 0x1b, 0x5b, 
	0x43, 0x00, 0x1b, 0x5b, 0x41, 0x00, 0x1b, 0x5b, 
	0x3f, 0x31, 0x32, 0x3b, 0x32, 0x35, 0x68, 0x00, 
	0x1b, 0x5b, 0x50, 0x00, 0x1b, 0x5b, 0x4d, 0x00, 
	0x1b, 0x28, 0x30, 0x00, 0x1b, 0x5b, 0x35, 0x6d, 
	0x00, 0x1b, 0x5b, 0x31, 0x6d, 0x00, 0x1b, 0x5b, 
	0x3f, 0x31, 0x30, 0x34, 0x39, 0x68, 0x1b, 0x5b, 
	0x32, 0x32, 0x3b, 0x30, 0x3b, 0x30, 0x74, 0x00, 
	0x1b, 0x5b, 0x32, 0x6d, 0x00, 0x1b, 0x5b, 0x34, 
	0x68, 0x00, 0x1b, 0x5b, 0x38, 0x6d, 0x00, 0x1b, 
	0x5b, 0x37, 0x6d, 0x00, 0x1b, 0x5b, 0x37, 0x6d, 
	0x00, 0x1b, 0x5b, 0x34, 0x6d, 0x00, 0x1b, 0x5b, 
	0x25, 0x70, 0x31, 0x25, 0x64, 0x58, 0x00, 0x1b, 
	0x28, 0x42, 0x00, 0x1b, 0x28, 0x42, 0x1b, 0x5b, 
	0x6d, 0x00, 0x1b, 0x5b, 0x3f, 0x31, 0x30, 0x34, 
	0x39, 0x6c, 0x1b, 0x5b, 0x32, 0x33, 0x3b, 0x30, 
	0x3b, 0x30, 0x74, 0x00, 0x1b, 0x5b, 0x34, 0x6c, 
	0x00, 0x1b, 0x5b, 0x32, 0x37, 0x6d, 0x00, 0x1b, 
	0x5b, 0x32, 0x34, 0x6d, 0x00, 0x1b, 0x5b, 0x3f, 
	0x35, 0x68, 0x24, 0x3c, 0x31, 0x30, 0x30, 0x2f, 
	0x3e, 0x1b, 0x5b, 0x3f, 0x35, 0x6c, 0x00, 0x1b, 
	0x5b, 0x21, 0x70, 0x1b, 0x5b, 0x3f, 0x33, 0x3b, 
	0x34, 0x6c, 0x1b, 0x5b, 0x34, 0x6c, 0x1b, 0x3e, 
	0x00, 0x1b, 0x5b, 0x4c, 0x00, 0x7f, 0x00, 0x1b, 
	0x5b, 0x33, 0x7e, 0x00, 0x1b, 0x4f, 0x42, 0x00, 
	0x1b, 0x4f, 0x50, 0x00, 0x1b, 0x5b, 0x32, 0x31, 
	0x7e, 0x00, 0x1b, 0x4f, 0x51, 0x00, 0x1b, 0x4f, 
	0x52, 0x00, 0x1b, 0x4f, 0x53, 0x00, 0x1b, 0x5b, 
	0x31, 0x35, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x37, 
	0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x38, 0x7e, 0x00, 
	0x1b, 0x5b, 0x31, 0x39, 0x7e, 0x00, 0x1b, 0x5b, 
	0x32, 0x30, 0x7e, 0x00, 0x1b, 0x4f, 0x48, 0x00, 
	0x1b, 0x5b, 0x32, 0x7e, 0x00, 0x1b, 0x4f, 0x44, 
	0x00, 0x1b, 0x5b, 0x36, 0x7e, 0x00, 0x1b, 0x5b, 
	0x35, 0x7e, 0x00, 0x1b, 0x4f, 0x43, 0x00, 0x1b, 
	0x5b, 0x31, 0x3b, 0x32, 0x42, 0x00, 0x1b, 0x5b, 
	0x31, 0x3b, 0x32, 0x41, 0x00, 0x1b, 0x4f, 0x41, 
	0x00, 0x1b, 0x5b, 0x3f, 0x31, 0x6c, 0x1b, 0x3e, 
	0x00, 0x1b, 0x5b, 0x3f, 0x31, 0x68, 0x1b, 0x3d, 
	0x00, 0x1b, 0x5b, 0x3f, 0x31, 0x30, 0x33, 0x34, 
	0x6c, 0x00, 0x1b, 0x5b, 0x3f, 0x31, 0x30, 0x33, 
	0x34, 0x68, 0x00, 0x1b, 0x5b, 0x25, 0x70, 0x31, 
	0x25, 0x64, 0x50, 0x00, 0x1b, 0x5b, 0x25, 0x70, 
	0x31, 0x25, 0x64, 0x4d, 0x00, 0x1b, 0x5b, 0x25, 
	0x70, 0x31, 0x25, 0x64, 0x42, 0x00, 0x1b, 0x5b, 
	0x25, 0x70, 0x31, 0x25, 0x64, 0x40, 0x00, 0x1b, 
	0x5b, 0x25, 0x70, 0x31, 0x25, 0x64, 0x53, 0x00, 
	0x1b, 0x5b, 0x25, 0x70, 0x31, 0x25, 0x64, 0x4c, 
	0x00, 0x1b, 0x5b, 0x25, 0x70, 0x31, 0x25, 0x64, 
	0x44, 0x00, 0x1b, 0x5b, 0x25, 0x70, 0x31, 0x25, 
	0x64, 0x43, 0x00, 0x1b, 0x5b, 0x25, 0x70, 0x31, 
	0x25, 0x64, 0x54, 0x00, 0x1b, 0x5b, 0x25, 0x70, 
	0x31, 0x25, 0x64, 0x41, 0x00, 0x1b, 0x5b, 0x69, 
	0x00, 0x1b, 0x5b, 0x34, 0x69, 0x00, 0x1b, 0x5b, 
	0x35, 0x69, 0x00, 0x25, 0x70, 0x31, 0x25, 0x63, 
	0x1b, 0x5b, 0x25, 0x70, 0x32, 0x25, 0x7b, 0x31, 
	0x7d, 0x25, 0x2d, 0x25, 0x64, 0x62, 0x00, 0x1b, 
	0x63, 0x1b, 0x5d, 0x31, 0x30, 0x34, 0x07, 0x00, 
	0x1b, 0x5b, 0x21, 0x70, 0x1b, 0x5b, 0x3f, 0x33, 
	0x3b, 0x34, 0x6c, 0x1b, 0x5b, 0x34, 0x6c, 0x1b, 
	0x3e, 0x00, 0x1b, 0x38, 0x00, 0x1b, 0x5b, 0x25, 
	0x69, 0x25, 0x70, 0x31, 0x25, 0x64, 0x64, 0x00, 
	0x1b, 0x37, 0x00, 0x0a, 0x00, 0x1b, 0x4d, 0x00, 
	0x25, 0x3f, 0x25, 0x70, 0x39, 0x25, 0x74, 0x1b, 
	0x28, 0x30, 0x25, 0x65, 0x1b, 0x28, 0x42, 0x25, 
	0x3b, 0x1b, 0x5b, 0x30, 0x25, 0x3f, 0x25, 0x70, 
	0x36, 0x25, 0x74, 0x3b, 0x31, 0x25, 0x3b, 0x25, 
	0x3f, 0x25, 0x70, 0x35, 0x25, 0x74, 0x3b, 0x32, 
	0x25, 0x3b, 0x25, 0x3f, 0x25, 0x70, 0x32, 0x25, 
	0x74, 0x3b, 0x34, 0x25, 0x3b, 0x25, 0x3f, 0x25, 
	0x70, 0x31, 0x25, 0x70, 0x33, 0x25, 0x7c, 0x25, 
	0x74, 0x3b, 0x37, 0x25, 0x3b, 0x25, 0x3f, 0x25, 
	0x70, 0x34, 0x25, 0x74, 0x3b, 0x35, 0x25, 0x3b, 
	0x25, 0x3f, 0x25, 0x70, 0x37, 0x25, 0x74, 0x3b, 
	0x38, 0x25, 0x3b, 0x6d, 0x00, 0x1b, 0x48, 0x00, 
	0x09, 0x00, 0x1b, 0x4f, 0x45, 0x00, 0x60, 0x60, 
	0x61, 0x61, 0x66, 0x66, 0x67, 0x67, 0x69, 0x69, 
	0x6a, 0x6a, 0x6b, 0x6b, 0x6c, 0x6c, 0x6d, 0x6d, 
	0x6e, 0x6e, 0x6f, 0x6f, 0x70, 0x70, 0x71, 0x71, 
	0x72, 0x72, 0x73, 0x73, 0x74, 0x74, 0x75, 0x75, 
	0x76, 0x76, 0x77, 0x77, 0x78, 0x78, 0x79, 0x79, 
	0x7a, 0x7a, 0x7b, 0x7b, 0x7c, 0x7c, 0x7d, 0x7d, 
	0x7e, 0x7e, 0x00, 0x1b, 0x5b, 0x5a, 0x00, 0x1b, 
	0x5b, 0x3f, 0x37, 0x68, 0x00, 0x1b, 0x5b, 0x3f, 
	0x37, 0x6c, 0x00, 0x1b, 0x4f, 0x46, 0x00, 0x1b, 
	0x4f, 0x4d, 0x00, 0x1b, 0x5b, 0x33, 0x3b, 0x32, 
	0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x32, 0x46, 
	0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x32, 0x48, 0x00, 
	0x1b, 0x5b, 0x32, 0x3b, 0x32, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x3b, 0x32, 0x44, 0x00, 0x1b, 0x5b, 
	0x36, 0x3b, 0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x35, 
	0x3b, 0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 
	0x32, 0x43, 0x00, 0x1b, 0x5b, 0x32, 0x33, 0x7e, 
	0x00, 0x1b, 0x5b, 0x32, 0x34, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x3b, 0x32, 0x50, 0x00, 0x1b, 0x5b, 
	0x31, 0x3b, 0x32, 0x51, 0x00, 0x1b, 0x5b, 0x31, 
	0x3b, 0x32, 0x52, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 
	0x32, 0x53, 0x00, 0x1b, 0x5b, 0x31, 0x35, 0x3b, 
	0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x37, 0x3b, 
	0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x38, 0x3b, 
	0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x39, 0x3b, 
	0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x30, 0x3b, 
	0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x31, 0x3b, 
	0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x33, 0x3b, 
	0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x34, 0x3b, 
	0x32, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x35, 
	0x50, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x35, 0x51, 
	0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x35, 0x52, 0x00, 
	0x1b, 0x5b, 0x31, 0x3b, 0x35, 0x53, 0x00, 0x1b, 
	0x5b, 0x31, 0x35, 0x3b, 0x35, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x37, 0x3b, 0x35, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x38, 0x3b, 0x35, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x39, 0x3b, 0x35, 0x7e, 0x00, 0x1b, 
	0x5b, 0x32, 0x30, 0x3b, 0x35, 0x7e, 0x00, 0x1b, 
	0x5b, 0x32, 0x31, 0x3b, 0x35, 0x7e, 0x00, 0x1b, 
	0x5b, 0x32, 0x33, 0x3b, 0x35, 0x7e, 0x00, 0x1b, 
	0x5b, 0x32, 0x34, 0x3b, 0x35, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x3b, 0x36, 0x50, 0x00, 0x1b, 0x5b, 
	0x31, 0x3b, 0x36, 0x51, 0x00, 0x1b, 0x5b, 0x31, 
	0x3b, 0x36, 0x52, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 
	0x36, 0x53, 0x00, 0x1b, 0x5b, 0x31, 0x35, 0x3b, 
	0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x37, 0x3b, 
	0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x38, 0x3b, 
	0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x39, 0x3b, 
	0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x30, 0x3b, 
	0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x31, 0x3b, 
	0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x33, 0x3b, 
	0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x34, 0x3b, 
	0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x33, 
	0x50, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x33, 0x51, 
	0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x33, 0x52, 0x00, 
	0x1b, 0x5b, 0x31, 0x3b, 0x33, 0x53, 0x00, 0x1b, 
	0x5b, 0x31, 0x35, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x37, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x38, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x39, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 
	0x5b, 0x32, 0x30, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 
	0x5b, 0x32, 0x31, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 
	0x5b, 0x32, 0x33, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 
	0x5b, 0x32, 0x34, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x3b, 0x34, 0x50, 0x00, 0x1b, 0x5b, 
	0x31, 0x3b, 0x34, 0x51, 0x00, 0x1b, 0x5b, 0x31, 
	0x3b, 0x34, 0x52, 0x00, 0x1b, 0x5b, 0x31, 0x4b, 
	0x00, 0x1b, 0x5b, 0x25, 0x69, 0x25, 0x64, 0x3b, 
	0x25, 0x64, 0x52, 0x00, 0x1b, 0x5b, 0x36, 0x6e, 
	0x00, 0x1b, 0x5b, 0x3f, 0x25, 0x5b, 0x3b, 0x30, 
	0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
	0x39, 0x5d, 0x63, 0x00, 0x1b, 0x5b, 0x63, 0x00, 
	0x1b, 0x5b, 0x33, 0x39, 0x3b, 0x34, 0x39, 0x6d, 
	0x00, 0x1b, 0x5d, 0x31, 0x30, 0x34, 0x07, 0x00, 
	0x1b, 0x5d, 0x34, 0x3b, 0x25, 0x70, 0x31, 0x25, 
	0x64, 0x3b, 0x72, 0x67, 0x62, 0x3a, 0x25, 0x70, 
	0x32, 0x25, 0x7b, 0x32, 0x35, 0x35, 0x7d, 0x25, 
	0x2a, 0x25, 0x7b, 0x31, 0x30, 0x30, 0x30, 0x7d, 
	0x25, 0x2f, 0x25, 0x32, 0x2e, 0x32, 0x58, 0x2f, 
	0x25, 0x70, 0x33, 0x25, 0x7b, 0x32, 0x35, 0x35, 
	0x7d, 0x25, 0x2a, 0x25, 0x7b, 0x31, 0x30, 0x30, 
	0x30, 0x7d, 0x25, 0x2f, 0x25, 0x32, 0x2e, 0x32, 
	0x58, 0x2f, 0x25, 0x70, 0x34, 0x25, 0x7b, 0x32, 
	0x35, 0x35, 0x7d, 0x25, 0x2a, 0x25, 0x7b, 0x31, 
	0x30, 0x30, 0x30, 0x7d, 0x25, 0x2f, 0x25, 0x32, 
	0x2e, 0x32, 0x58, 0x1b, 0x5c, 0x00, 0x1b, 0x5b, 
	0x33, 0x6d, 0x00, 0x1b, 0x5b, 0x32, 0x33, 0x6d, 
	0x00, 0x1b, 0x5b, 0x4d, 0x00, 0x1b, 0x5b, 0x25, 
	0x3f, 0x25, 0x70, 0x31, 0x25, 0x7b, 0x38, 0x7d, 
	0x25, 0x3c, 0x25, 0x74, 0x33, 0x25, 0x70, 0x31, 
	0x25, 0x64, 0x25, 0x65, 0x25, 0x70, 0x31, 0x25, 
	0x7b, 0x31, 0x36, 0x7d, 0x25, 0x3c, 0x25, 0x74, 
	0x39, 0x25, 0x70, 0x31, 0x25, 0x7b, 0x38, 0x7d, 
	0x25, 0x2d, 0x25, 0x64, 0x25, 0x65, 0x33, 0x38, 
	0x3b, 0x35, 0x3b, 0x25, 0x70, 0x31, 0x25, 0x64, 
	0x25, 0x3b, 0x6d, 0x00, 0x1b, 0x5b, 0x25, 0x3f, 
	0x25, 0x70, 0x31, 0x25, 0x7b, 0x38, 0x7d, 0x25, 
	0x3c, 0x25, 0x74, 0x34, 0x25, 0x70, 0x31, 0x25, 
	0x64, 0x25, 0x65, 0x25, 0x70, 0x31, 0x25, 0x7b, 
	0x31, 0x36, 0x7d, 0x25, 0x3c, 0x25, 0x74, 0x31, 
	0x30, 0x25, 0x70, 0x31, 0x25, 0x7b, 0x38, 0x7d, 
	0x25, 0x2d, 0x25, 0x64, 0x25, 0x65, 0x34, 0x38, 
	0x3b, 0x35, 0x3b, 0x25, 0x70, 0x31, 0x25, 0x64, 
	0x25, 0x3b, 0x6d, 0x00, 0x1b, 0x6c, 0x00, 0x1b, 
	0x6d, 0x00, 0x02, 0x00, 0x00, 0x00, 0x40, 0x00, 
	0x82, 0x00, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 
	0x07, 0x00, 0x13, 0x00, 0x18, 0x00, 0x2a, 0x00, 
	0x30, 0x00, 0x3a, 0x00, 0x41, 0x00, 0x48, 0x00, 
	0x4f, 0x00, 0x56, 0x00, 0x5d, 0x00, 0x64, 0x00, 
	0x6b, 0x00, 0x72, 0x00, 0x79, 0x00, 0x80, 0x00, 
	0x87, 0x00, 0x8e, 0x00, 0x95, 0x00, 0x9c, 0x00, 
	0xa3, 0x00, 0xaa, 0x00, 0xb1, 0x00, 0xb8, 0x00, 
	0xbf, 0x00, 0xc6, 0x00, 0xcd, 0x00, 0xd4, 0x00, 
	0xdb, 0x00, 0xe2, 0x00, 0xe9, 0x00, 0xf0, 0x00, 
	0xf7, 0x00, 0xfe, 0x00, 0x05, 0x01, 0x0c, 0x01, 
	0x13, 0x01, 0x1a, 0x01, 0x21, 0x01, 0x28, 0x01, 
	0x2f, 0x01, 0x36, 0x01, 0x3d, 0x01, 0x44, 0x01, 
	0x4b, 0x01, 0x52, 0x01, 0x59, 0x01, 0x60, 0x01, 
	0x67, 0x01, 0x6e, 0x01, 0x75, 0x01, 0x7c, 0x01, 
	0x83, 0x01, 0x8a, 0x01, 0x91, 0x01, 0x98, 0x01, 
	0x9f, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xa6, 0x01, 0xac, 0x01, 0x00, 0x00, 
	0x03, 0x00, 0x06, 0x00, 0x09, 0x00, 0x0c, 0x00, 
	0x0f, 0x00, 0x12, 0x00, 0x15, 0x00, 0x18, 0x00, 
	0x1d, 0x00, 0x22, 0x00, 0x27, 0x00, 0x2c, 0x00, 
	0x31, 0x00, 0x35, 0x00, 0x3a, 0x00, 0x3f, 0x00, 
	0x44, 0x00, 0x49, 0x00, 0x4e, 0x00, 0x54, 0x00, 
	0x5a, 0x00, 0x60, 0x00, 0x66, 0x00, 0x6c, 0x00, 
	0x72, 0x00, 0x78, 0x00, 0x7e, 0x00, 0x84, 0x00, 
	0x8a, 0x00, 0x8f, 0x00, 0x94, 0x00, 0x99, 0x00, 
	0x9e, 0x00, 0xa3, 0x00, 0xa9, 0x00, 0xaf, 0x00, 
	0xb5, 0x00, 0xbb, 0x00, 0xc1, 0x00, 0xc7, 0x00, 
	0xcd, 0x00, 0xd3, 0x00, 0xd9, 0x00, 0xdf, 0x00, 
	0xe5, 0x00, 0xeb, 0x00, 0xf1, 0x00, 0xf7, 0x00, 
	0xfd, 0x00, 0x03, 0x01, 0x09, 0x01, 0x0f, 0x01, 
	0x15, 0x01, 0x1b, 0x01, 0x1f, 0x01, 0x24, 0x01, 
	0x29, 0x01, 0x2e, 0x01, 0x33, 0x01, 0x38, 0x01, 
	0x3c, 0x01, 0x40, 0x01, 0x44, 0x01, 0x48, 0x01, 
	0x4d, 0x01, 0x1b, 0x5d, 0x31, 0x31, 0x32, 0x07, 
	0x00, 0x1b, 0x5d, 0x31, 0x32, 0x3b, 0x25, 0x70, 
	0x31, 0x25, 0x73, 0x07, 0x00, 0x1b, 0x5b, 0x33, 
	0x4a, 0x00, 0x1b, 0x5d, 0x35, 0x32, 0x3b, 0x25, 
	0x70, 0x31, 0x25, 0x73, 0x3b, 0x25, 0x70, 0x32, 
	0x25, 0x73, 0x07, 0x00, 0x1b, 0x5b, 0x32, 0x20, 
	0x71, 0x00, 0x1b, 0x5b, 0x25, 0x70, 0x31, 0x25, 
	0x64, 0x20, 0x71, 0x00, 0x1b, 0x5b, 0x33, 0x3b, 
	0x33, 0x7e, 0x00, 0x1b, 0x5b, 0x33, 0x3b, 0x34, 
	0x7e, 0x00, 0x1b, 0x5b, 0x33, 0x3b, 0x35, 0x7e, 
	0x00, 0x1b, 0x5b, 0x33, 0x3b, 0x36, 0x7e, 0x00, 
	0x1b, 0x5b, 0x33, 0x3b, 0x37, 0x7e, 0x00, 0x1b, 
	0x5b, 0x31, 0x3b, 0x32, 0x42, 0x00, 0x1b, 0x5b, 
	0x31, 0x3b, 0x33, 0x42, 0x00, 0x1b, 0x5b, 0x31, 
	0x3b, 0x34, 0x42, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 
	0x35, 0x42, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x36, 
	0x42, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x37, 0x42, 
	0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x33, 0x46, 0x00, 
	0x1b, 0x5b, 0x31, 0x3b, 0x34, 0x46, 0x00, 0x1b, 
	0x5b, 0x31, 0x3b, 0x35, 0x46, 0x00, 0x1b, 0x5b, 
	0x31, 0x3b, 0x36, 0x46, 0x00, 0x1b, 0x5b, 0x31, 
	0x3b, 0x37, 0x46, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 
	0x33, 0x48, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x34, 
	0x48, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x35, 0x48, 
	0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x36, 0x48, 0x00, 
	0x1b, 0x5b, 0x31, 0x3b, 0x37, 0x48, 0x00, 0x1b, 
	0x5b, 0x32, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 0x5b, 
	0x32, 0x3b, 0x34, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 
	0x3b, 0x35, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x3b, 
	0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x32, 0x3b, 0x37, 
	0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x33, 0x44, 
	0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x34, 0x44, 0x00, 
	0x1b, 0x5b, 0x31, 0x3b, 0x35, 0x44, 0x00, 0x1b, 
	0x5b, 0x31, 0x3b, 0x36, 0x44, 0x00, 0x1b, 0x5b, 
	0x31, 0x3b, 0x37, 0x44, 0x00, 0x1b, 0x5b, 0x36, 
	0x3b, 0x33, 0x7e, 0x00, 0x1b, 0x5b, 0x36, 0x3b, 
	0x34, 0x7e, 0x00, 0x1b, 0x5b, 0x36, 0x3b, 0x35, 
	0x7e, 0x00, 0x1b, 0x5b, 0x36, 0x3b, 0x36, 0x7e, 
	0x00, 0x1b, 0x5b, 0x36, 0x3b, 0x37, 0x7e, 0x00, 
	0x1b, 0x5b, 0x35, 0x3b, 0x33, 0x7e, 0x00, 0x1b, 
	0x5b, 0x35, 0x3b, 0x34, 0x7e, 0x00, 0x1b, 0x5b, 
	0x35, 0x3b, 0x35, 0x7e, 0x00, 0x1b, 0x5b, 0x35, 
	0x3b, 0x36, 0x7e, 0x00, 0x1b, 0x5b, 0x35, 0x3b, 
	0x37, 0x7e, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x33, 
	0x43, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x34, 0x43, 
	0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x35, 0x43, 0x00, 
	0x1b, 0x5b, 0x31, 0x3b, 0x36, 0x43, 0x00, 0x1b, 
	0x5b, 0x31, 0x3b, 0x37, 0x43, 0x00, 0x1b, 0x5b, 
	0x31, 0x3b, 0x32, 0x41, 0x00, 0x1b, 0x5b, 0x31, 
	0x3b, 0x33, 0x41, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 
	0x34, 0x41, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x35, 
	0x41, 0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x36, 0x41, 
	0x00, 0x1b, 0x5b, 0x31, 0x3b, 0x37, 0x41, 0x00, 
	0x1b, 0x5b, 0x32, 0x39, 0x6d, 0x00, 0x1b, 0x5b, 
	0x39, 0x6d, 0x00, 0x41, 0x58, 0x00, 0x58, 0x54, 
	0x00, 0x43, 0x72, 0x00, 0x43, 0x73, 0x00, 0x45, 
	0x33, 0x00, 0x4d, 0x73, 0x00, 0x53, 0x65, 0x00, 
	0x53, 0x73, 0x00, 0x6b, 0x44, 0x43, 0x33, 0x00, 
	0x6b, 0x44, 0x43, 0x34, 0x00, 0x6b, 0x44, 0x43, 
	0x35, 0x00, 0x6b, 0x44, 0x43, 0x36, 0x00, 0x6b, 
	0x44, 0x43, 0x37, 0x00, 0x6b, 0x44, 0x4e, 0x00, 
	0x6b, 0x44, 0x4e, 0x33, 0x00, 0x6b, 0x44, 0x4e, 
	0x34, 0x00, 0x6b, 0x44, 0x4e, 0x35, 0x00, 0x6b, 
	0x44, 0x4e, 0x36, 0x00, 0x6b, 0x44, 0x4e, 0x37, 
	0x00, 0x6b, 0x45, 0x4e, 0x44, 0x33, 0x00, 0x6b, 
	0x45, 0x4e, 0x44, 0x34, 0x00, 0x6b, 0x45, 0x4e, 
	0x44, 0x35, 0x00, 0x6b, 0x45, 0x4e, 0x44, 0x36, 
	0x00, 0x6b, 0x45, 0x4e, 0x44, 0x37, 0x00, 0x6b, 
	0x48, 0x4f, 0x4d, 0x33, 0x00, 0x6b, 0x48, 0x4f, 
	0x4d, 0x34, 0x00, 0x6b, 0x48, 0x4f, 0x4d, 0x35, 
	0x00, 0x6b, 0x48, 0x4f, 0x4d, 0x36, 0x00, 0x6b, 
	0x48, 0x4f, 0x4d, 0x37, 0x00, 0x6b, 0x49, 0x43, 
	0x33, 0x00, 0x6b, 0x49, 0x43, 0x34, 0x00, 0x6b, 
	0x49, 0x43, 0x35, 0x00, 0x6b, 0x49, 0x43, 0x36, 
	0x00, 0x6b, 0x49, 0x43, 0x37, 0x00, 0x6b, 0x4c, 
	0x46, 0x54, 0x33, 0x00, 0x6b, 0x4c, 0x46, 0x54, 
	0x34, 0x00, 0x6b, 0x4c, 0x46, 0x54, 0x35, 0x00, 
	0x6b, 0x4c, 0x46, 0x54, 0x36, 0x00, 0x6b, 0x4c, 
	0x46, 0x54, 0x37, 0x00, 0x6b, 0x4e, 0x58, 0x54, 
	0x33, 0x00, 0x6b, 0x4e, 0x58, 0x54, 0x34, 0x00, 
	0x6b, 0x4e, 0x58, 0x54, 0x35, 0x00, 0x6b, 0x4e, 
	0x58, 0x54, 0x36, 0x00, 0x6b, 0x4e, 0x58, 0x54, 
	0x37, 0x00, 0x6b, 0x50, 0x52, 0x56, 0x33, 0x00, 
	0x6b, 0x50, 0x52, 0x56, 0x34, 0x00, 0x6b, 0x50, 
	0x52, 0x56, 0x35, 0x00, 0x6b, 0x50, 0x52, 0x56, 
	0x36, 0x00, 0x6b, 0x50, 0x52, 0x56, 0x37, 0x00, 
	0x6b, 0x52, 0x49, 0x54, 0x33, 0x00, 0x6b, 0x52, 
	0x49, 0x54, 0x34, 0x00, 0x6b, 0x52, 0x49, 0x54, 
	0x35, 0x00, 0x6b, 0x52, 0x49, 0x54, 0x36, 0x00, 
	0x6b, 0x52, 0x49, 0x54, 0x37, 0x00, 0x6b, 0x55, 
	0x50, 0x00, 0x6b, 0x55, 0x50, 0x33, 0x00, 0x6b, 
	0x55, 0x50, 0x34, 0x00, 0x6b, 0x55, 0x50, 0x35, 
	0x00, 0x6b, 0x55, 0x50, 0x36, 0x00, 0x6b, 0x55, 
	0x50, 0x37, 0x00, 0x6b, 0x61, 0x32, 0x00, 0x6b, 
	0x62, 0x31, 0x00, 0x6b, 0x62, 0x33, 0x00, 0x6b, 
	0x63, 0x32, 0x00, 0x72, 0x6d, 0x78, 0x78, 0x00, 
	0x73, 0x6d, 0x78, 0x78, 0x00, 
});
// clang-format on
}

gc_obj_ref<TermInfo_Database> TermInfo_Database::_s_ReadActiveDatabase()
{
    return make_object<TermInfo_Database>(xterm_256color_name.get(), xterm_256color_data.get());
}
