#include <iostream>
#include <array>
#include <cstdint>
#include <chrono>

using patch_array = std::array<uint8_t, 16>;
using return_array = std::array<uint8_t, 16>;

void max_pool(const patch_array& arr_patch,
              return_array& arr_buffer);

int main() {
   patch_array myPatch;
   return_array myBuffer;

   auto begin = std::chrono::steady_clock::now();
   max_pool(myPatch, myBuffer);
   auto end = std::chrono::steady_clock::now();

   std::cout << "Time = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() <<std::endl;

   return 0;
}

void max_pool(const patch_array& arr_patch,
              return_array& arr_buffer) {

}


