/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __sym_optimizer_params_t_hpp__
#define __sym_optimizer_params_t_hpp__


namespace sym
{

/// Parameters for the Optimizer
class optimizer_params_t
{
    public:
        // Print information for every iteration?
        int8_t verbose;

        // Damping value (lambda) on the first iteration of the LM loop
        double initial_lambda;

        // Factor greater than one to multiply by lambda
        double lambda_up_factor;

        // Factor less than one to multiply by lambda
        double lambda_down_factor;

        // Smallest allowed value for lambda
        double lambda_lower_bound;

        // Largest allowed value for lambda
        double lambda_upper_bound;

        // Damp the Hessian adaptively based on the values on its diagonal?
        int8_t use_diagonal_damping;

        // Damp the Hessian with a constant lambda?
        int8_t use_unit_damping;

        // Use the elementwise max of the diagonal over all past iterations, instead
        // of the current diagonal? (Only used when use_diagonal_damping is turned on)
        int8_t keep_max_diagonal_damping;

        // Initial values of the diagonal when using keep_max_diagonal_damping (i.e.
        // if the max for a particular element on the diagonal is less than
        // diagonal_damping_min, that element of the diagonal is set to
        // diagonal_damping_min)
        double diagonal_damping_min;

        // Max number of LM iterations to run in an optimization
        int32_t iterations;

        // Early exit from the optimization if the relative reduction is positive and
        // less than this amount
        double early_exit_min_reduction;

        // Allow uphill movements in the optimization?
        int8_t enable_bold_updates;

    public:
        optimizer_params_t() = default;

        /**
         * Member constructor
         */
        inline optimizer_params_t(
            const int8_t& verbose_arg,
            const double& initial_lambda_arg,
            const double& lambda_up_factor_arg,
            const double& lambda_down_factor_arg,
            const double& lambda_lower_bound_arg,
            const double& lambda_upper_bound_arg,
            const int8_t& use_diagonal_damping_arg,
            const int8_t& use_unit_damping_arg,
            const int8_t& keep_max_diagonal_damping_arg,
            const double& diagonal_damping_min_arg,
            const int32_t& iterations_arg,
            const double& early_exit_min_reduction_arg,
            const int8_t& enable_bold_updates_arg
        );

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
        constexpr static int64_t getHash();

        using type_name_array_t = const char[19];

        inline static constexpr type_name_array_t* getTypeNameArrayPtr();

        /**
         * Returns "optimizer_params_t"
         */
        inline static constexpr const char* getTypeName();

        /**
         * Returns "sym"
         */
        inline static const char * getPackageName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        constexpr static uint64_t _computeHash(const __lcm_hash_ptr *p);

        // Comparison operators.
        inline bool operator==(const optimizer_params_t& other) const;
        inline bool operator!=(const optimizer_params_t& other) const;
};

optimizer_params_t::optimizer_params_t(
    const int8_t& verbose_arg,
    const double& initial_lambda_arg,
    const double& lambda_up_factor_arg,
    const double& lambda_down_factor_arg,
    const double& lambda_lower_bound_arg,
    const double& lambda_upper_bound_arg,
    const int8_t& use_diagonal_damping_arg,
    const int8_t& use_unit_damping_arg,
    const int8_t& keep_max_diagonal_damping_arg,
    const double& diagonal_damping_min_arg,
    const int32_t& iterations_arg,
    const double& early_exit_min_reduction_arg,
    const int8_t& enable_bold_updates_arg
) : verbose(verbose_arg),
    initial_lambda(initial_lambda_arg),
    lambda_up_factor(lambda_up_factor_arg),
    lambda_down_factor(lambda_down_factor_arg),
    lambda_lower_bound(lambda_lower_bound_arg),
    lambda_upper_bound(lambda_upper_bound_arg),
    use_diagonal_damping(use_diagonal_damping_arg),
    use_unit_damping(use_unit_damping_arg),
    keep_max_diagonal_damping(keep_max_diagonal_damping_arg),
    diagonal_damping_min(diagonal_damping_min_arg),
    iterations(iterations_arg),
    early_exit_min_reduction(early_exit_min_reduction_arg),
    enable_bold_updates(enable_bold_updates_arg) {}

int optimizer_params_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int optimizer_params_t::decode(const void *buf, int offset, int maxlen)
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

int optimizer_params_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

constexpr int64_t optimizer_params_t::getHash()
{
    return _computeHash(NULL);
}

constexpr optimizer_params_t::type_name_array_t* optimizer_params_t::getTypeNameArrayPtr() {
    return &"optimizer_params_t";
}

constexpr const char* optimizer_params_t::getTypeName()
{
    return *optimizer_params_t::getTypeNameArrayPtr();
}

const char * optimizer_params_t::getPackageName()
{
    return "sym";
}

int optimizer_params_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->verbose, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->initial_lambda, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->lambda_up_factor, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->lambda_down_factor, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->lambda_lower_bound, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->lambda_upper_bound, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->use_diagonal_damping, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->use_unit_damping, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->keep_max_diagonal_damping, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->diagonal_damping_min, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->iterations, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->early_exit_min_reduction, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->enable_bold_updates, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int optimizer_params_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->verbose, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->initial_lambda, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->lambda_up_factor, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->lambda_down_factor, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->lambda_lower_bound, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->lambda_upper_bound, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->use_diagonal_damping, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->use_unit_damping, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->keep_max_diagonal_damping, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->diagonal_damping_min, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->iterations, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->early_exit_min_reduction, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->enable_bold_updates, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int optimizer_params_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    return enc_size;
}

constexpr uint64_t optimizer_params_t::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0x4bde142fb3887057LL;
    return (hash<<1) + ((hash>>63)&1);
}

bool optimizer_params_t::operator==(const optimizer_params_t& other) const {
  return (
          (verbose==other.verbose) && 
          (initial_lambda==other.initial_lambda) && 
          (lambda_up_factor==other.lambda_up_factor) && 
          (lambda_down_factor==other.lambda_down_factor) && 
          (lambda_lower_bound==other.lambda_lower_bound) && 
          (lambda_upper_bound==other.lambda_upper_bound) && 
          (use_diagonal_damping==other.use_diagonal_damping) && 
          (use_unit_damping==other.use_unit_damping) && 
          (keep_max_diagonal_damping==other.keep_max_diagonal_damping) && 
          (diagonal_damping_min==other.diagonal_damping_min) && 
          (iterations==other.iterations) && 
          (early_exit_min_reduction==other.early_exit_min_reduction) && 
          (enable_bold_updates==other.enable_bold_updates));
}

bool optimizer_params_t::operator!=(const optimizer_params_t& other) const {
  return !(*this==other);
}

}

#endif