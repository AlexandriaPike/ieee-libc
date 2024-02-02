/*
	referenced from /usr/include/sys/syscall.h on darwin 18.2.0 (macos 10.14.3)
*/

#define	SYS_syscall        0
#define	SYS_exit           1
#define	SYS_fork           2
#define	SYS_read           3
#define	SYS_write          4
#define	SYS_open           5
#define	SYS_close          6
#define	SYS_wait4          7
			/* 8  old creat */
#define	SYS_link           9
#define	SYS_unlink         10
			/* 11  old execv */
#define	SYS_chdir          12
#define	SYS_fchdir         13
#define	SYS_mknod          14
#define	SYS_chmod          15
#define	SYS_chown          16
			/* 17  old break */
#define	SYS_getfsstat      18
			/* 19  old lseek */
#define	SYS_getpid         20
			/* 21  old mount */
			/* 22  old umount */
#define	SYS_setuid         23
#define	SYS_getuid         24
#define	SYS_geteuid        25
#define	SYS_ptrace         26

#define	SYS_sendmsg        28

#define	SYS_accept         30
#define	SYS_getpeername    31
#define	SYS_getsockname    32
#define	SYS_access         33
#define	SYS_chflags        34
#define	SYS_fchflags       35
#define	SYS_sync           36
#define	SYS_kill           37
			/* 38  old stat */
#define	SYS_getppid        39
			/* 40  old lstat */
#define	SYS_dup            41
#define	SYS_pipe           42
#define	SYS_getegid        43
			/* 44  old profil */
			/* 45  old ktrace */
#define	SYS_sigaction      46
#define	SYS_getgid         47
#define	SYS_sigprocmask    48
#define	SYS_getlogin       49
#define	SYS_setlogin       50
#define	SYS_acct           51
#define	SYS_sigpending     52
#define	SYS_sigaltstack    53
#define	SYS_ioctl          54
#define	SYS_reboot         55
#define	SYS_revoke         56
#define	SYS_symlink        57
#define	SYS_readlink       58
#define	SYS_execve         59
#define	SYS_umask          60
#define	SYS_chroot         61
			/* 62  old fstat */
			/* 63  used internally and reserved */
			/* 64  old getpagesize */
#define	SYS_msync          65
#define	SYS_vfork          66
			/* 67  old vread */
			/* 68  old vwrite */
			/* 69  old sbrk */
			/* 70  old sstk */
			/* 71  old mmap */
			/* 72  old vadvise */
#define	SYS_munmap         73
#define	SYS_mprotect       74
#define	SYS_madvise        75
			/* 76  old vhangup */
			/* 77  old vlimit */
#define	SYS_mincore        78
#define	SYS_getgroups      79
#define	SYS_setgroups      80
#define	SYS_getpgrp        81
#define	SYS_setpgid        82
#define	SYS_setitimer      83
			/* 84  old wait */
#define	SYS_swapon         85
#define	SYS_getitimer      86
			/* 87  old gethostname */
			/* 88  old sethostname */
#define	SYS_getdtablesize  89
#define	SYS_dup2           90
			/* 91  old getdopt */
#define	SYS_fcntl          92
#define	SYS_select         93
			/* 94  old setdopt */
#define	SYS_fsync          95
#define	SYS_setpriority    96
#define	SYS_socket         97
#define	SYS_connect        98
			/* 99  old accept */
#define	SYS_getpriority    100
			/* 101  old send */

			/* 103  old sigreturn */
#define	SYS_bind           104
#define	SYS_setsockopt     105
#define	SYS_listen         106
			/* 107  old vtimes */
			/* 108  old sigvec */
			/* 109  old sigblock */
			/* 110  old sigsetmask */
#define	SYS_sigsuspend     111
			/* 112  old sigstack */

			/* 114  old sendmsg */
			/* 115  old vtrace */
#define	SYS_gettimeofday   116
#define	SYS_getrusage      117
#define	SYS_getsockopt     118
			/* 119  old resuba */
