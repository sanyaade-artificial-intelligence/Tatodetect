/**
 * Tatoeba Project, free collaborative creation of multilingual corpuses project
 * Copyright (C) 2012 Allan SIMON <allan.simon@supinfo.com>
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
 * @package  Models
 * @author   Allan SIMON <allan.simon@supinfo.com>
 * @license  Affero General Public License
 * @link     http://tatoeba.org
 */ 

#ifndef MODELS_SQLITE_H
#define MODELS_SQLITE_H

#include <cppdb/frontend.h>


namespace models {

/**
 * @class SqliteModel
 * 
 * @brief base class to represent a model based on
 *        a sqlite database 
 */
class SqliteModel {
    protected:
        cppdb::session sqliteDb;
    public:
        SqliteModel();
        SqliteModel(cppdb::session sqliteDb);
};

}

#endif
