//Autogenerated PPP header from /home/luke/workspace/panda/panda/plugins/syscalls2_errors/syscalls2_errors.h

typedef void (*on_get_error_t)(CPUState *cpu, target_ulong pc, const syscall_info_t *call, const syscall_ctx_t *ctx, target_ulong sys_errorno, const char* sys_error_description);
void ppp_add_cb_on_get_error(on_get_error_t);
bool ppp_remove_cb_on_get_error(on_get_error_t);