#define	SYS_readv          120
#define	SYS_writev         121
#define	SYS_settimeofday   122
#define	SYS_fchown         123
#define	SYS_fchmod         124

#define	SYS_setreuid       126
#define	SYS_setregid       127
#define	SYS_rename         128
			/* 129  old truncate */
			/* 130  old ftruncate */
#define	SYS_flock          131
#define	SYS_mkfifo         132
#define	SYS_sendto         133
#define	SYS_shutdown       134
#define	SYS_socketpair     135
#define	SYS_mkdir          136
#define	SYS_rmdir          137
#define	SYS_utimes         138
#define	SYS_futimes        139
#define	SYS_adjtime        140
			/* 141  old getpeername */
#define	SYS_gethostuuid    142
			/* 143  old sethostid */
			/* 144  old getrlimit */
			/* 145  old setrlimit */
			/* 146  old killpg */
#define	SYS_setsid         147
			/* 148  old setquota */
			/* 149  old qquota */
			/* 150  old getsockname */
#define	SYS_getpgid        151
#define	SYS_setprivexec    152
#define	SYS_pread          153
#define	SYS_pwrite         154
#define	SYS_nfssvc         155
			/* 156  old getdirentries */
#define	SYS_statfs         157
#define	SYS_fstatfs        158
#define	SYS_unmount        159
			/* 160  old async_daemon */
#define	SYS_getfh          161
			/* 162  old getdomainname */
			/* 163  old setdomainname */
			/* 164  */
#define	SYS_quotactl       165
			/* 166  old exportfs */
#define	SYS_mount          167
			/* 168  old ustat */
#define	SYS_csops          169
#define	SYS_csops_audittoken 170
			/* 171  old wait3 */
			/* 172  old rpause */
#define	SYS_waitid         173
			/* 174  old getdents */
			/* 175  old gc_control */
			/* 176  old add_profil */
#define	SYS_kdebug_typefilter 177
#define	SYS_kdebug_trace_string 178
#define	SYS_kdebug_trace64 179
#define	SYS_kdebug_trace   180
#define	SYS_setgid         181
#define	SYS_setegid        182
#define	SYS_seteuid        183
#define	SYS_sigreturn      184
			/* 185  old chud */
#define	SYS_thread_selfcounts 186
#define	SYS_fdatasync      187
#define	SYS_stat           188
#define	SYS_fstat          189
#define	SYS_lstat          190
#define	SYS_pathconf       191
#define	SYS_fpathconf      192
			/* 193  old getfsstat */
#define	SYS_getrlimit      194
#define	SYS_setrlimit      195
#define	SYS_getdirentries  196
#define	SYS_mmap           197
			/* 198  old __syscall */
#define	SYS_lseek          199
#define	SYS_truncate       200
#define	SYS_ftruncate      201
#define	SYS_sysctl         202
#define	SYS_mlock          203
#define	SYS_munlock        204
#define	SYS_undelete       205
			/* 206  old ATsocket */
			/* 207  old ATgetmsg */
			/* 208  old ATputmsg */
			/* 209  old ATsndreq */
			/* 210  old ATsndrsp */
			/* 211  old ATgetreq */
			/* 212  old ATgetrsp */
			/* 213  Reserved for AppleTalk */
			/* 214  */
			/* 215  */
#define	SYS_open_dprotected_np 216
			/* 217  old statv */
			/* 218  old lstatv */
			/* 219  old fstatv */
#define	SYS_getattrlist    220
#define	SYS_setattrlist    221
#define	SYS_getdirentriesattr 222
#define	SYS_exchangedata   223
			/* 224  old checkuseraccess or fsgetpath */
