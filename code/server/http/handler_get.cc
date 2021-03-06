/* Copyright (C) 
 * 2013 - Rye Yao
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 */
/**
 * @file handler_get.cc
 * @brief 
 * @author Rye Yao
 * @version 0.1
 * @date 2013-06-07
 */

#include "handler_get.h"
#include "utils_log.h"

#include <string>

int GetHandler::Handle(HttpRequest request, HttpResponse& response) {

    response.set_version(request.version());
    //response.set_version(string("HTTP/1.1"));
    response.set_status(OK_200);
    string body("Hello World!");

    response.set_body(body);
    response.set_keep_alive(false);

    DEBUG("Handled request %s\n", request.ToString().c_str());

    return 0;
}
