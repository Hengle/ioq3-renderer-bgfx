
static const uint8_t Bloom_fragment_gl[454] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x10, 0x75, // FSH.o.><.......u
	0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, // _TextureSampler.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x0e, 0x75, 0x5f, 0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x53, 0x61, 0x6d, // ......u_BloomSam
	0x70, 0x6c, 0x65, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x1b, 0x75, 0x5f, 0x42, 0x6c, 0x6f, // pler.......u_Blo
	0x6f, 0x6d, 0x5f, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x5f, 0x57, 0x72, 0x69, 0x74, 0x65, // om_Enabled_Write
	0x5f, 0x53, 0x63, 0x61, 0x6c, 0x65, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x65, 0x01, 0x00, 0x00, // _Scale......e...
	0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // in vec2 v_texcoo
	0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, // rd0;.uniform sam
	0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // pler2D u_Texture
	0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // Sampler;.uniform
	0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x42, 0x6c, 0x6f, //  sampler2D u_Blo
	0x6f, 0x6d, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, // omSampler;.unifo
	0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x5f, // rm vec4 u_Bloom_
	0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x5f, 0x57, 0x72, 0x69, 0x74, 0x65, 0x5f, 0x53, 0x63, // Enabled_Write_Sc
	0x61, 0x6c, 0x65, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, // ale;.void main (
	0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ).{.  vec4 tmpva
	0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, // r_1;.  tmpvar_1.
	0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // w = 1.0;.  tmpva
	0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, // r_1.xyz = (textu
	0x72, 0x65, 0x20, 0x28, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, // re (u_TextureSam
	0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // pler, v_texcoord
	0x30, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // 0).xyz + (textur
	0x65, 0x20, 0x28, 0x75, 0x5f, 0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // e (u_BloomSample
	0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x2e, // r, v_texcoord0).
	0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x5f, 0x45, 0x6e, // xyz * u_Bloom_En
	0x61, 0x62, 0x6c, 0x65, 0x64, 0x5f, 0x57, 0x72, 0x69, 0x74, 0x65, 0x5f, 0x53, 0x63, 0x61, 0x6c, // abled_Write_Scal
	0x65, 0x2e, 0x7a, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, // e.z));.  gl_Frag
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // Color = tmpvar_1
	0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                             // ;.}...
};

static const uint8_t Bloom_fragment_d3d11[546] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1b, 0x75, // FSH.o.><.......u
	0x5f, 0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x5f, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x5f, 0x57, // _Bloom_Enabled_W
	0x72, 0x69, 0x74, 0x65, 0x5f, 0x53, 0x63, 0x61, 0x6c, 0x65, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, // rite_Scale......
	0x09, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, // .u_Texture0.....
	0x07, 0x75, 0x5f, 0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x30, 0x01, 0x01, 0x00, 0x01, 0x00, 0xcc, 0x01, // .u_Bloom0.......
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x80, 0x52, 0x47, 0x07, 0x85, 0x62, 0xf8, 0xd3, 0xdf, 0xb7, // ..DXBC.RG..b....
	0xfb, 0x46, 0xf3, 0xd9, 0x91, 0x03, 0x01, 0x00, 0x00, 0x00, 0xcc, 0x01, 0x00, 0x00, 0x03, 0x00, // .F..............
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, // GNP...........8.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......D.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, // ..............SV
	0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, // _POSITION.TEXCOO
	0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, // RD....OSGN,.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ...... .........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, // ..............SV
	0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x45, 0x58, 0x0c, 0x01, // _TARGET...SHEX..
	0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x6a, 0x08, 0x00, 0x01, 0x59, 0x00, // ..P...C...j...Y.
	0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5a, 0x00, // ..F. .........Z.
	0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, // ...`......Z....`
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, // ......X....p....
	0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x01, 0x00, // ..UU..X....p....
	0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, // ..UU..b...2.....
	0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, // ..e.... ......h.
	0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8b, 0xc2, 0x00, 0x00, 0x80, 0x43, 0x55, // ......E.......CU
	0x15, 0x00, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, // ..r.......F.....
	0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, // ..F~.......`....
	0x00, 0x00, 0x45, 0x00, 0x00, 0x8b, 0xc2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00, 0x72, 0x00, // ..E.......CU..r.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, // ......F.......F~
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, // .......`......2.
	0x00, 0x0a, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, // ..r ......F.....
	0x00, 0x00, 0xa6, 0x8a, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, // .... .........F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, // ......6.... ....
	0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, // ...@.....?>.....
	0x10, 0x00,                                                                                     // ..
};