#define	SYS_searchfs       225
#define	SYS_delete         226
#define	SYS_copyfile       227
#define	SYS_fgetattrlist   228
#define	SYS_fsetattrlist   229
#define	SYS_poll           230
#define	SYS_watchevent     231
#define	SYS_waitevent      232
#define	SYS_modwatch       233
#define	SYS_getxattr       234
#define	SYS_fgetxattr      235
#define	SYS_setxattr       236
#define	SYS_fsetxattr      237
#define	SYS_removexattr    238
#define	SYS_fremovexattr   239
#define	SYS_listxattr      240
#define	SYS_flistxattr     241
#define	SYS_fsctl          242
#define	SYS_initgroups     243
#define	SYS_posix_spawn    244
#define	SYS_ffsctl         245
			/* 246  */
#define	SYS_nfsclnt        247
#define	SYS_fhopen         248
			/* 249  */
#define	SYS_minherit       250
#define	SYS_semsys         251
#define	SYS_msgsys         252
#define	SYS_shmsys         253
#define	SYS_semctl         254
#define	SYS_semget         255
#define	SYS_semop          256
			/* 257  old semconfig */
#define	SYS_msgctl         258
#define	SYS_msgget         259
#define	SYS_msgsnd         260
#define	SYS_msgrcv         261
#define	SYS_shmat          262
#define	SYS_shmctl         263
#define	SYS_shmdt          264
#define	SYS_shmget         265
#define	SYS_shm_open       266
#define	SYS_shm_unlink     267
#define	SYS_sem_open       268
#define	SYS_sem_close      269
#define	SYS_sem_unlink     270
#define	SYS_sem_wait       271
#define	SYS_sem_trywait    272
#define	SYS_sem_post       273
#define	SYS_sysctlbyname   274
			/* 275  old sem_init */
			/* 276  old sem_destroy */
#define	SYS_open_extended  277
#define	SYS_umask_extended 278
#define	SYS_stat_extended  279
#define	SYS_lstat_extended 280
#define	SYS_fstat_extended 281
#define	SYS_chmod_extended 282
#define	SYS_fchmod_extended 283
#define	SYS_access_extended 284
#define	SYS_settid         285
#define	SYS_gettid         286
#define	SYS_setsgroups     287
#define	SYS_getsgroups     288
#define	SYS_setwgroups     289
#define	SYS_getwgroups     290
#define	SYS_mkfifo_extended 291
#define	SYS_mkdir_extended 292
#define	SYS_identitysvc    293
#define	SYS_shared_region_check_np 294
			/* 295  old shared_region_map_np */
#define	SYS_vm_pressure_monitor 296
#define	SYS_psynch_rw_longrdlock 297
#define	SYS_psynch_rw_yieldwrlock 298
#define	SYS_psynch_rw_downgrade 299
#define	SYS_psynch_rw_upgrade 300
#define	SYS_psynch_mutexwait 301
#define	SYS_psynch_mutexdrop 302
#define	SYS_psynch_cvbroad 303
#define	SYS_psynch_cvsignal 304
#define	SYS_psynch_cvwait  305
#define	SYS_psynch_rw_rdlock 306
#define	SYS_psynch_rw_wrlock 307
#define	SYS_psynch_rw_unlock 308
#define	SYS_psynch_rw_unlock2 309
#define	SYS_getsid         310
#define	SYS_settid_with_pid 311
#define	SYS_psynch_cvclrprepost 312
#define	SYS_aio_fsync      313
#define	SYS_aio_return     314
#define	SYS_aio_suspend    315
#define	SYS_aio_cancel     316
#define	SYS_aio_error      317
#define	SYS_aio_read       318
#define	SYS_aio_write      319
#define	SYS_lio_listio     320
			/* 321  old __pthread_cond_wait */
#define	SYS_iopolicysys    322
#define	SYS_process_policy 323
#define	SYS_mlockall       324
#define	SYS_munlockall     325
			/* 326  */
#define	SYS_issetugid      327
#define	SYS___pthread_kill 328
#define	SYS___pthread_sigmask 329
#define	SYS___sigwait      330
#define	SYS___disable_threadsignal 331
#define	SYS___pthread_markcancel 332
#define	SYS___pthread_canceled 333
#define	SYS___semwait_signal 334
			/* 335  old utrace */
