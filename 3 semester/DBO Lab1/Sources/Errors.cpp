#include "Errors.h"
#include "Constants.h"

const char* CAN_NOT_LOAD_INDEX_FILE_ERROR_TEXT = "CAN'T LOAD INDEX FILE";

const char* CAN_NOT_LOAD_FREE_SPACES_FILE_ERROR_TEXT = "CAN'T LOAD FREE SPACES FILE";

const char* CAN_NOT_LOAD_DIRECTORS_FILE_ERROR_TEXT = "CAN'T LOAD DIRECTORS FILE";

const char* CAN_NOT_LOAD_MOVIES_FILE_ERROR_TEXT = "CAN'T LOAD MOVIES FILE";

const char* CAN_NOT_FIND_DIRECTOR_ERROR_TEXT = "CAN'T FIND DIRECTORS WITH SPECIFIED ID";

const char* CAN_NOT_FIND_MOVIE_ERROR_TEXT = "CAN'T FIND MOVIES WITH SPECIFIED ID";

map<int, const char*> ERRORS_MAP =
{
	{CAN_NOT_LOAD_INDEX_FILE_ERROR_CODE, CAN_NOT_LOAD_INDEX_FILE_ERROR_TEXT},
	{CAN_NOT_LOAD_FREE_SPACES_FILE_ERROR_CODE, CAN_NOT_LOAD_FREE_SPACES_FILE_ERROR_TEXT},
	{CAN_NOT_LOAD_DIRECTORS_FILE_ERROR_CODE, CAN_NOT_LOAD_DIRECTORS_FILE_ERROR_TEXT},
	{CAN_NOT_LOAD_MOVIES_FILE_ERROR_CODE, CAN_NOT_LOAD_MOVIES_FILE_ERROR_TEXT},
	{CAN_NOT_FIND_DIRECTOR_ERROR_CODE, CAN_NOT_FIND_DIRECTOR_ERROR_TEXT},
	{CAN_NOT_FIND_MOVIE_ERROR_CODE, CAN_NOT_FIND_MOVIE_ERROR_TEXT}
};

void printError(int error)
{
	cout << "ERROR " << error << ": " << ERRORS_MAP[error] << endl;
}