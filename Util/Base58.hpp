#include<stdexcept>
#include<string>
#include<vector>

namespace Util { namespace Base58 {

/** Util::Base58::decode
 *
 * @brief decode a base58 string.
 *
 * @return true if decoding succeeded.
 *
 * @desc This is a ***very simple*** decoder and
 * does ***not*** check the checksum.
 * The assumption is that this software talks to
 * other software and not the user, so the
 * checksum would not validate anything that a
 * piece of software would be incorrect with.
 */
bool decode( const char* psz
			, std::vector<unsigned char>& vch
			, int max_ret_len
			);

std::string hexToString(std::vector<std::uint8_t> script);

}}
