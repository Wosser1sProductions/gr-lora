#ifndef TABLES_H
#define TABLES_H

namespace gr {
  namespace lora {
      const uint8_t prng_header[] = {
          0x22, 0x11, 0x00, 0x00, 0x00
      };

      const uint8_t prng_payload[] = {
          0xdf, 0xef, 0xb0, 0xf7, 0x9e, 0xfd, 0xc6, 0xdf, 0x10, 0xfb, 0x43, 0x34, 0xa8, 0x5f, 0xf2, 0x97, 0x62, 0x8, 0xf8, 0x49, 0xbe, 0x8a, 0xa4, 0xd6, 0x16, 0xe6, 0x85, 0x39, 0x6b, 0xef, 0xe5, 0xbc, 0xb3, 0x1c, 0x14, 0xa7, 0x3d, 0x4f, 0x91, 0x61, 0x85, 0x72, 0x20, 0x45, 0x4, 0x25, 0x80, 0x1b, 0x41, 0xa7, 0x5b, 0x4, 0xa2, 0x80, 0x9b, 0x41, 0xa7, 0x10, 0x4f, 0x43, 0x61, 0xa8, 0x39, 0xb9, 0xa4, 0x83, 0x16, 0xcb, 0x85, 0xa0, 0x6b, 0x68, 0xae, 0xbc, 0x19, 0x1c, 0x8d, 0xa7, 0xba, 0x4f, 0xda, 0x2a, 0x64, 0xd8, 0x58, 0xdc, 0xb0, 0xa2, 0x9e, 0xd0, 0xc6, 0x46, 0x10, 0x7c, 0x8, 0x34, 0x2, 0x5f, 0x6b, 0x97, 0xe5, 0x8, 0xb3, 0x2, 0x5f, 0x20, 0xdc, 0x4f, 0xa2, 0x61, 0x9b, 0x72, 0xec, 0xe, 0xae, 0xc4, 0x19, 0xa8, 0x8d, 0xb9, 0xf1, 0xc8, 0x3b, 0x2a, 0x57, 0xd8, 0x46, 0xdc, 0x7c, 0xe9, 0x34, 0x31, 0x5f, 0x75, 0xdc, 0x62, 0xa2, 0xf8, 0x9b, 0xf5, 0xa7, 0xe, 0x4, 0xc0, 0x80, 0xa8, 0xa, 0xb9, 0xba, 0xa3, 0xda, 0x80, 0x2f, 0x43, 0xf2, 0x79, 0x62, 0xa2, 0xb3, 0xd0, 0x14, 0xd, 0x76, 0x96, 0x2b, 0xee, 0xd7, 0x72, 0xd, 0x44, 0x96, 0x7e, 0xee, 0xb1, 0x70, 0x77, 0x2f, 0x39, 0xc0, 0x52, 0x28, 0x27, 0xb0, 0x3, 0x73, 0x16, 0xbf, 0xce, 0xdf, 0xc9, 0xb7, 0xd6, 0x18, 0xe6, 0xcd, 0x7a, 0x43, 0x4f, 0x7c, 0xbf, 0x7b, 0xa, 0xbe, 0x6b, 0xc5, 0xe5, 0x5d, 0xe4, 0xe4, 0xbc, 0x5b, 0xce, 0xd1, 0xa8, 0xe6, 0x57, 0x3b, 0x4, 0xcf, 0xa6, 0xbc, 0xd9, 0x57, 0x27, 0x45, 0x69, 0xe6, 0xf7, 0xe2, 0x36, 0x3b, 0x77, 0xe5, 0x89, 0x5d, 0x46, 0x2f, 0x2f, 0x79, 0x49, 0x83, 0xb8, 0xdb, 0x5f, 0xe9, 0x5, 0x88, 0x1d, 0x9b, 0x7, 0x2, 0x8, 0x2b, 0x99, 0xf5, 0x91, 0xbb, 0x85, 0x90, 0x60, 0x76, 0x7f, 0x3a, 0x61, 0x1c, 0x7c, 0xee, 0xc7, 0x5f, 0x6a, 0x41, 0x31, 0x39, 0xfe, 0xcf, 0x82, 0xb8, 0xdb, 0x14, 0xa2, 0xac, 0x68, 0xd5, 0xf6, 0xfc, 0x3e, 0xf7, 0x7e, 0x2c, 0xd8, 0xc4, 0x6d, 0xe2, 0xb9, 0x12, 0xa4, 0x3a, 0x2, 0x7, 0x4e, 0x40, 0x2, 0xba, 0x7, 0xde, 0x9e, 0x6c, 0xc6, 0x52, 0x79, 0x51, 0xb2, 0xad, 0x5c, 0xd8, 0x6, 0xdc, 0x27, 0x83, 0xd5, 0x1f, 0x66, 0xf6, 0x89, 0x4f, 0xc4, 0x26, 0x88, 0x11, 0xb8, 0x3d, 0xa3, 0x95, 0xdb, 0x6, 0xe9, 0xc9, 0xe2, 0xd6, 0x35, 0xa9, 0x13, 0x93, 0xad, 0x1d, 0xae, 0x93, 0x42, 0x4e, 0x60, 0xc1, 0x83, 0x6c, 0x1, 0x3c, 0x9b, 0x96, 0xad, 0x76, 0xc5, 0x70, 0xe0, 0xb6, 0x73, 0x36, 0x45, 0x72, 0x4a, 0xb3, 0x7a, 0x57, 0xd7, 0xfc, 0x51, 0xf9, 0xe6, 0xfe, 0x7a, 0x9e, 0xe, 0xb0, 0xf4, 0xd9, 0xe3, 0xa5, 0x58, 0x28, 0xcb, 0xf2, 0x3c, 0xfd, 0x96, 0x9f, 0x77, 0x80, 0x70, 0xd5, 0x79, 0x66, 0x9e, 0x83, 0xeb, 0xe0, 0x34, 0xe3, 0x94, 0x53, 0x1e, 0xa, 0x91, 0x44, 0xca, 0x20, 0x0, 0x23, 0x17, 0x4d, 0x92, 0x2f, 0x8f, 0x32, 0xd1, 0x28, 0x3f, 0x9, 0x5f, 0xc4, 0x4d, 0x5a, 0xc6, 0xe9, 0x8d, 0xbd, 0xda, 0x3e, 0xbd, 0x92, 0x47, 0xc0, 0x63, 0x41, 0x53, 0x78, 0xa, 0xe9, 0x8f, 0x7e, 0x41, 0x96, 0x30, 0x41, 0x6, 0xad, 0x6b, 0x93, 0x18, 0x1d, 0xb1, 0x4e, 0xd5, 0x2f, 0x66, 0xf2, 0x82, 0x72, 0x1, 0xf1, 0xd0, 0x3c, 0xc, 0xce, 0x84, 0xb8, 0xe6, 0x9c, 0x31, 0xed, 0x8f, 0xac, 0xf3, 0x4a, 0xb6, 0xec, 0x3c, 0xa9, 0xd9, 0xcb, 0x2a, 0x8a, 0x93, 0x2a, 0x1d, 0x8e, 0x95, 0x9, 0xd, 0x8f, 0x20, 0xf1, 0x3e, 0x74, 0x22, 0xfd, 0x5a, 0xdf, 0xbd, 0xfb, 0xf9, 0x77, 0xfe, 0x43, 0x22, 0x10, 0xc, 0xe1, 0xe6, 0x53, 0x62
      };
  }
}

#endif /* TABLES_H */