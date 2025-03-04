/*[clinic input]
preserve
[clinic start generated code]*/

static int
pysqlite_connection_init_impl(pysqlite_Connection *self,
                              const char *database, double timeout,
                              int detect_types, const char *isolation_level,
                              int check_same_thread, PyObject *factory,
                              int cache_size, int uri);

static int
pysqlite_connection_init(PyObject *self, PyObject *args, PyObject *kwargs)
{
    int return_value = -1;
    static const char * const _keywords[] = {"database", "timeout", "detect_types", "isolation_level", "check_same_thread", "factory", "cached_statements", "uri", NULL};
    static _PyArg_Parser _parser = {NULL, _keywords, "Connection", 0};
    PyObject *argsbuf[8];
    PyObject * const *fastargs;
    Py_ssize_t nargs = PyTuple_GET_SIZE(args);
    Py_ssize_t noptargs = nargs + (kwargs ? PyDict_GET_SIZE(kwargs) : 0) - 1;
    const char *database = NULL;
    double timeout = 5.0;
    int detect_types = 0;
    const char *isolation_level = "";
    int check_same_thread = 1;
    PyObject *factory = (PyObject*)clinic_state()->ConnectionType;
    int cache_size = 128;
    int uri = 0;

    fastargs = _PyArg_UnpackKeywords(_PyTuple_CAST(args)->ob_item, nargs, kwargs, NULL, &_parser, 1, 8, 0, argsbuf);
    if (!fastargs) {
        goto exit;
    }
    if (!clinic_fsconverter(fastargs[0], &database)) {
        goto exit;
    }
    if (!noptargs) {
        goto skip_optional_pos;
    }
    if (fastargs[1]) {
        if (PyFloat_CheckExact(fastargs[1])) {
            timeout = PyFloat_AS_DOUBLE(fastargs[1]);
        }
        else
        {
            timeout = PyFloat_AsDouble(fastargs[1]);
            if (timeout == -1.0 && PyErr_Occurred()) {
                goto exit;
            }
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (fastargs[2]) {
        detect_types = _PyLong_AsInt(fastargs[2]);
        if (detect_types == -1 && PyErr_Occurred()) {
            goto exit;
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (fastargs[3]) {
        if (fastargs[3] == Py_None) {
            isolation_level = NULL;
        }
        else if (PyUnicode_Check(fastargs[3])) {
            Py_ssize_t isolation_level_length;
            isolation_level = PyUnicode_AsUTF8AndSize(fastargs[3], &isolation_level_length);
            if (isolation_level == NULL) {
                goto exit;
            }
            if (strlen(isolation_level) != (size_t)isolation_level_length) {
                PyErr_SetString(PyExc_ValueError, "embedded null character");
                goto exit;
            }
        }
        else {
            _PyArg_BadArgument("Connection", "argument 'isolation_level'", "str or None", fastargs[3]);
            goto exit;
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (fastargs[4]) {
        check_same_thread = _PyLong_AsInt(fastargs[4]);
        if (check_same_thread == -1 && PyErr_Occurred()) {
            goto exit;
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (fastargs[5]) {
        factory = fastargs[5];
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (fastargs[6]) {
        cache_size = _PyLong_AsInt(fastargs[6]);
        if (cache_size == -1 && PyErr_Occurred()) {
            goto exit;
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    uri = PyObject_IsTrue(fastargs[7]);
    if (uri < 0) {
        goto exit;
    }
skip_optional_pos:
    return_value = pysqlite_connection_init_impl((pysqlite_Connection *)self, database, timeout, detect_types, isolation_level, check_same_thread, factory, cache_size, uri);

exit:
    /* Cleanup for database */
    PyMem_Free((void *)database);

    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_cursor__doc__,
"cursor($self, /, factory=<unrepresentable>)\n"
"--\n"
"\n"
"Return a cursor for the connection.");

#define PYSQLITE_CONNECTION_CURSOR_METHODDEF    \
    {"cursor", (PyCFunction)(void(*)(void))pysqlite_connection_cursor, METH_FASTCALL|METH_KEYWORDS, pysqlite_connection_cursor__doc__},

static PyObject *
pysqlite_connection_cursor_impl(pysqlite_Connection *self, PyObject *factory);

static PyObject *
pysqlite_connection_cursor(pysqlite_Connection *self, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"factory", NULL};
    static _PyArg_Parser _parser = {NULL, _keywords, "cursor", 0};
    PyObject *argsbuf[1];
    Py_ssize_t noptargs = nargs + (kwnames ? PyTuple_GET_SIZE(kwnames) : 0) - 0;
    PyObject *factory = NULL;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 0, 1, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    if (!noptargs) {
        goto skip_optional_pos;
    }
    factory = args[0];
skip_optional_pos:
    return_value = pysqlite_connection_cursor_impl(self, factory);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_close__doc__,
"close($self, /)\n"
"--\n"
"\n"
"Closes the connection.");

#define PYSQLITE_CONNECTION_CLOSE_METHODDEF    \
    {"close", (PyCFunction)pysqlite_connection_close, METH_NOARGS, pysqlite_connection_close__doc__},

static PyObject *
pysqlite_connection_close_impl(pysqlite_Connection *self);

static PyObject *
pysqlite_connection_close(pysqlite_Connection *self, PyObject *Py_UNUSED(ignored))
{
    return pysqlite_connection_close_impl(self);
}

PyDoc_STRVAR(pysqlite_connection_commit__doc__,
"commit($self, /)\n"
"--\n"
"\n"
"Commit the current transaction.");

#define PYSQLITE_CONNECTION_COMMIT_METHODDEF    \
    {"commit", (PyCFunction)pysqlite_connection_commit, METH_NOARGS, pysqlite_connection_commit__doc__},

static PyObject *
pysqlite_connection_commit_impl(pysqlite_Connection *self);

static PyObject *
pysqlite_connection_commit(pysqlite_Connection *self, PyObject *Py_UNUSED(ignored))
{
    return pysqlite_connection_commit_impl(self);
}

PyDoc_STRVAR(pysqlite_connection_rollback__doc__,
"rollback($self, /)\n"
"--\n"
"\n"
"Roll back the current transaction.");

#define PYSQLITE_CONNECTION_ROLLBACK_METHODDEF    \
    {"rollback", (PyCFunction)pysqlite_connection_rollback, METH_NOARGS, pysqlite_connection_rollback__doc__},

static PyObject *
pysqlite_connection_rollback_impl(pysqlite_Connection *self);

static PyObject *
pysqlite_connection_rollback(pysqlite_Connection *self, PyObject *Py_UNUSED(ignored))
{
    return pysqlite_connection_rollback_impl(self);
}

PyDoc_STRVAR(pysqlite_connection_create_function__doc__,
"create_function($self, /, name, narg, func, *, deterministic=False)\n"
"--\n"
"\n"
"Creates a new function. Non-standard.");

#define PYSQLITE_CONNECTION_CREATE_FUNCTION_METHODDEF    \
    {"create_function", (PyCFunction)(void(*)(void))pysqlite_connection_create_function, METH_METHOD|METH_FASTCALL|METH_KEYWORDS, pysqlite_connection_create_function__doc__},

static PyObject *
pysqlite_connection_create_function_impl(pysqlite_Connection *self,
                                         PyTypeObject *cls, const char *name,
                                         int narg, PyObject *func,
                                         int deterministic);

static PyObject *
pysqlite_connection_create_function(pysqlite_Connection *self, PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"name", "narg", "func", "deterministic", NULL};
    static _PyArg_Parser _parser = {"siO|$p:create_function", _keywords, 0};
    const char *name;
    int narg;
    PyObject *func;
    int deterministic = 0;

    if (!_PyArg_ParseStackAndKeywords(args, nargs, kwnames, &_parser,
        &name, &narg, &func, &deterministic)) {
        goto exit;
    }
    return_value = pysqlite_connection_create_function_impl(self, cls, name, narg, func, deterministic);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_create_aggregate__doc__,
"create_aggregate($self, /, name, n_arg, aggregate_class)\n"
"--\n"
"\n"
"Creates a new aggregate. Non-standard.");

#define PYSQLITE_CONNECTION_CREATE_AGGREGATE_METHODDEF    \
    {"create_aggregate", (PyCFunction)(void(*)(void))pysqlite_connection_create_aggregate, METH_METHOD|METH_FASTCALL|METH_KEYWORDS, pysqlite_connection_create_aggregate__doc__},

static PyObject *
pysqlite_connection_create_aggregate_impl(pysqlite_Connection *self,
                                          PyTypeObject *cls,
                                          const char *name, int n_arg,
                                          PyObject *aggregate_class);

static PyObject *
pysqlite_connection_create_aggregate(pysqlite_Connection *self, PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"name", "n_arg", "aggregate_class", NULL};
    static _PyArg_Parser _parser = {"siO:create_aggregate", _keywords, 0};
    const char *name;
    int n_arg;
    PyObject *aggregate_class;

    if (!_PyArg_ParseStackAndKeywords(args, nargs, kwnames, &_parser,
        &name, &n_arg, &aggregate_class)) {
        goto exit;
    }
    return_value = pysqlite_connection_create_aggregate_impl(self, cls, name, n_arg, aggregate_class);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_set_authorizer__doc__,
"set_authorizer($self, /, authorizer_callback)\n"
"--\n"
"\n"
"Sets authorizer callback. Non-standard.");

#define PYSQLITE_CONNECTION_SET_AUTHORIZER_METHODDEF    \
    {"set_authorizer", (PyCFunction)(void(*)(void))pysqlite_connection_set_authorizer, METH_METHOD|METH_FASTCALL|METH_KEYWORDS, pysqlite_connection_set_authorizer__doc__},

static PyObject *
pysqlite_connection_set_authorizer_impl(pysqlite_Connection *self,
                                        PyTypeObject *cls,
                                        PyObject *callable);

static PyObject *
pysqlite_connection_set_authorizer(pysqlite_Connection *self, PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"authorizer_callback", NULL};
    static _PyArg_Parser _parser = {"O:set_authorizer", _keywords, 0};
    PyObject *callable;

    if (!_PyArg_ParseStackAndKeywords(args, nargs, kwnames, &_parser,
        &callable)) {
        goto exit;
    }
    return_value = pysqlite_connection_set_authorizer_impl(self, cls, callable);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_set_progress_handler__doc__,
"set_progress_handler($self, /, progress_handler, n)\n"
"--\n"
"\n"
"Sets progress handler callback. Non-standard.");

#define PYSQLITE_CONNECTION_SET_PROGRESS_HANDLER_METHODDEF    \
    {"set_progress_handler", (PyCFunction)(void(*)(void))pysqlite_connection_set_progress_handler, METH_METHOD|METH_FASTCALL|METH_KEYWORDS, pysqlite_connection_set_progress_handler__doc__},

static PyObject *
pysqlite_connection_set_progress_handler_impl(pysqlite_Connection *self,
                                              PyTypeObject *cls,
                                              PyObject *callable, int n);

static PyObject *
pysqlite_connection_set_progress_handler(pysqlite_Connection *self, PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"progress_handler", "n", NULL};
    static _PyArg_Parser _parser = {"Oi:set_progress_handler", _keywords, 0};
    PyObject *callable;
    int n;

    if (!_PyArg_ParseStackAndKeywords(args, nargs, kwnames, &_parser,
        &callable, &n)) {
        goto exit;
    }
    return_value = pysqlite_connection_set_progress_handler_impl(self, cls, callable, n);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_set_trace_callback__doc__,
"set_trace_callback($self, /, trace_callback)\n"
"--\n"
"\n"
"Sets a trace callback called for each SQL statement (passed as unicode).\n"
"\n"
"Non-standard.");

#define PYSQLITE_CONNECTION_SET_TRACE_CALLBACK_METHODDEF    \
    {"set_trace_callback", (PyCFunction)(void(*)(void))pysqlite_connection_set_trace_callback, METH_METHOD|METH_FASTCALL|METH_KEYWORDS, pysqlite_connection_set_trace_callback__doc__},

static PyObject *
pysqlite_connection_set_trace_callback_impl(pysqlite_Connection *self,
                                            PyTypeObject *cls,
                                            PyObject *callable);

static PyObject *
pysqlite_connection_set_trace_callback(pysqlite_Connection *self, PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"trace_callback", NULL};
    static _PyArg_Parser _parser = {"O:set_trace_callback", _keywords, 0};
    PyObject *callable;

    if (!_PyArg_ParseStackAndKeywords(args, nargs, kwnames, &_parser,
        &callable)) {
        goto exit;
    }
    return_value = pysqlite_connection_set_trace_callback_impl(self, cls, callable);

exit:
    return return_value;
}

#if defined(PY_SQLITE_ENABLE_LOAD_EXTENSION)

PyDoc_STRVAR(pysqlite_connection_enable_load_extension__doc__,
"enable_load_extension($self, enable, /)\n"
"--\n"
"\n"
"Enable dynamic loading of SQLite extension modules. Non-standard.");

#define PYSQLITE_CONNECTION_ENABLE_LOAD_EXTENSION_METHODDEF    \
    {"enable_load_extension", (PyCFunction)pysqlite_connection_enable_load_extension, METH_O, pysqlite_connection_enable_load_extension__doc__},

static PyObject *
pysqlite_connection_enable_load_extension_impl(pysqlite_Connection *self,
                                               int onoff);

static PyObject *
pysqlite_connection_enable_load_extension(pysqlite_Connection *self, PyObject *arg)
{
    PyObject *return_value = NULL;
    int onoff;

    onoff = _PyLong_AsInt(arg);
    if (onoff == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = pysqlite_connection_enable_load_extension_impl(self, onoff);

exit:
    return return_value;
}

#endif /* defined(PY_SQLITE_ENABLE_LOAD_EXTENSION) */

#if defined(PY_SQLITE_ENABLE_LOAD_EXTENSION)

PyDoc_STRVAR(pysqlite_connection_load_extension__doc__,
"load_extension($self, name, /)\n"
"--\n"
"\n"
"Load SQLite extension module. Non-standard.");

#define PYSQLITE_CONNECTION_LOAD_EXTENSION_METHODDEF    \
    {"load_extension", (PyCFunction)pysqlite_connection_load_extension, METH_O, pysqlite_connection_load_extension__doc__},

static PyObject *
pysqlite_connection_load_extension_impl(pysqlite_Connection *self,
                                        const char *extension_name);

static PyObject *
pysqlite_connection_load_extension(pysqlite_Connection *self, PyObject *arg)
{
    PyObject *return_value = NULL;
    const char *extension_name;

    if (!PyUnicode_Check(arg)) {
        _PyArg_BadArgument("load_extension", "argument", "str", arg);
        goto exit;
    }
    Py_ssize_t extension_name_length;
    extension_name = PyUnicode_AsUTF8AndSize(arg, &extension_name_length);
    if (extension_name == NULL) {
        goto exit;
    }
    if (strlen(extension_name) != (size_t)extension_name_length) {
        PyErr_SetString(PyExc_ValueError, "embedded null character");
        goto exit;
    }
    return_value = pysqlite_connection_load_extension_impl(self, extension_name);

exit:
    return return_value;
}

#endif /* defined(PY_SQLITE_ENABLE_LOAD_EXTENSION) */

PyDoc_STRVAR(pysqlite_connection_execute__doc__,
"execute($self, sql, parameters=<unrepresentable>, /)\n"
"--\n"
"\n"
"Executes a SQL statement. Non-standard.");

#define PYSQLITE_CONNECTION_EXECUTE_METHODDEF    \
    {"execute", (PyCFunction)(void(*)(void))pysqlite_connection_execute, METH_FASTCALL, pysqlite_connection_execute__doc__},

static PyObject *
pysqlite_connection_execute_impl(pysqlite_Connection *self, PyObject *sql,
                                 PyObject *parameters);

static PyObject *
pysqlite_connection_execute(pysqlite_Connection *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *sql;
    PyObject *parameters = NULL;

    if (!_PyArg_CheckPositional("execute", nargs, 1, 2)) {
        goto exit;
    }
    if (!PyUnicode_Check(args[0])) {
        _PyArg_BadArgument("execute", "argument 1", "str", args[0]);
        goto exit;
    }
    if (PyUnicode_READY(args[0]) == -1) {
        goto exit;
    }
    sql = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    parameters = args[1];
skip_optional:
    return_value = pysqlite_connection_execute_impl(self, sql, parameters);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_executemany__doc__,
"executemany($self, sql, parameters, /)\n"
"--\n"
"\n"
"Repeatedly executes a SQL statement. Non-standard.");

#define PYSQLITE_CONNECTION_EXECUTEMANY_METHODDEF    \
    {"executemany", (PyCFunction)(void(*)(void))pysqlite_connection_executemany, METH_FASTCALL, pysqlite_connection_executemany__doc__},

static PyObject *
pysqlite_connection_executemany_impl(pysqlite_Connection *self,
                                     PyObject *sql, PyObject *parameters);

static PyObject *
pysqlite_connection_executemany(pysqlite_Connection *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *sql;
    PyObject *parameters;

    if (!_PyArg_CheckPositional("executemany", nargs, 2, 2)) {
        goto exit;
    }
    if (!PyUnicode_Check(args[0])) {
        _PyArg_BadArgument("executemany", "argument 1", "str", args[0]);
        goto exit;
    }
    if (PyUnicode_READY(args[0]) == -1) {
        goto exit;
    }
    sql = args[0];
    parameters = args[1];
    return_value = pysqlite_connection_executemany_impl(self, sql, parameters);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_executescript__doc__,
"executescript($self, sql_script, /)\n"
"--\n"
"\n"
"Executes multiple SQL statements at once. Non-standard.");

#define PYSQLITE_CONNECTION_EXECUTESCRIPT_METHODDEF    \
    {"executescript", (PyCFunction)pysqlite_connection_executescript, METH_O, pysqlite_connection_executescript__doc__},

PyDoc_STRVAR(pysqlite_connection_interrupt__doc__,
"interrupt($self, /)\n"
"--\n"
"\n"
"Abort any pending database operation. Non-standard.");

#define PYSQLITE_CONNECTION_INTERRUPT_METHODDEF    \
    {"interrupt", (PyCFunction)pysqlite_connection_interrupt, METH_NOARGS, pysqlite_connection_interrupt__doc__},

static PyObject *
pysqlite_connection_interrupt_impl(pysqlite_Connection *self);

static PyObject *
pysqlite_connection_interrupt(pysqlite_Connection *self, PyObject *Py_UNUSED(ignored))
{
    return pysqlite_connection_interrupt_impl(self);
}

PyDoc_STRVAR(pysqlite_connection_iterdump__doc__,
"iterdump($self, /)\n"
"--\n"
"\n"
"Returns iterator to the dump of the database in an SQL text format.\n"
"\n"
"Non-standard.");

#define PYSQLITE_CONNECTION_ITERDUMP_METHODDEF    \
    {"iterdump", (PyCFunction)pysqlite_connection_iterdump, METH_NOARGS, pysqlite_connection_iterdump__doc__},

static PyObject *
pysqlite_connection_iterdump_impl(pysqlite_Connection *self);

static PyObject *
pysqlite_connection_iterdump(pysqlite_Connection *self, PyObject *Py_UNUSED(ignored))
{
    return pysqlite_connection_iterdump_impl(self);
}

PyDoc_STRVAR(pysqlite_connection_backup__doc__,
"backup($self, /, target, *, pages=-1, progress=None, name=\'main\',\n"
"       sleep=0.25)\n"
"--\n"
"\n"
"Makes a backup of the database. Non-standard.");

#define PYSQLITE_CONNECTION_BACKUP_METHODDEF    \
    {"backup", (PyCFunction)(void(*)(void))pysqlite_connection_backup, METH_FASTCALL|METH_KEYWORDS, pysqlite_connection_backup__doc__},

static PyObject *
pysqlite_connection_backup_impl(pysqlite_Connection *self,
                                pysqlite_Connection *target, int pages,
                                PyObject *progress, const char *name,
                                double sleep);

static PyObject *
pysqlite_connection_backup(pysqlite_Connection *self, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"target", "pages", "progress", "name", "sleep", NULL};
    static _PyArg_Parser _parser = {NULL, _keywords, "backup", 0};
    PyObject *argsbuf[5];
    Py_ssize_t noptargs = nargs + (kwnames ? PyTuple_GET_SIZE(kwnames) : 0) - 1;
    pysqlite_Connection *target;
    int pages = -1;
    PyObject *progress = Py_None;
    const char *name = "main";
    double sleep = 0.25;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 1, 1, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    if (!PyObject_TypeCheck(args[0], clinic_state()->ConnectionType)) {
        _PyArg_BadArgument("backup", "argument 'target'", (clinic_state()->ConnectionType)->tp_name, args[0]);
        goto exit;
    }
    target = (pysqlite_Connection *)args[0];
    if (!noptargs) {
        goto skip_optional_kwonly;
    }
    if (args[1]) {
        pages = _PyLong_AsInt(args[1]);
        if (pages == -1 && PyErr_Occurred()) {
            goto exit;
        }
        if (!--noptargs) {
            goto skip_optional_kwonly;
        }
    }
    if (args[2]) {
        progress = args[2];
        if (!--noptargs) {
            goto skip_optional_kwonly;
        }
    }
    if (args[3]) {
        if (!PyUnicode_Check(args[3])) {
            _PyArg_BadArgument("backup", "argument 'name'", "str", args[3]);
            goto exit;
        }
        Py_ssize_t name_length;
        name = PyUnicode_AsUTF8AndSize(args[3], &name_length);
        if (name == NULL) {
            goto exit;
        }
        if (strlen(name) != (size_t)name_length) {
            PyErr_SetString(PyExc_ValueError, "embedded null character");
            goto exit;
        }
        if (!--noptargs) {
            goto skip_optional_kwonly;
        }
    }
    if (PyFloat_CheckExact(args[4])) {
        sleep = PyFloat_AS_DOUBLE(args[4]);
    }
    else
    {
        sleep = PyFloat_AsDouble(args[4]);
        if (sleep == -1.0 && PyErr_Occurred()) {
            goto exit;
        }
    }
skip_optional_kwonly:
    return_value = pysqlite_connection_backup_impl(self, target, pages, progress, name, sleep);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_create_collation__doc__,
"create_collation($self, name, callback, /)\n"
"--\n"
"\n"
"Creates a collation function. Non-standard.");

#define PYSQLITE_CONNECTION_CREATE_COLLATION_METHODDEF    \
    {"create_collation", (PyCFunction)(void(*)(void))pysqlite_connection_create_collation, METH_METHOD|METH_FASTCALL|METH_KEYWORDS, pysqlite_connection_create_collation__doc__},

static PyObject *
pysqlite_connection_create_collation_impl(pysqlite_Connection *self,
                                          PyTypeObject *cls,
                                          const char *name,
                                          PyObject *callable);

static PyObject *
pysqlite_connection_create_collation(pysqlite_Connection *self, PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"", "", NULL};
    static _PyArg_Parser _parser = {"sO:create_collation", _keywords, 0};
    const char *name;
    PyObject *callable;

    if (!_PyArg_ParseStackAndKeywords(args, nargs, kwnames, &_parser,
        &name, &callable)) {
        goto exit;
    }
    return_value = pysqlite_connection_create_collation_impl(self, cls, name, callable);

exit:
    return return_value;
}

PyDoc_STRVAR(pysqlite_connection_enter__doc__,
"__enter__($self, /)\n"
"--\n"
"\n"
"Called when the connection is used as a context manager.\n"
"\n"
"Returns itself as a convenience to the caller.");

#define PYSQLITE_CONNECTION_ENTER_METHODDEF    \
    {"__enter__", (PyCFunction)pysqlite_connection_enter, METH_NOARGS, pysqlite_connection_enter__doc__},

static PyObject *
pysqlite_connection_enter_impl(pysqlite_Connection *self);

static PyObject *
pysqlite_connection_enter(pysqlite_Connection *self, PyObject *Py_UNUSED(ignored))
{
    return pysqlite_connection_enter_impl(self);
}

PyDoc_STRVAR(pysqlite_connection_exit__doc__,
"__exit__($self, type, value, traceback, /)\n"
"--\n"
"\n"
"Called when the connection is used as a context manager.\n"
"\n"
"If there was any exception, a rollback takes place; otherwise we commit.");

#define PYSQLITE_CONNECTION_EXIT_METHODDEF    \
    {"__exit__", (PyCFunction)(void(*)(void))pysqlite_connection_exit, METH_FASTCALL, pysqlite_connection_exit__doc__},

static PyObject *
pysqlite_connection_exit_impl(pysqlite_Connection *self, PyObject *exc_type,
                              PyObject *exc_value, PyObject *exc_tb);

static PyObject *
pysqlite_connection_exit(pysqlite_Connection *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *exc_type;
    PyObject *exc_value;
    PyObject *exc_tb;

    if (!_PyArg_CheckPositional("__exit__", nargs, 3, 3)) {
        goto exit;
    }
    exc_type = args[0];
    exc_value = args[1];
    exc_tb = args[2];
    return_value = pysqlite_connection_exit_impl(self, exc_type, exc_value, exc_tb);

exit:
    return return_value;
}

PyDoc_STRVAR(setlimit__doc__,
"setlimit($self, category, limit, /)\n"
"--\n"
"\n"
"Set connection run-time limits.\n"
"\n"
"  category\n"
"    The limit category to be set.\n"
"  limit\n"
"    The new limit. If the new limit is a negative number, the limit is\n"
"    unchanged.\n"
"\n"
"Attempts to increase a limit above its hard upper bound are silently truncated\n"
"to the hard upper bound. Regardless of whether or not the limit was changed,\n"
"the prior value of the limit is returned.");

#define SETLIMIT_METHODDEF    \
    {"setlimit", (PyCFunction)(void(*)(void))setlimit, METH_FASTCALL, setlimit__doc__},

static PyObject *
setlimit_impl(pysqlite_Connection *self, int category, int limit);

static PyObject *
setlimit(pysqlite_Connection *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    int category;
    int limit;

    if (!_PyArg_CheckPositional("setlimit", nargs, 2, 2)) {
        goto exit;
    }
    category = _PyLong_AsInt(args[0]);
    if (category == -1 && PyErr_Occurred()) {
        goto exit;
    }
    limit = _PyLong_AsInt(args[1]);
    if (limit == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = setlimit_impl(self, category, limit);

exit:
    return return_value;
}

PyDoc_STRVAR(getlimit__doc__,
"getlimit($self, category, /)\n"
"--\n"
"\n"
"Get connection run-time limits.\n"
"\n"
"  category\n"
"    The limit category to be queried.");

#define GETLIMIT_METHODDEF    \
    {"getlimit", (PyCFunction)getlimit, METH_O, getlimit__doc__},

static PyObject *
getlimit_impl(pysqlite_Connection *self, int category);

static PyObject *
getlimit(pysqlite_Connection *self, PyObject *arg)
{
    PyObject *return_value = NULL;
    int category;

    category = _PyLong_AsInt(arg);
    if (category == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = getlimit_impl(self, category);

exit:
    return return_value;
}

#ifndef PYSQLITE_CONNECTION_ENABLE_LOAD_EXTENSION_METHODDEF
    #define PYSQLITE_CONNECTION_ENABLE_LOAD_EXTENSION_METHODDEF
#endif /* !defined(PYSQLITE_CONNECTION_ENABLE_LOAD_EXTENSION_METHODDEF) */

#ifndef PYSQLITE_CONNECTION_LOAD_EXTENSION_METHODDEF
    #define PYSQLITE_CONNECTION_LOAD_EXTENSION_METHODDEF
#endif /* !defined(PYSQLITE_CONNECTION_LOAD_EXTENSION_METHODDEF) */
/*[clinic end generated code: output=6f267f20e77f92d0 input=a9049054013a1b77]*/