#define	SYS_proc_info      336
#define	SYS_sendfile       337
#define	SYS_stat64         338
#define	SYS_fstat64        339
#define	SYS_lstat64        340
#define	SYS_stat64_extended 341
#define	SYS_lstat64_extended 342
#define	SYS_fstat64_extended 343
#define	SYS_getdirentries64 344
#define	SYS_statfs64       345
#define	SYS_fstatfs64      346
#define	SYS_getfsstat64    347
#define	SYS___pthread_chdir 348
#define	SYS___pthread_fchdir 349
#define	SYS_audit          350
#define	SYS_auditon        351
			/* 352  */
#define	SYS_getauid        353
#define	SYS_setauid        354
			/* 355  old getaudit */
			/* 356  old setaudit */
#define	SYS_getaudit_addr  357
#define	SYS_setaudit_addr  358
#define	SYS_auditctl       359
#define	SYS_bsdthread_create 360
#define	SYS_bsdthread_terminate 361
#define	SYS_kqueue         362
#define	SYS_kevent         363
#define	SYS_lchown         364
			/* 365  old stack_snapshot */
#define	SYS_bsdthread_register 366
#define	SYS_workq_open     367
#define	SYS_workq_kernreturn 368
#define	SYS_kevent64       369
#define	SYS___old_semwait_signal 370
#define	SYS___old_semwait_signal_nocancel 371
#define	SYS_thread_selfid  372
#define	SYS_ledger         373
#define	SYS_kevent_qos     374
#define	SYS_kevent_id      375
			/* 376  */
			/* 377  */
			/* 378  */
			/* 379  */
#define	SYS___mac_execve   380
#define	SYS___mac_syscall  381
#define	SYS___mac_get_file 382
#define	SYS___mac_set_file 383
#define	SYS___mac_get_link 384
#define	SYS___mac_set_link 385
#define	SYS___mac_get_proc 386
#define	SYS___mac_set_proc 387
#define	SYS___mac_get_fd   388
#define	SYS___mac_set_fd   389
#define	SYS___mac_get_pid  390
			/* 391  */
			/* 392  */
			/* 393  */
#define	SYS_pselect        394
#define	SYS_pselect_nocancel 395
#define	SYS_read_nocancel  396
#define	SYS_write_nocancel 397
#define	SYS_open_nocancel  398
#define	SYS_close_nocancel 399
#define	SYS_wait4_nocancel 400

#define	SYS_sendmsg_nocancel 402

#define	SYS_accept_nocancel 404
#define	SYS_msync_nocancel 405
#define	SYS_fcntl_nocancel 406
#define	SYS_select_nocancel 407
#define	SYS_fsync_nocancel 408
#define	SYS_connect_nocancel 409
#define	SYS_sigsuspend_nocancel 410
#define	SYS_readv_nocancel 411
#define	SYS_writev_nocancel 412
#define	SYS_sendto_nocancel 413
#define	SYS_pread_nocancel 414
#define	SYS_pwrite_nocancel 415
#define	SYS_waitid_nocancel 416
#define	SYS_poll_nocancel  417
#define	SYS_msgsnd_nocancel 418
#define	SYS_msgrcv_nocancel 419
#define	SYS_sem_wait_nocancel 420
#define	SYS_aio_suspend_nocancel 421
#define	SYS___sigwait_nocancel 422
#define	SYS___semwait_signal_nocancel 423
#define	SYS___mac_mount    424
#define	SYS___mac_get_mount 425
#define	SYS___mac_getfsstat 426
#define	SYS_fsgetpath      427
#define	SYS_audit_session_self 428
#define	SYS_audit_session_join 429
#define	SYS_fileport_makeport 430
#define	SYS_fileport_makefd 431
#define	SYS_audit_session_port 432
#define	SYS_pid_suspend    433
#define	SYS_pid_resume     434
#define	SYS_pid_hibernate  435
#define	SYS_pid_shutdown_sockets 436
			/* 437  old shared_region_slide_np */