static const uint8_t Bloom_fragment_vk[1572] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1b, 0x75, // FSH.o.><.......u
	0x5f, 0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x5f, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x5f, 0x57, // _Bloom_Enabled_W
	0x72, 0x69, 0x74, 0x65, 0x5f, 0x53, 0x63, 0x61, 0x6c, 0x65, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, // rite_Scale......
	0x10, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // .u_TextureSample
	0x72, 0x10, 0x00, 0x40, 0x00, 0x50, 0x00, 0x0e, 0x75, 0x5f, 0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x53, // r..@.P..u_BloomS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x10, 0x01, 0x41, 0x00, 0x51, 0x00, 0xc0, 0x05, 0x00, 0x00, // ampler..A.Q.....
	0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0xb4, 0x00, 0x00, 0x00, // ..#.............
	0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, // ....GLSL.std.450
	0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, // ............main
	0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, // ....h...q.......
	0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, // ................
	0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, // ............main
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x08, 0x00, 0x21, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x54, 0x65, // ........!...u_Te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x53, 0x61, 0x6d, 0x70, // xtureSamplerSamp
	0x6c, 0x65, 0x72, 0x00, 0x05, 0x00, 0x08, 0x00, 0x24, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x54, 0x65, // ler.....$...u_Te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x54, 0x65, 0x78, 0x74, // xtureSamplerText
	0x75, 0x72, 0x65, 0x00, 0x05, 0x00, 0x08, 0x00, 0x28, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x42, 0x6c, // ure.....(...u_Bl
	0x6f, 0x6f, 0x6d, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // oomSamplerSample
	0x72, 0x00, 0x00, 0x00, 0x05, 0x00, 0x08, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x42, 0x6c, // r.......*...u_Bl
	0x6f, 0x6f, 0x6d, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // oomSamplerTextur
	0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x56, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, // e.......V...$Glo
	0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x0a, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // bal.....V.......
	0x75, 0x5f, 0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x5f, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x5f, // u_Bloom_Enabled_
	0x57, 0x72, 0x69, 0x74, 0x65, 0x5f, 0x53, 0x63, 0x61, 0x6c, 0x65, 0x00, 0x05, 0x00, 0x03, 0x00, // Write_Scale.....
	0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x68, 0x00, 0x00, 0x00, // X...........h...
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, // v_texcoord0.....
	0x71, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, // q...bgfx_FragDat
	0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // a0..G...!..."...
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, // ....G...!...!...
	0x50, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // P...G...$..."...
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, // ....G...$...!...
	0x40, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // @...G...(..."...
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, // ....G...(...!...
	0x51, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // Q...G...*..."...
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, // ....G...*...!...
	0x41, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // A...H...V.......
	0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x56, 0x00, 0x00, 0x00, // #.......G...V...
	0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x58, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // ....G...X..."...
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x58, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, // ....G...X...!...
	0x30, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x68, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // 0...G...h.......
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x71, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...q.......
	0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, // ............!...
	0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, // ................
	0x16, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, // ........ .......
	0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, //  ... ...........
	0x3b, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ;... ...!.......
	0x20, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, //  ...#...........
	0x3b, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ;...#...$.......
	0x3b, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ;... ...(.......
	0x3b, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ;...#...*.......
	0x15, 0x00, 0x04, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....-... .......
	0x2b, 0x00, 0x04, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // +...-...2.......
	0x1b, 0x00, 0x03, 0x00, 0x36, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, // ....6...........
	0x47, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, // G...............
	0x56, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x57, 0x00, 0x00, 0x00, // V....... ...W...
	0x02, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x57, 0x00, 0x00, 0x00, // ....V...;...W...
	0x58, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x59, 0x00, 0x00, 0x00, // X...........Y...
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x59, 0x00, 0x00, 0x00, //  .......+...Y...
	0x5a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x5b, 0x00, 0x00, 0x00, // Z....... ...[...
	0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, // ........+.......
	0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x20, 0x00, 0x04, 0x00, 0x67, 0x00, 0x00, 0x00, // a......? ...g...
	0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x67, 0x00, 0x00, 0x00, // ........;...g...
	0x68, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x70, 0x00, 0x00, 0x00, // h....... ...p...
	0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x70, 0x00, 0x00, 0x00, // ........;...p...
	0x71, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, // q.......6.......
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, // ................
	0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // ....=......."...
	0x21, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, // !...=.......%...
	0x24, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, // $...=.......)...
	0x28, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, // (...=.......+...
	0x2a, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x00, // *...=.......i...
	0x68, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x36, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, // h...V...6.......
	0x25, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, // %..."...W.......
	0xab, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, // ........i...O...
	0x47, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, // G...............
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, // ............V...
	0x36, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, // 6.......+...)...
	0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, // W...............
	0x69, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x47, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, // i...O...G.......
	0xb3, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00, // ....A...[.......
	0x58, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // X...2...Z...=...
	0x07, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, // ................
	0x47, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, // G...............
	0x81, 0x00, 0x05, 0x00, 0x47, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, // ....G...........
	0x97, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x00, 0x00, // ....Q...........
	0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, // ........Q.......
	0x9b, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, // ............Q...
	0x07, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x50, 0x00, 0x07, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x9d, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x00, 0x00, // P...............
	0x9b, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, // ........a...>...
	0x71, 0x00, 0x00, 0x00, 0x9d, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, // q...........8...
	0x00, 0x00, 0x10, 0x00,                                                                         // ....
};