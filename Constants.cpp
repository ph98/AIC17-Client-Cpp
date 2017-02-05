/*
 * Constants.cpp
 *
 *  Created on: Feb 16, 2015
 *      Author: rmin
 */

#include "Constants.h"

const std::string Constants::MESSAGE_KEY_TYPE = "type";
const std::string Constants::MESSAGE_KEY_NAME = "name";
const std::string Constants::MESSAGE_KEY_ARGS = "args";
const std::string Constants::MESSAGE_KEY_TURN = "turn";
const std::string Constants::MESSAGE_KEY_INIT = "init";
const std::string Constants::MESSAGE_KEY_TOKEN = "token";
const std::string Constants::MESSAGE_KEY_EVENT = "event";
const std::string Constants::MESSAGE_KEY_WRONG_TOKEN = "wrong token";
const std::string Constants::MESSAGE_KEY_SHUTDOWN = "shutdown";

const std::string Constants::TYPE_CHANGE_STRATEGY = "s";
const std::string Constants::TYPE_DETERMINISTIC_MOVE = "m";
const std::string Constants::TYPE_COLOR_CHANGE = "c";

const int Constants::ARGS_NUMBER_CHANGE_STRATEGY = 5;
const int Constants::ARGS_NUMBER_DETERMINISTIC_MOVE = 2;
const int Constants::ARGS_NUMBER_COLOR_CHANGE = 2;
