/* ====================================================================
 * The Apache Software License, Version 1.1
 *
 * Copyright (c) 2000-2003 The Apache Software Foundation.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by the
 *        Apache Software Foundation (http://www.apache.org/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "Apache" and "Apache Software Foundation" must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact apache@apache.org.
 *
 * 5. Products derived from this software may not be called "Apache",
 *    nor may "Apache" appear in their name, without prior written
 *    permission of the Apache Software Foundation.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE APACHE SOFTWARE FOUNDATION OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 *
 * This software consists of voluntary contributions made by many
 * individuals on behalf of the Apache Software Foundation.  For more
 * information on the Apache Software Foundation, please see
 * <http://www.apache.org/>.
 *
 * Portions of this software are based upon public domain software
 * originally written at the National Center for Supercomputing Applications,
 * University of Illinois, Urbana-Champaign.
 */

/*
**  ap_compat.h -- Apache Backward Compatibility
**
**  INCLUDE THIS HEADER FILE ONLY IF YOU REALLY NEED
**  BACKWARD COMPATIBILITY TO OLD APACHE RESOURCES.
*/

#ifndef AP_COMPAT_H
#define AP_COMPAT_H

#ifdef __cplusplus
extern "C" {
#endif

/* 
 *   Mapping of Apache 1.2 global symbols to the
 *   namespace conflict free variants used in Apache 1.3
 */

#define MD5Final                       ap_MD5Final
#define MD5Init                        ap_MD5Init
#define MD5Update                      ap_MD5Update
#define acquire_mutex                  ap_acquire_mutex
#define add_cgi_vars                   ap_add_cgi_vars
#define add_common_vars                ap_add_common_vars
#define add_file_conf                  ap_add_file_conf
#define add_module                     ap_add_module
#define add_named_module               ap_add_named_module
#define add_per_dir_conf               ap_add_per_dir_conf
#define add_per_url_conf               ap_add_per_url_conf
#define allow_options                  ap_allow_options
#define allow_overrides                ap_allow_overrides
#define apapi_get_server_built         ap_get_server_built
#define apapi_get_server_version       ap_get_server_version
#define aplog_error                    ap_log_error
#define append_arrays                  ap_append_arrays
#define array_cat                      ap_array_cat
#define auth_name                      ap_auth_name
#define auth_type                      ap_auth_type
#define basic_http_header              ap_basic_http_header
#define bclose                         ap_bclose
#define bcreate                        ap_bcreate
#define bfilbuf                        ap_bfilbuf
#define bfileno                        ap_bfileno
#define bflsbuf                        ap_bflsbuf
#define bflush                         ap_bflush
#define bgetc                          ap_bgetc
#define bgetflag                       ap_bgetflag
#define bgetopt                        ap_bgetopt
#define bgets                          ap_bgets
#define bhalfduplex                    ap_bhalfduplex
#define bind_address                   ap_bind_address
#define block_alarms                   ap_block_alarms
#define blookc                         ap_blookc
#define bnonblock                      ap_bnonblock
#define bonerror                       ap_bonerror
#define bprintf                        ap_bprintf
#define bpushfd                        ap_bpushfd
#define bputc                          ap_bputc
#define bputs                          ap_bputs
#define bread                          ap_bread
#define bsetflag                       ap_bsetflag
#define bsetopt                        ap_bsetopt
#define bskiplf                        ap_bskiplf
#define bvputs                         ap_bvputs
#define bwrite                         ap_bwrite
#define bytes_in_free_blocks           ap_bytes_in_free_blocks
#define bytes_in_pool                  ap_bytes_in_pool
#define call_exec                      ap_call_exec
#define can_exec                       ap_can_exec
#define cfg_closefile                  ap_cfg_closefile
#define cfg_getc                       ap_cfg_getc
#define cfg_getline                    ap_cfg_getline
#define chdir_file                     ap_chdir_file
#define check_access                   ap_check_access
#define check_alarm                    ap_check_alarm
#define check_auth                     ap_check_auth
#define check_cmd_context              ap_check_cmd_context
#define check_user_id                  ap_check_user_id
#define checkmask                      ap_checkmask
#define child_exit_modules             ap_child_exit_modules
#define child_init_modules             ap_child_init_modules
#define child_terminate                ap_child_terminate
#define cleanup_for_exec               ap_cleanup_for_exec
#define clear_module_list              ap_clear_module_list
#define clear_pool                     ap_clear_pool
#define clear_table                    ap_clear_table
#define close_piped_log                ap_close_piped_log
#define construct_server               ap_construct_server
#define construct_url                  ap_construct_url
#define copy_array                     ap_copy_array
#define copy_array_hdr                 ap_copy_array_hdr
#define copy_table                     ap_copy_table
#define core_reorder_directories       ap_core_reorder_directories
#define coredump_dir                   ap_coredump_dir
#define count_dirs                     ap_count_dirs
#define create_environment             ap_create_environment
#define create_mutex                   ap_create_mutex
#define create_per_dir_config          ap_create_per_dir_config
#define create_request_config          ap_create_request_config
#define daemons_limit                  ap_daemons_limit
#define daemons_max_free               ap_daemons_max_free
#define daemons_min_free               ap_daemons_min_free
#define daemons_to_start               ap_daemons_to_start
#define day_snames                     ap_day_snames
#define default_port                   ap_default_port
#define default_port_for_request       ap_default_port_for_request
#define default_port_for_scheme        ap_default_port_for_scheme
#define default_type                   ap_default_type
#define destroy_mutex                  ap_destroy_mutex
#define destroy_pool                   ap_destroy_pool
#define destroy_sub_req                ap_destroy_sub_req
#define die                            ap_die
#define discard_request_body           ap_discard_request_body
#define document_root                  ap_document_root
#define dummy_mutex                    ap_dummy_mutex
#define each_byterange                 ap_each_byterange
#define error_log2stderr               ap_error_log2stderr
#define escape_html                    ap_escape_html
#define escape_path_segment            ap_escape_path_segment
#define escape_shell_cmd               ap_escape_shell_cmd
#define escape_uri                     ap_escape_uri
#define excess_requests_per_child      ap_excess_requests_per_child
#define exists_scoreboard_image        ap_exists_scoreboard_image
#define finalize_request_protocol      ap_finalize_request_protocol
#define finalize_sub_req_protocol      ap_finalize_sub_req_protocol
#define find_command                   ap_find_command
#define find_command_in_modules        ap_find_command_in_modules
#define find_last_token                ap_find_last_token
#define find_linked_module             ap_find_linked_module
#define find_module_name               ap_find_module_name
#define find_path_info                 ap_find_path_info
#define find_pool                      ap_find_pool
#define find_token                     ap_find_token
#define find_types                     ap_find_types
#define fini_vhost_config              ap_fini_vhost_config
#define fnmatch                        ap_fnmatch
#define force_library_loading          ap_force_library_loading
#define get_basic_auth_pw              ap_get_basic_auth_pw
#define get_client_block               ap_get_client_block
#define get_gmtoff                     ap_get_gmtoff
#define get_local_host                 ap_get_local_host
#define get_module_config              ap_get_module_config
#define get_remote_host                ap_get_remote_host
#define get_remote_logname             ap_get_remote_logname
#define get_server_name                ap_get_server_name
#define get_server_port                ap_get_server_port
#define get_time                       ap_get_time
#define get_token                      ap_get_token
#define get_virthost_addr              ap_get_virthost_addr
#define getparents                     ap_getparents
#define getword                        ap_getword
#define getword_conf                   ap_getword_conf
#define getword_conf_nc                ap_getword_conf_nc
#define getword_nc                     ap_getword_nc
#define getword_nulls                  ap_getword_nulls
#define getword_nulls_nc               ap_getword_nulls_nc
#define getword_white                  ap_getword_white
#define getword_white_nc               ap_getword_white_nc
#define gm_timestr_822                 ap_gm_timestr_822
#define gname2id                       ap_gname2id
#define group_id                       ap_group_id
#define handle_command                 ap_handle_command
#define hard_timeout                   ap_hard_timeout
#define header_parse                   ap_header_parse
#define ht_time                        ap_ht_time
#define http_method                    ap_http_method
#define ind                            ap_ind
#define index_of_response              ap_index_of_response
#define init_alloc                     ap_init_alloc
#define init_modules                   ap_init_modules
#define init_vhost_config              ap_init_vhost_config
#define init_virtual_host              ap_init_virtual_host
#define internal_redirect              ap_internal_redirect
#define internal_redirect_handler      ap_internal_redirect_handler
#define invoke_handler                 ap_invoke_handler
#define is_default_port                ap_is_default_port
#define is_directory                   ap_is_directory
#define is_empty_table                 ap_is_empty_table
#define is_fnmatch                     ap_is_fnmatch
#define is_initial_req                 ap_is_initial_req
#define is_matchexp                    ap_is_matchexp
#define is_table_empty                 ap_is_table_empty
#define is_url                         ap_is_url
#define keepalive_timeout              ap_keepalive_timeout
#define kill_cleanup                   ap_kill_cleanup
#define kill_cleanups_for_fd           ap_kill_cleanups_for_fd
#define kill_cleanups_for_socket       ap_kill_cleanups_for_socket
#define kill_timeout                   ap_kill_timeout
#define limit_section                  ap_limit_section
#define listenbacklog                  ap_listenbacklog
#define listeners                      ap_listeners
#define lock_fname                     ap_lock_fname
#define log_assert                     ap_log_assert
#define log_error                      ap_log_error_old
#define log_pid                        ap_log_pid
#define log_printf                     ap_log_printf
#define log_reason                     ap_log_reason
#define log_transaction                ap_log_transaction
#define log_unixerr                    ap_log_unixerr
#define make_array                     ap_make_array
#define make_dirstr                    ap_make_dirstr
#define make_dirstr_parent             ap_make_dirstr_parent
#define make_dirstr_prefix             ap_make_dirstr_prefix
#define make_full_path                 ap_make_full_path
#define make_sub_pool                  ap_make_sub_pool
#define make_table                     ap_make_table
#define matches_request_vhost          ap_matches_request_vhost
#define max_requests_per_child         ap_max_requests_per_child
#define md5                            ap_md5
#define meets_conditions               ap_meets_conditions
#define merge_per_dir_configs          ap_merge_per_dir_configs
#define month_snames                   ap_month_snames
#define no2slash                       ap_no2slash
#define note_auth_failure              ap_note_auth_failure
#define note_basic_auth_failure        ap_note_basic_auth_failure
#define note_cleanups_for_fd           ap_note_cleanups_for_fd
#define note_cleanups_for_file         ap_note_cleanups_for_file
#define note_cleanups_for_socket       ap_note_cleanups_for_socket
#define note_digest_auth_failure       ap_note_digest_auth_failure
#define note_subprocess                ap_note_subprocess
#define null_cleanup                   ap_null_cleanup
#define open_logs                      ap_open_logs
#define open_mutex                     ap_open_mutex
#define open_piped_log                 ap_open_piped_log
#define os_canonical_filename          ap_os_canonical_filename
#define os_dl_load                     ap_os_dso_load
#define os_dl_unload                   ap_os_dso_unload
#define os_dl_sym                      ap_os_dso_sym
#define os_dl_error                    ap_os_dso_error
#define os_escape_path                 ap_os_escape_path
#define os_is_path_absolute            ap_os_is_path_absolute
#define overlay_tables                 ap_overlay_tables
#define palloc                         ap_palloc
#define parseHTTPdate                  ap_parseHTTPdate
#define parse_hostinfo_components      ap_parse_hostinfo_components
#define parse_htaccess                 ap_parse_htaccess
#define parse_uri                      ap_parse_uri
#define parse_uri_components           ap_parse_uri_components
#define parse_vhost_addrs              ap_parse_vhost_addrs
#define pcalloc                        ap_pcalloc
#define pcfg_open_custom               ap_pcfg_open_custom
#define pcfg_openfile                  ap_pcfg_openfile
#define pclosedir                      ap_pclosedir
#define pclosef                        ap_pclosef
#define pclosesocket                   ap_pclosesocket
#define pduphostent                    ap_pduphostent
#define pfclose                        ap_pfclose
#define pfdopen                        ap_pfdopen
#define pfopen                         ap_pfopen
#define pgethostbyname                 ap_pgethostbyname
#define pid_fname                      ap_pid_fname
#define piped_log_read_fd              ap_piped_log_read_fd
#define piped_log_write_fd             ap_piped_log_write_fd
#define pool_is_ancestor               ap_pool_is_ancestor
#define pool_join                      ap_pool_join
#define popendir                       ap_popendir
#define popenf                         ap_popenf
#define pregcomp                       ap_pregcomp
#define pregfree                       ap_pregfree
#define pregsub                        ap_pregsub
#define process_request                ap_process_request
#define process_resource_config        ap_process_resource_config
#define proxy_add_header               ap_proxy_add_header
#define proxy_c2hex                    ap_proxy_c2hex
#define proxy_cache_check              ap_proxy_cache_check
#define proxy_cache_error              ap_proxy_cache_error
#define proxy_cache_tidy               ap_proxy_cache_tidy
#define proxy_cache_update             ap_proxy_cache_update
#define proxy_canon_netloc             ap_proxy_canon_netloc
#define proxy_canonenc                 ap_proxy_canonenc
#define proxy_connect_handler          ap_proxy_connect_handler
#define proxy_date_canon               ap_proxy_date_canon
#define proxy_del_header               ap_proxy_del_header
#define proxy_doconnect                ap_proxy_doconnect
#define proxy_ftp_canon                ap_proxy_ftp_canon
#define proxy_ftp_handler              ap_proxy_ftp_handler
#define proxy_garbage_coll             ap_proxy_garbage_coll
#define proxy_garbage_init             ap_proxy_garbage_init
#define proxy_get_header               ap_proxy_get_header
#define proxy_hash                     ap_proxy_hash
#define proxy_hex2c                    ap_proxy_hex2c
#define proxy_hex2sec                  ap_proxy_hex2sec
#define proxy_host2addr                ap_proxy_host2addr
#define proxy_http_canon               ap_proxy_http_canon
#define proxy_http_handler             ap_proxy_http_handler
#define proxy_is_domainname            ap_proxy_is_domainname
#define proxy_is_hostname              ap_proxy_is_hostname
#define proxy_is_ipaddr                ap_proxy_is_ipaddr
#define proxy_is_word                  ap_proxy_is_word
#define proxy_liststr                  ap_proxy_liststr
#define proxy_read_headers             ap_proxy_read_headers
#define proxy_sec2hex                  ap_proxy_sec2hex
#define proxy_send_fb                  ap_proxy_send_fb
#define proxy_send_headers             ap_proxy_send_headers
#define proxyerror                     ap_proxyerror
#define psignature                     ap_psignature
#define psocket                        ap_psocket
#define psprintf                       ap_psprintf
#define pstrcat                        ap_pstrcat
#define pstrdup                        ap_pstrdup
#define pstrndup                       ap_pstrndup
#define push_array                     ap_push_array
#define pvsprintf                      ap_pvsprintf
#define rationalize_mtime              ap_rationalize_mtime
#define read_config                    ap_read_config
#define read_request                   ap_read_request
#define regexec                        ap_regexec
#define regerror                       ap_regerror
#define register_cleanup               ap_register_cleanup
#define register_other_child           ap_register_other_child
#define release_mutex                  ap_release_mutex
#define remove_module                  ap_remove_module
#define requires                       ap_requires
#define reset_timeout                  ap_reset_timeout
#define response_code_string           ap_response_code_string
#define restart_time                   ap_restart_time
#define rfc1413                        ap_rfc1413
#define rfc1413_timeout                ap_rfc1413_timeout
#define rflush                         ap_rflush
#define rind                           ap_rind
#define rprintf                        ap_rprintf
#define rputc                          ap_rputc
#define rputs                          ap_rputs
#define run_cleanup                    ap_run_cleanup
#define run_fixups                     ap_run_fixups
#define run_post_read_request          ap_run_post_read_request
#define run_sub_req                    ap_run_sub_req
#define rvputs                         ap_rvputs
#define rwrite                         ap_rwrite
#define satisfies                      ap_satisfies
#define scan_script_header(a1,a2)      ap_scan_script_header_err(a1,a2,NULL)
#define scan_script_header_err         ap_scan_script_header_err
#define scan_script_header_err_buff    ap_scan_script_header_err_buff
#define scoreboard_fname               ap_scoreboard_fname
#define scoreboard_image               ap_scoreboard_image
#define send_error_response            ap_send_error_response
#define send_fb                        ap_send_fb
#define send_fb_length                 ap_send_fb_length
#define send_fd                        ap_send_fd
#define send_fd_length                 ap_send_fd_length
#define send_header_field              ap_send_header_field
#define send_http_header               ap_send_http_header
#define send_http_options              ap_send_http_options
#define send_http_trace                ap_send_http_trace
#define send_mmap                      ap_send_mmap
#define send_size                      ap_send_size
#define server_argv0                   ap_server_argv0
#define server_confname                ap_server_confname
#define server_post_read_config        ap_server_post_read_config
#define server_pre_read_config         ap_server_pre_read_config
#define server_root                    ap_server_root
#define server_root_relative           ap_server_root_relative
#define set_byterange                  ap_set_byterange
#define set_callback_and_alarm         ap_set_callback_and_alarm
#define set_config_vectors             ap_set_config_vectors
#define set_content_length             ap_set_content_length
#define set_etag                       ap_set_etag
#define set_file_slot                  ap_set_file_slot
#define set_flag_slot                  ap_set_flag_slot
#define set_keepalive                  ap_set_keepalive
#define set_last_modified              ap_set_last_modified
#define set_module_config              ap_set_module_config
#define set_name_virtual_host          ap_set_name_virtual_host
#define set_string_slot                ap_set_string_slot
#define set_string_slot_lower          ap_set_string_slot_lower
#define set_sub_req_protocol           ap_set_sub_req_protocol
#define setup_client_block             ap_setup_client_block
#define setup_prelinked_modules        ap_setup_prelinked_modules
#define should_client_block            ap_should_client_block
#define show_directives                ap_show_directives
#define show_modules                   ap_show_modules
#define soft_timeout                   ap_soft_timeout
#define some_auth_required             ap_some_auth_required
#define spawn_child_err                ap_spawn_child
#define spawn_child_err_buff           ap_bspawn_child
#define srm_command_loop               ap_srm_command_loop
#define standalone                     ap_standalone
#define start_restart                  ap_start_restart
#define start_shutdown                 ap_start_shutdown
#define status_drops_connection        ap_status_drops_connection
#define str_tolower                    ap_str_tolower
#define strcasecmp_match               ap_strcasecmp_match
#define strcmp_match                   ap_strcmp_match
#define sub_req_lookup_file            ap_sub_req_lookup_file
#define sub_req_lookup_uri             ap_sub_req_lookup_uri
#define suexec_enabled                 ap_suexec_enabled
#define sync_scoreboard_image          ap_sync_scoreboard_image
#define table_add                      ap_table_add
#define table_addn                     ap_table_addn
#define table_do                       ap_table_do
#define table_elts                     ap_table_elts
#define table_get                      ap_table_get
#define table_merge                    ap_table_merge
#define table_mergen                   ap_table_mergen
#define table_set                      ap_table_set
#define table_setn                     ap_table_setn
#define table_unset                    ap_table_unset
#define threads_per_child              ap_threads_per_child
#define time_process_request           ap_time_process_request
#define tm2sec                         ap_tm2sec
#define translate_name                 ap_translate_name
#define uname2id                       ap_uname2id
#define unblock_alarms                 ap_unblock_alarms
#define unescape_url                   ap_unescape_url
#define unparse_uri_components         ap_unparse_uri_components
#define unregister_other_child         ap_unregister_other_child
#define update_child_status            ap_update_child_status
#define update_mtime                   ap_update_mtime
#define update_vhost_from_headers      ap_update_vhost_from_headers
#define update_vhost_given_ip          ap_update_vhost_given_ip
#define user_id                        ap_user_id
#define user_name                      ap_user_name
#define util_init                      ap_util_init
#define util_uri_init                  ap_util_uri_init
#define uudecode                       ap_uudecode
#define vbprintf                       ap_vbprintf

/* 
 *  Macros for routines whose arguments have changed over time.
 */
#define spawn_child(p,f,v,k,in,out) ap_spawn_child(p,f,v,k,in,out,NULL)

#ifdef __cplusplus
}
#endif

#endif /* !AP_COMPAT_H */
