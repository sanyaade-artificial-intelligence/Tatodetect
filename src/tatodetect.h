/**
 * Tatoeba Project, free collaborative creation of multilingual corpuses project
 * Copyright (C) 2011 Allan SIMON <allan.simon@supinfo.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * @category Tatodetect
 * @package  Apps
 * @author   Allan SIMON <allan.simon@supinfo.com>
 * @license  Affero General Public License
 * @link     http://tatoeba.org
 */


#ifndef TATODETECT_H 
#define TATODETECT_H

/**
 * @file tatodetect.h
 */
#include <map>

#include <cppcms/application.h>
#include <cppdb/frontend.h>

#include "controllers/webs/Pages.h"
#include "controllers/apis/Detects.h"

/** 
 * @namespace apps
 */
namespace apps {

/** 
 * @class Tatodetect 
 * Application class representing the website
 * All http request will be dispatched by this class
 */
class Tatodetect : public cppcms::application {

private:
    controllers::webs::Pages pages;
    controllers::apis::Detects detectsApi;

    /**
     * @brief Based on http header, we will try to guess the most suitable
     *        interface language
     *
     * @return The interface language code
     *
     * @since 5 September 2011
     *
     * @TODO for the moment it's a very naive algo
     */  
    std::string get_default_interface_lang();

public:
    /**
     * Constructor
     * Will connect every controllers to their respective paths
     * @param serv
     */
	Tatodetect(cppcms::service &serv);

    /**
     * Method who receive all web requests
     * get the user language of interface from url
     * @param url : url asked by user
     */
	void main(std::string url);
}; 
}
#endif
