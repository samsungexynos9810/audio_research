/* Configuration for a stream */
struct pcm_config {
    unsigned int channels;            // Y
    unsigned int rate;                // Y
    unsigned int period_size;         // Y
    unsigned int period_count;        // Y
    enum pcm_format format;           // Y
    unsigned int start_threshold;     // Y
    unsigned int stop_threshold;      // Y
    unsigned int silence_threshold;   // N
    unsigned int silence_size;        // N
    int avail_min;                    // N
};
