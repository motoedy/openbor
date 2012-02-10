#ifndef DATA_H
#define DATA_H

#include "openbor.h"

typedef struct {
	Script* script;
	char* path;
	char* name;
} s_script_and_path_and_name;

extern const s_script_and_path_and_name script_and_path_and_name[];
extern const int script_and_path_and_name_itemcount;

typedef struct {
	int mp[11];
	int hp[11];
	int ld[11];
} s_color_tables;

extern s_color_tables color_tables;

extern s_barstatus loadingbarstatus;
extern s_barstatus lbarstatus;
extern s_barstatus olbarstatus;
extern s_barstatus mpbarstatus;

extern const s_colors_rgb default_colors;

extern const s_savedata savedata_default;
extern const s_videomodes videomodes_init_data[];
extern const s_player_min_max_z_bgheight player_min_max_z_bgheight_init_data[];
extern const s_drawmethod plainmethod;
extern const s_attack emptyattack;

#endif
