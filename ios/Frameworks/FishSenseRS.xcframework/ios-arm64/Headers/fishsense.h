#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Coordinate {
  uintptr_t x;
  uintptr_t y;
} Coordinate;

typedef struct ComputeLengthResult {
  float length;
  struct Coordinate left;
  struct Coordinate right;
  bool fish_found;
  const unsigned char *error_string;
} ComputeLengthResult;

struct ComputeLengthResult compute_length(const unsigned char *img_data,
                                          uint32_t img_width,
                                          uint32_t img_height,
                                          const unsigned char *depth_data,
                                          uint32_t depth_width,
                                          uint32_t depth_height,
                                          const float *camera_intrinsics_inverted_data);
