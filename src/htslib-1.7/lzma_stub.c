
#if defined(__APPLE__) && defined(__MACH__)

#include <stdlib.h>
#include "os/lzma_stub.h"

lzma_ret lzma_easy_buffer_encode(
        uint32_t preset, lzma_check check,
        const struct lzma_allocator *allocator,
        const uint8_t *in, size_t in_size,
        uint8_t *out, size_t *out_pos, size_t out_size) {
    return LZMA_OK;
}


size_t lzma_stream_buffer_bound(size_t uncompressed_size) {
    return 0;
}

lzma_ret lzma_stream_decoder(lzma_stream *strm, uint64_t memlimit, uint32_t flags) {
    return LZMA_OK;
}

uint64_t lzma_easy_decoder_memusage(uint32_t preset) {
    return 0;
}

lzma_ret lzma_code(lzma_stream *strm, lzma_action action) {
    return LZMA_OK;
}

void lzma_end(lzma_stream *strm) {
    return;
}

#endif

