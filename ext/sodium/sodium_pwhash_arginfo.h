/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: dd94e709f115ce05df0e25a8cb48c62438bb6d01 */

static void register_sodium_pwhash_symbols(int module_number)
{
#if SODIUM_LIBRARY_VERSION_MAJOR > 9 || (SODIUM_LIBRARY_VERSION_MAJOR == 9 && SODIUM_LIBRARY_VERSION_MINOR >= 6)
	REGISTER_STRING_CONSTANT("PASSWORD_ARGON2I", "argon2i", CONST_PERSISTENT);
#endif
#if SODIUM_LIBRARY_VERSION_MAJOR > 9 || (SODIUM_LIBRARY_VERSION_MAJOR == 9 && SODIUM_LIBRARY_VERSION_MINOR >= 6)
	REGISTER_STRING_CONSTANT("PASSWORD_ARGON2ID", "argon2id", CONST_PERSISTENT);
#endif
#if SODIUM_LIBRARY_VERSION_MAJOR > 9 || (SODIUM_LIBRARY_VERSION_MAJOR == 9 && SODIUM_LIBRARY_VERSION_MINOR >= 6)
	REGISTER_LONG_CONSTANT("PASSWORD_ARGON2_DEFAULT_MEMORY_COST", PHP_SODIUM_PWHASH_MEMLIMIT, CONST_PERSISTENT);
#endif
#if SODIUM_LIBRARY_VERSION_MAJOR > 9 || (SODIUM_LIBRARY_VERSION_MAJOR == 9 && SODIUM_LIBRARY_VERSION_MINOR >= 6)
	REGISTER_LONG_CONSTANT("PASSWORD_ARGON2_DEFAULT_TIME_COST", PHP_SODIUM_PWHASH_OPSLIMIT, CONST_PERSISTENT);
#endif
#if SODIUM_LIBRARY_VERSION_MAJOR > 9 || (SODIUM_LIBRARY_VERSION_MAJOR == 9 && SODIUM_LIBRARY_VERSION_MINOR >= 6)
	REGISTER_LONG_CONSTANT("PASSWORD_ARGON2_DEFAULT_THREADS", PHP_SODIUM_PWHASH_THREADS, CONST_PERSISTENT);
#endif
#if SODIUM_LIBRARY_VERSION_MAJOR > 9 || (SODIUM_LIBRARY_VERSION_MAJOR == 9 && SODIUM_LIBRARY_VERSION_MINOR >= 6)
	REGISTER_STRING_CONSTANT("PASSWORD_ARGON2_PROVIDER", "sodium", CONST_PERSISTENT);
#endif
}
