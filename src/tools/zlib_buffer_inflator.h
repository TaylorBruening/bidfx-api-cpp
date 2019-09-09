/**  Copyright 2019 BidFX

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

            http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
 */

#ifndef PUBLIC_API_CPP_TOOLS_ZLIB_BUFFER_INFLATOR_H_
#define PUBLIC_API_CPP_TOOLS_ZLIB_BUFFER_INFLATOR_H_

#include <memory>
#include "lib/zlib/zlib.h"
#include "buffer_inflator.h"

#define ZLIB_INFLATOR_CHUNK_SIZE 16384

namespace bidfx_public_api::tools
{

class ZLIBBufferInflator : public BufferInflator
{
private:
    z_stream stream_;
    void InitializeStream();
public:
    ZLIBBufferInflator();
    ~ZLIBBufferInflator();
    ByteBuffer Inflate(ByteBuffer& compressed_buffer) override;
};

}

#endif //PUBLIC_API_CPP_TOOLS_UNCOMPRESSED_BUFFER_INFLATOR_H_
