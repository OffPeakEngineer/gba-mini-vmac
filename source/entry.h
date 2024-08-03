#include <stdint.h>

int entry();

typedef char SDL_keysym;
typedef uint32_t Uint32;
typedef uint8_t Uint8;
typedef uint16_t Uint16;



#define AUDIO_U8 0x0008
#define SDL_KEYUP 0x00
#define SDL_KEYDOWN 0x01
#define SDL_MOUSEBUTTONUP 0x02
#define SDL_MOUSEBUTTONDOWN 0x03
#define SDL_MOUSEMOTION 0x04
#define SDL_APPMOUSEFOCUS 0x05
#define SDL_APPINPUTFOCUS 0x06
#define SDL_ACTIVEEVENT 0x07
#define SDL_QUIT 0x08

#define SDL_INIT_AUDIO 0x00
#define SDL_INIT_VIDEO 0x01
#define SDL_INIT_TIMER 0x02
#define SDL_GRAB_ON 1
#define SDL_GRAB_OFF 0
#define SDL_FULLSCREEN 1
#define SDL_DISABLE 0
#define SDL_ENABLE 1

#define SDL_LIL_ENDIAN  1234
#define SDL_BYTEORDER   SDL_LIL_ENDIAN


typedef struct SDL_SurfaceData SDL_SurfaceData;

typedef struct SDL_Surface
{
    Uint32 flags;               /**< Read-only */
    // SDL_PixelFormat *format;    /**< Read-only */
    int w, h;                   /**< Read-only */
    int pitch;                  /**< Read-only */
    void *pixels;               /**< Read-write */

    /** Application data associated with the surface */
    void *userdata;             /**< Read-write */

    /** information needed for surfaces requiring locks */
    int locked;                 /**< Read-only */

    /** list of BlitMap that hold a reference to this surface */
    void *list_blitmap;         /**< Private */

    /** clipping information */
    // SDL_Rect clip_rect;         /**< Read-only */

    /** info for fast blit mapping to other surfaces */
    // SDL_BlitMap *map;           /**< Private */

    /** Reference count -- used when freeing surface */
    int refcount;               /**< Read-mostly */
} SDL_Surface;