#define	SYS_shared_region_map_and_slide_np 438
#define	SYS_kas_info       439
#define	SYS_memorystatus_control 440
#define	SYS_guarded_open_np 441
#define	SYS_guarded_close_np 442
#define	SYS_guarded_kqueue_np 443
#define	SYS_change_fdguard_np 444
#define	SYS_usrctl         445
#define	SYS_proc_rlimit_control 446
#define	SYS_connectx       447
#define	SYS_disconnectx    448
#define	SYS_peeloff        449
#define	SYS_socket_delegate 450
#define	SYS_telemetry      451
#define	SYS_proc_uuid_policy 452
#define	SYS_memorystatus_get_level 453
#define	SYS_system_override 454
#define	SYS_vfs_purge      455
#define	SYS_sfi_ctl        456
#define	SYS_sfi_pidctl     457
#define	SYS_coalition      458
#define	SYS_coalition_info 459
#define	SYS_necp_match_policy 460
#define	SYS_getattrlistbulk 461
#define	SYS_clonefileat    462
#define	SYS_openat         463
#define	SYS_openat_nocancel 464
#define	SYS_renameat       465
#define	SYS_faccessat      466
#define	SYS_fchmodat       467
#define	SYS_fchownat       468
#define	SYS_fstatat        469
#define	SYS_fstatat64      470
#define	SYS_linkat         471
#define	SYS_unlinkat       472
#define	SYS_readlinkat     473
#define	SYS_symlinkat      474
#define	SYS_mkdirat        475
#define	SYS_getattrlistat  476
#define	SYS_proc_trace_log 477
#define	SYS_bsdthread_ctl  478
#define	SYS_openbyid_np    479

#define	SYS_sendmsg_x      481
#define	SYS_thread_selfusage 482
#define	SYS_csrctl         483
#define	SYS_guarded_open_dprotected_np 484
#define	SYS_guarded_write_np 485
#define	SYS_guarded_pwrite_np 486
#define	SYS_guarded_writev_np 487
#define	SYS_renameatx_np   488
#define	SYS_mremap_encrypted 489
#define	SYS_netagent_trigger 490
#define	SYS_stack_snapshot_with_config 491
#define	SYS_microstackshot 492
#define	SYS_grab_pgo_data  493
#define	SYS_persona        494
			/* 495  */
			/* 496  */
			/* 497  */
			/* 498  */
#define	SYS_work_interval_ctl 499
#define	SYS_getentropy     500
#define	SYS_necp_open      501
#define	SYS_necp_client_action 502
#define	SYS___nexus_open   503
#define	SYS___nexus_register 504
#define	SYS___nexus_deregister 505
#define	SYS___nexus_create 506
#define	SYS___nexus_destroy 507
#define	SYS___nexus_get_opt 508
#define	SYS___nexus_set_opt 509
#define	SYS___channel_open 510
#define	SYS___channel_get_info 511
#define	SYS___channel_sync 512
#define	SYS___channel_get_opt 513
#define	SYS___channel_set_opt 514
#define	SYS_ulock_wait     515
#define	SYS_ulock_wake     516
#define	SYS_fclonefileat   517
#define	SYS_fs_snapshot    518
			/* 519  */
#define	SYS_terminate_with_payload 520
#define	SYS_abort_with_payload 521
#define	SYS_necp_session_open 522
#define	SYS_necp_session_action 523
#define	SYS_setattrlistat  524
#define	SYS_net_qos_guideline 525
#define	SYS_fmount         526
#define	SYS_ntp_adjtime    527
#define	SYS_ntp_gettime    528
#define	SYS_os_fault_with_payload 529
#define	SYS_MAXSYSCALL	530
#define	SYS_invalid	63


/* macos does not support some of these. */
#define SYS_getdents		SYS_getdirentries
#define SYS_nanosleep		0
#define SYS_clock_gettime	0
#define SYS_getcwd			0




