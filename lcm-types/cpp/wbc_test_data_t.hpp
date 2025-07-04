/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen 1.5.1
 **/

#ifndef __wbc_test_data_t_hpp__
#define __wbc_test_data_t_hpp__

#include <lcm/lcm_coretypes.h>



class wbc_test_data_t
{
    public:
        /**
         * LCM Type: int32_t[4]
         */
        int32_t    contact_est[4];

        /**
         * LCM Type: float[12]
         */
        float      Fr_des[12];

        /**
         * LCM Type: float[12]
         */
        float      Fr[12];

        /**
         * LCM Type: float[4]
         */
        float      body_ori_cmd[4];

        /**
         * LCM Type: float[3]
         */
        float      body_pos_cmd[3];

        /**
         * LCM Type: float[3]
         */
        float      body_vel_cmd[3];

        /**
         * LCM Type: float[3]
         */
        float      body_ang_vel_cmd[3];

        /**
         * LCM Type: float[3]
         */
        float      body_pos[3];

        /**
         * LCM Type: float[3]
         */
        float      body_vel[3];

        /**
         * LCM Type: float[4]
         */
        float      body_ori[4];

        /**
         * LCM Type: float[3]
         */
        float      body_ang_vel[3];

        /**
         * LCM Type: float[12]
         */
        float      foot_pos_cmd[12];

        /**
         * LCM Type: float[12]
         */
        float      foot_vel_cmd[12];

        /**
         * LCM Type: float[12]
         */
        float      foot_acc_cmd[12];

        /**
         * LCM Type: float[12]
         */
        float      foot_acc_numeric[12];

        /**
         * LCM Type: float[12]
         */
        float      foot_pos[12];

        /**
         * LCM Type: float[12]
         */
        float      foot_vel[12];

        /**
         * LCM Type: float[12]
         */
        float      foot_local_pos[12];

        /**
         * LCM Type: float[12]
         */
        float      foot_local_vel[12];

        /**
         * LCM Type: float[12]
         */
        float      jpos_cmd[12];

        /**
         * LCM Type: float[12]
         */
        float      jvel_cmd[12];

        /**
         * LCM Type: float[12]
         */
        float      jacc_cmd[12];

        /**
         * LCM Type: float[12]
         */
        float      jpos[12];

        /**
         * LCM Type: float[12]
         */
        float      jvel[12];

        /**
         * LCM Type: float[3]
         */
        float      vision_loc[3];

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to read while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "wbc_test_data_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int wbc_test_data_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int wbc_test_data_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int wbc_test_data_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t wbc_test_data_t::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* wbc_test_data_t::getTypeName()
{
    return "wbc_test_data_t";
}

int wbc_test_data_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->contact_est[0], 4);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->Fr_des[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->Fr[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->body_ori_cmd[0], 4);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->body_pos_cmd[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->body_vel_cmd[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->body_ang_vel_cmd[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->body_pos[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->body_vel[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->body_ori[0], 4);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->body_ang_vel[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->foot_pos_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->foot_vel_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->foot_acc_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->foot_acc_numeric[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->foot_pos[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->foot_vel[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->foot_local_pos[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->foot_local_vel[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->jpos_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->jvel_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->jacc_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->jpos[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->jvel[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->vision_loc[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int wbc_test_data_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->contact_est[0], 4);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->Fr_des[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->Fr[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->body_ori_cmd[0], 4);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->body_pos_cmd[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->body_vel_cmd[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->body_ang_vel_cmd[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->body_pos[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->body_vel[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->body_ori[0], 4);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->body_ang_vel[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->foot_pos_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->foot_vel_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->foot_acc_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->foot_acc_numeric[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->foot_pos[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->foot_vel[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->foot_local_pos[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->foot_local_vel[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->jpos_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->jvel_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->jacc_cmd[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->jpos[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->jvel[0], 12);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->vision_loc[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int wbc_test_data_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int32_t_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 3);
    enc_size += __float_encoded_array_size(NULL, 3);
    enc_size += __float_encoded_array_size(NULL, 3);
    enc_size += __float_encoded_array_size(NULL, 3);
    enc_size += __float_encoded_array_size(NULL, 3);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 3);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 12);
    enc_size += __float_encoded_array_size(NULL, 3);
    return enc_size;
}

uint64_t wbc_test_data_t::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0x5a37c37e74007f59LL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