// typedef enum SDLKey
// {
//     SDLK_UNKNOWN = 0,
//     SDLK_FIRST = 0,
//     SDLK_BACKSPACE = 8,
//     SDLK_TAB = 9,
//     SDLK_CLEAR = 12,
//     SDLK_RETURN = 13,
//     SDLK_PAUSE = 19,
//     SDLK_ESCAPE = 27,
//     SDLK_SPACE = 32,
//     SDLK_EXCLAIM = 33,
//     SDLK_QUOTEDBL = 34,
//     SDLK_HASH = 35,
//     SDLK_DOLLAR = 36,
//     SDLK_AMPERSAND = 38,
//     SDLK_QUOTE = 39,
//     SDLK_LEFTPAREN = 40,
//     SDLK_RIGHTPAREN = 41,
//     SDLK_ASTERISK = 42,
//     SDLK_PLUS = 43,
//     SDLK_COMMA = 44,
//     SDLK_MINUS = 45,
//     SDLK_PERIOD = 46,
//     SDLK_SLASH = 47,
//     SDLK_0 = 48,
//     SDLK_1 = 49,
//     SDLK_2 = 50,
//     SDLK_3 = 51,
//     SDLK_4 = 52,
//     SDLK_5 = 53,
//     SDLK_6 = 54,
//     SDLK_7 = 55,
//     SDLK_8 = 56,
//     SDLK_9 = 57,
//     SDLK_COLON = 58,
//     SDLK_SEMICOLON = 59,
//     SDLK_LESS = 60,
//     SDLK_EQUALS = 61,
//     SDLK_GREATER = 62,
//     SDLK_QUESTION = 63,
//     SDLK_AT = 64,
//     SDLK_LEFTBRACKET = 91,
//     SDLK_BACKSLASH = 92,
//     SDLK_RIGHTBRACKET = 93,
//     SDLK_CARET = 94,
//     SDLK_UNDERSCORE = 95,
//     SDLK_BACKQUOTE = 96,
//     SDLK_a = 97,
//     SDLK_b = 98,
//     SDLK_c = 99,
//     SDLK_d = 100,
//     SDLK_e = 101,
//     SDLK_f = 102,
//     SDLK_g = 103,
//     SDLK_h = 104,
//     SDLK_i = 105,
//     SDLK_j = 106,
//     SDLK_k = 107,
//     SDLK_l = 108,
//     SDLK_m = 109,
//     SDLK_n = 110,
//     SDLK_o = 111,
//     SDLK_p = 112,
//     SDLK_q = 113,
//     SDLK_r = 114,
//     SDLK_s = 115,
//     SDLK_t = 116,
//     SDLK_u = 117,
//     SDLK_v = 118,
//     SDLK_w = 119,
//     SDLK_x = 120,
//     SDLK_y = 121,
//     SDLK_z = 122,
//     SDLK_DELETE = 127,
//     SDLK_WORLD_0 = 160,
//     SDLK_WORLD_1 = 161,
//     SDLK_WORLD_2 = 162,
//     SDLK_WORLD_3 = 163,
//     SDLK_WORLD_4 = 164,
//     SDLK_WORLD_5 = 165,
//     SDLK_WORLD_6 = 166,
//     SDLK_WORLD_7 = 167,
//     SDLK_WORLD_8 = 168,
//     SDLK_WORLD_9 = 169,
//     SDLK_WORLD_10 = 170,
//     SDLK_WORLD_11 = 171,
//     SDLK_WORLD_12 = 172,
//     SDLK_WORLD_13 = 173,
//     SDLK_WORLD_14 = 174,
//     SDLK_WORLD_15 = 175,
//     SDLK_WORLD_16 = 176,
//     SDLK_WORLD_17 = 177,
//     SDLK_WORLD_18 = 178,
//     SDLK_WORLD_19 = 179,
//     SDLK_WORLD_20 = 180,
//     SDLK_WORLD_21 = 181,
//     SDLK_WORLD_22 = 182,
//     SDLK_WORLD_23 = 183,
//     SDLK_WORLD_24 = 184,
//     SDLK_WORLD_25 = 185,
//     SDLK_WORLD_26 = 186,
//     SDLK_WORLD_27 = 187,
//     SDLK_WORLD_28 = 188,
//     SDLK_WORLD_29 = 189,
//     SDLK_WORLD_30 = 190,
//     SDLK_WORLD_31 = 191,
//     SDLK_WORLD_32 = 192,
//     SDLK_WORLD_33 = 193,
//     SDLK_WORLD_34 = 194,
//     SDLK_WORLD_35 = 195,
//     SDLK_WORLD_36 = 196,
//     SDLK_WORLD_37 = 197,
//     SDLK_WORLD_38 = 198,
//     SDLK_WORLD_39 = 199,
//     SDLK_WORLD_40 = 200,
//     SDLK_WORLD_41 = 201,
//     SDLK_WORLD_42 = 202,
//     SDLK_WORLD_43 = 203,
//     SDLK_WORLD_44 = 204,
//     SDLK_WORLD_45 = 205,
//     SDLK_WORLD_46 = 206,
//     SDLK_WORLD_47 = 207,
//     SDLK_WORLD_48 = 208,
//     SDLK_WORLD_49 = 209,
//     SDLK_WORLD_50 = 210,
//     SDLK_WORLD_51 = 211,
//     SDLK_WORLD_52 = 212,
//     SDLK_WORLD_53 = 213,
//     SDLK_WORLD_54 = 214,
//     SDLK_WORLD_55 = 215,
//     SDLK_WORLD_56 = 216,
//     SDLK_WORLD_57 = 217,
//     SDLK_WORLD_58 = 218,
//     SDLK_WORLD_59 = 219,
//     SDLK_WORLD_60 = 220,
//     SDLK_WORLD_61 = 221,
//     SDLK_WORLD_62 = 222,
//     SDLK_WORLD_63 = 223,
//     SDLK_WORLD_64 = 224,
//     SDLK_WORLD_65 = 225,
//     SDLK_WORLD_66 = 226,
//     SDLK_WORLD_67 = 227,
//     SDLK_WORLD_68 = 228,
//     SDLK_WORLD_69 = 229,
//     SDLK_WORLD_70 = 230,
//     SDLK_WORLD_71 = 231,
//     SDLK_WORLD_72 = 232,
//     SDLK_WORLD_73 = 233,
//     SDLK_WORLD_74 = 234,
//     SDLK_WORLD_75 = 235,
//     SDLK_WORLD_76 = 236,
//     SDLK_WORLD_77 = 237,
//     SDLK_WORLD_78 = 238,
//     SDLK_WORLD_79 = 239,
//     SDLK_WORLD_80 = 240,
//     SDLK_WORLD_81 = 241,
//     SDLK_WORLD_82 = 242,
//     SDLK_WORLD_83 = 243,
//     SDLK_WORLD_84 = 244,
//     SDLK_WORLD_85 = 245,
//     SDLK_WORLD_86 = 246,
//     SDLK_WORLD_87 = 247,
//     SDLK_WORLD_88 = 248,
//     SDLK_WORLD_89 = 249,
//     SDLK_WORLD_90 = 250,
//     SDLK_WORLD_91 = 251,
//     SDLK_WORLD_92 = 252,
//     SDLK_WORLD_93 = 253,
//     SDLK_WORLD_94 = 254,
//     SDLK_WORLD_95 = 255,
//     SDLK_KP0 = 256,
//     SDLK_KP1 = 257,
//     SDLK_KP2 = 258,
//     SDLK_KP3 = 259,
//     SDLK_KP4 = 260,
//     SDLK_KP5 = 261,
//     SDLK_KP6 = 262,
//     SDLK_KP7 = 263,
//     SDLK_KP8 = 264,
//     SDLK_KP9 = 265,
//     SDLK_KP_PERIOD = 266,
//     SDLK_KP_DIVIDE = 267,
//     SDLK_KP_MULTIPLY = 268,
//     SDLK_KP_MINUS = 269,
//     SDLK_KP_PLUS = 270,
//     SDLK_KP_ENTER = 271,
//     SDLK_KP_EQUALS = 272,
//     SDLK_UP = 273,
//     SDLK_DOWN = 274,
//     SDLK_RIGHT = 275,
//     SDLK_LEFT = 276,
//     SDLK_INSERT = 277,
//     SDLK_HOME = 278,
//     SDLK_END = 279,
//     SDLK_PAGEUP = 280,
//     SDLK_PAGEDOWN = 281,
//     SDLK_F1 = 282,
//     SDLK_F2 = 283,
//     SDLK_F3 = 284,
//     SDLK_F4 = 285,
//     SDLK_F5 = 286,
//     SDLK_F6 = 287,
//     SDLK_F7 = 288,
//     SDLK_F8 = 289,
//     SDLK_F9 = 290,
//     SDLK_F10 = 291,
//     SDLK_F11 = 292,
//     SDLK_F12 = 293,
//     SDLK_F13 = 294,
//     SDLK_F14 = 295,
//     SDLK_F15 = 296,
//     SDLK_NUMLOCK = 300,
//     SDLK_CAPSLOCK = 301,
//     SDLK_SCROLLOCK = 302,
//     SDLK_RSHIFT = 303,
//     SDLK_LSHIFT = 304,
//     SDLK_RCTRL = 305,
//     SDLK_LCTRL = 306,
//     SDLK_RALT = 307,
//     SDLK_LALT = 308,
//     SDLK_RMETA = 309,
//     SDLK_LMETA = 310,
//     SDLK_LSUPER = 311,
//     SDLK_RSUPER = 312,
//     SDLK_MODE = 313,
//     SDLK_COMPOSE = 314,
//     SDLK_HELP = 315,
//     SDLK_PRINT = 316,
//     SDLK_SYSREQ = 317,
//     SDLK_BREAK = 318,
//     SDLK_MENU = 319,
//     SDLK_POWER = 320,
//     SDLK_EURO = 321,
//     SDLK_UNDO = 322,
//     SDLK_LAST
// } SDLKey;
