if (1)
    include(CheckTypeSize)

    check_type_size(short            SIZEOF_SHORT)
    check_type_size(int              SIZEOF_INT)
    check_type_size(long             SIZEOF_LONG)
    check_type_size(wchar_t          SIZEOF_WCHAR_T)
    check_type_size(void*            SIZEOF_VOID_P)
    check_type_size("long long"      SIZEOF_LONG_LONG)
    check_type_size(size_t           SIZEOF_SIZE_T)
    check_type_size("unsigned int"   SIZEOF_UINT)

	add_definitions("-DSIZEOF_SHORT=${SIZEOF_SHORT}")
	add_definitions("-DSIZEOF_INT=${SIZEOF_INT}")
	add_definitions("-DSIZEOF_LONG=${SIZEOF_LONG}")
	add_definitions("-DSIZEOF_WCHAR_T=${SIZEOF_WCHAR_T}")
	add_definitions("-DSIZEOF_VOID_P=${SIZEOF_VOID_P}")
	add_definitions("-DSIZEOF_LONG_LONG=${SIZEOF_LONG_LONG}")
	add_definitions("-DSIZEOF_SIZE_T=${SIZEOF_SIZE_T}")
	add_definitions("-DSIZEOF_UINT=${SIZEOF_UINT}")

    if (${SIZEOF_SIZE_T} EQUAL ${SIZEOF_UINT})
		add_definitions("-DwxSIZE_T_IS_UINT=1")
    else()
		add_definitions("-DwxSIZE_T_IS_ULONG=1")
    endif()

endif()