/*
 * License for the BOLOS OTP 2FA Application project, originally found here:
 * https://github.com/parkerhoyes/bolos-app-otp2fa
 *
 * Copyright (C) 2017 Parker Hoyes <contact@parkerhoyes.com>
 *
 * This software is provided "as-is", without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from the
 * use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not claim
 *    that you wrote the original software. If you use this software in a
 *    product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#include <stdint.h>

/*
 * Perform the HMAC-SHA-1 algorithm on the specified key and text to generate a 160-bit hash.
 *
 * Args:
 *     key: the key, as a byte string
 *     key_len: the number of bytes in key; must be <= 64
 *     text: the text, as a byte string
 *     text_len: the number of bytes in text
 *     dest: the buffer in which to store the resulting 160-bit hash, big-endian
 */
void app_hmac_sha1_hash(const unsigned char *key, uint8_t key_len, const unsigned char *text, uint32_t text_len,
		unsigned char dest[20]);
