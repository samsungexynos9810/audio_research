#define UINT_MAX 4294967295

struct pcm_config pcm_config_primary_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 960,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 960,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_fast_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 192,
    .period_count    = 2,
    .format          = 0,
    .start_threshold = 192,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_voip_rx = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_fmradio_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_deep_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 960,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 960,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_deep_playback_wide_res = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 960,
    .period_count    = 4,
    .format          = 3,
    .start_threshold = 960,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_deep_playback_uhqa = {
    .channels        = 2,
    .rate            = 192000,
    .period_size     = 3840,
    .period_count    = 4,
    .format          = 3,
    .start_threshold = 960,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_deep_playback_suhqa = {
    .channels        = 2,
    .rate            = 384000,
    .period_size     = 7680,
    .period_count    = 2,
    .format          = 1,
    .start_threshold = 960,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_low_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 96,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 96,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_mmap_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 96,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 96,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_voicerx_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_btsco_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_spkamp_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_aux_playback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 960,
    .period_count    = 2,
    .format          = 0,
    .start_threshold = 960,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_mixed_capture = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_erap_in = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_primary_capture = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 960,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 960,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_voip_tx = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_low_capture = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 192,
    .period_count    = 2,
    .format          = 0,
    .start_threshold = 192,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_mmap_capture = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 96,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 96,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_voicetx_capture = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_fmradio_capture = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_out_loopback = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_spkamp_reference = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 480,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 480,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_call_record = {
    .channels        = 2,
    .rate            = 32000,
    .period_size     = 2048,
    .period_count    = 2,
    .format          = 0,
    .start_threshold = 2048,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_callmic_capture = {
    .channels        = 2,
    .rate            = 32000,
    .period_size     = 2048,
    .period_count    = 2,
    .format          = 0,
    .start_threshold = 2048,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_fm_record = {
    .channels        = 2,
    .rate            = 48000,
    .period_size     = 960,
    .period_count    = 4,
    .format          = 0,
    .start_threshold = 960,
    .stop_threshold  = UINT_MAX,
};

struct pcm_config pcm_config_hotword_capture = {
    .channels        = 2,
    .rate            = 32000,
    .period_size     = 2048,
    .period_count    = 2,
    .format          = 0,
    // no start / stop threshold
};
