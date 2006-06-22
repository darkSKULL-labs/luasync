/*
 * $Id: luasync.c,v 1.7 2006-06-22 21:01:28 ezdy Exp $
 *
 * glueing it all together
 */

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <signal.h>

#include "err.h"
#include "buf.h"
#include "event.h"
#include "io.h"
#include "misc.h"
#include "sql.h"

LUALIB_API int luaopen_luasync(lua_State *L)
{
	signal(SIGPIPE, SIG_IGN);
	err_init(L);
	buf_init(L);
	net_init(L);
	event_init(L);
	io_init(L);
	misc_init(L);
	sql_init(L);
	return 0;
}

