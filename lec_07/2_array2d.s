
a.out:     формат файла elf64-x86-64


Дизассемблирование раздела .init:

0000000000001000 <_init>:
    1000:	48 83 ec 08          	sub    $0x8,%rsp
    1004:	48 8b 05 dd 2f 00 00 	mov    0x2fdd(%rip),%rax        # 3fe8 <__gmon_start__>
    100b:	48 85 c0             	test   %rax,%rax
    100e:	74 02                	je     1012 <_init+0x12>
    1010:	ff d0                	callq  *%rax
    1012:	48 83 c4 08          	add    $0x8,%rsp
    1016:	c3                   	retq   

Дизассемблирование раздела .plt:

0000000000001020 <.plt>:
    1020:	ff 35 e2 2f 00 00    	pushq  0x2fe2(%rip)        # 4008 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	ff 25 e4 2f 00 00    	jmpq   *0x2fe4(%rip)        # 4010 <_GLOBAL_OFFSET_TABLE_+0x10>
    102c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001030 <_ZNSirsERi@plt>:
    1030:	ff 25 e2 2f 00 00    	jmpq   *0x2fe2(%rip)        # 4018 <_ZNSirsERi@GLIBCXX_3.4>
    1036:	68 00 00 00 00       	pushq  $0x0
    103b:	e9 e0 ff ff ff       	jmpq   1020 <.plt>

0000000000001040 <__cxa_atexit@plt>:
    1040:	ff 25 da 2f 00 00    	jmpq   *0x2fda(%rip)        # 4020 <__cxa_atexit@GLIBC_2.2.5>
    1046:	68 01 00 00 00       	pushq  $0x1
    104b:	e9 d0 ff ff ff       	jmpq   1020 <.plt>

0000000000001050 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@plt>:
    1050:	ff 25 d2 2f 00 00    	jmpq   *0x2fd2(%rip)        # 4028 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@GLIBCXX_3.4>
    1056:	68 02 00 00 00       	pushq  $0x2
    105b:	e9 c0 ff ff ff       	jmpq   1020 <.plt>

0000000000001060 <_ZNSt8ios_base4InitC1Ev@plt>:
    1060:	ff 25 ca 2f 00 00    	jmpq   *0x2fca(%rip)        # 4030 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
    1066:	68 03 00 00 00       	pushq  $0x3
    106b:	e9 b0 ff ff ff       	jmpq   1020 <.plt>

0000000000001070 <_ZNSolsEi@plt>:
    1070:	ff 25 c2 2f 00 00    	jmpq   *0x2fc2(%rip)        # 4038 <_ZNSolsEi@GLIBCXX_3.4>
    1076:	68 04 00 00 00       	pushq  $0x4
    107b:	e9 a0 ff ff ff       	jmpq   1020 <.plt>

Дизассемблирование раздела .plt.got:

0000000000001080 <__cxa_finalize@plt>:
    1080:	ff 25 4a 2f 00 00    	jmpq   *0x2f4a(%rip)        # 3fd0 <__cxa_finalize@GLIBC_2.2.5>
    1086:	66 90                	xchg   %ax,%ax

Дизассемблирование раздела .text:

0000000000001090 <_start>:
    1090:	31 ed                	xor    %ebp,%ebp
    1092:	49 89 d1             	mov    %rdx,%r9
    1095:	5e                   	pop    %rsi
    1096:	48 89 e2             	mov    %rsp,%rdx
    1099:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    109d:	50                   	push   %rax
    109e:	54                   	push   %rsp
    109f:	4c 8d 05 4a 04 00 00 	lea    0x44a(%rip),%r8        # 14f0 <__libc_csu_fini>
    10a6:	48 8d 0d e3 03 00 00 	lea    0x3e3(%rip),%rcx        # 1490 <__libc_csu_init>
    10ad:	48 8d 3d c1 00 00 00 	lea    0xc1(%rip),%rdi        # 1175 <main>
    10b4:	ff 15 26 2f 00 00    	callq  *0x2f26(%rip)        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    10ba:	f4                   	hlt    
    10bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010c0 <deregister_tm_clones>:
    10c0:	48 8d 3d 89 2f 00 00 	lea    0x2f89(%rip),%rdi        # 4050 <__TMC_END__>
    10c7:	48 8d 05 82 2f 00 00 	lea    0x2f82(%rip),%rax        # 4050 <__TMC_END__>
    10ce:	48 39 f8             	cmp    %rdi,%rax
    10d1:	74 15                	je     10e8 <deregister_tm_clones+0x28>
    10d3:	48 8b 05 fe 2e 00 00 	mov    0x2efe(%rip),%rax        # 3fd8 <_ITM_deregisterTMCloneTable>
    10da:	48 85 c0             	test   %rax,%rax
    10dd:	74 09                	je     10e8 <deregister_tm_clones+0x28>
    10df:	ff e0                	jmpq   *%rax
    10e1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    10e8:	c3                   	retq   
    10e9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000010f0 <register_tm_clones>:
    10f0:	48 8d 3d 59 2f 00 00 	lea    0x2f59(%rip),%rdi        # 4050 <__TMC_END__>
    10f7:	48 8d 35 52 2f 00 00 	lea    0x2f52(%rip),%rsi        # 4050 <__TMC_END__>
    10fe:	48 29 fe             	sub    %rdi,%rsi
    1101:	48 c1 fe 03          	sar    $0x3,%rsi
    1105:	48 89 f0             	mov    %rsi,%rax
    1108:	48 c1 e8 3f          	shr    $0x3f,%rax
    110c:	48 01 c6             	add    %rax,%rsi
    110f:	48 d1 fe             	sar    %rsi
    1112:	74 14                	je     1128 <register_tm_clones+0x38>
    1114:	48 8b 05 d5 2e 00 00 	mov    0x2ed5(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable>
    111b:	48 85 c0             	test   %rax,%rax
    111e:	74 08                	je     1128 <register_tm_clones+0x38>
    1120:	ff e0                	jmpq   *%rax
    1122:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1128:	c3                   	retq   
    1129:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001130 <__do_global_dtors_aux>:
    1130:	80 3d 61 31 00 00 00 	cmpb   $0x0,0x3161(%rip)        # 4298 <completed.7325>
    1137:	75 2f                	jne    1168 <__do_global_dtors_aux+0x38>
    1139:	55                   	push   %rbp
    113a:	48 83 3d 8e 2e 00 00 	cmpq   $0x0,0x2e8e(%rip)        # 3fd0 <__cxa_finalize@GLIBC_2.2.5>
    1141:	00 
    1142:	48 89 e5             	mov    %rsp,%rbp
    1145:	74 0c                	je     1153 <__do_global_dtors_aux+0x23>
    1147:	48 8b 3d fa 2e 00 00 	mov    0x2efa(%rip),%rdi        # 4048 <__dso_handle>
    114e:	e8 2d ff ff ff       	callq  1080 <__cxa_finalize@plt>
    1153:	e8 68 ff ff ff       	callq  10c0 <deregister_tm_clones>
    1158:	c6 05 39 31 00 00 01 	movb   $0x1,0x3139(%rip)        # 4298 <completed.7325>
    115f:	5d                   	pop    %rbp
    1160:	c3                   	retq   
    1161:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1168:	c3                   	retq   
    1169:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001170 <frame_dummy>:
    1170:	e9 7b ff ff ff       	jmpq   10f0 <register_tm_clones>

0000000000001175 <main>:
    1175:	55                   	push   %rbp
    1176:	48 89 e5             	mov    %rsp,%rbp
    1179:	41 57                	push   %r15
    117b:	41 56                	push   %r14
    117d:	41 55                	push   %r13
    117f:	41 54                	push   %r12
    1181:	53                   	push   %rbx
    1182:	48 81 ec 88 00 00 00 	sub    $0x88,%rsp
    1189:	48 89 e0             	mov    %rsp,%rax
    118c:	48 89 85 58 ff ff ff 	mov    %rax,-0xa8(%rbp)
    1193:	48 8d 45 94          	lea    -0x6c(%rbp),%rax
    1197:	48 89 c6             	mov    %rax,%rsi
    119a:	48 8d 3d df 2f 00 00 	lea    0x2fdf(%rip),%rdi        # 4180 <_ZSt3cin@@GLIBCXX_3.4>
    11a1:	e8 8a fe ff ff       	callq  1030 <_ZNSirsERi@plt>
    11a6:	48 89 c2             	mov    %rax,%rdx
    11a9:	48 8d 45 90          	lea    -0x70(%rbp),%rax
    11ad:	48 89 c6             	mov    %rax,%rsi
    11b0:	48 89 d7             	mov    %rdx,%rdi
    11b3:	e8 78 fe ff ff       	callq  1030 <_ZNSirsERi@plt>
    11b8:	8b 45 90             	mov    -0x70(%rbp),%eax
    11bb:	48 98                	cltq   
    11bd:	48 8d 48 ff          	lea    -0x1(%rax),%rcx
    11c1:	48 89 4d b0          	mov    %rcx,-0x50(%rbp)
    11c5:	48 89 c8             	mov    %rcx,%rax
    11c8:	48 83 c0 01          	add    $0x1,%rax
    11cc:	48 89 85 60 ff ff ff 	mov    %rax,-0xa0(%rbp)
    11d3:	48 c7 85 68 ff ff ff 	movq   $0x0,-0x98(%rbp)
    11da:	00 00 00 00 
    11de:	48 89 c8             	mov    %rcx,%rax
    11e1:	48 83 c0 01          	add    $0x1,%rax
    11e5:	48 8d 1c 85 00 00 00 	lea    0x0(,%rax,4),%rbx
    11ec:	00 
    11ed:	8b 45 94             	mov    -0x6c(%rbp),%eax
    11f0:	48 98                	cltq   
    11f2:	48 8d 70 ff          	lea    -0x1(%rax),%rsi
    11f6:	48 89 75 a8          	mov    %rsi,-0x58(%rbp)
    11fa:	48 89 c8             	mov    %rcx,%rax
    11fd:	48 83 c0 01          	add    $0x1,%rax
    1201:	48 89 45 80          	mov    %rax,-0x80(%rbp)
    1205:	48 c7 45 88 00 00 00 	movq   $0x0,-0x78(%rbp)
    120c:	00 
    120d:	48 89 f0             	mov    %rsi,%rax
    1210:	48 83 c0 01          	add    $0x1,%rax
    1214:	48 89 85 70 ff ff ff 	mov    %rax,-0x90(%rbp)
    121b:	48 c7 85 78 ff ff ff 	movq   $0x0,-0x88(%rbp)
    1222:	00 00 00 00 
    1226:	4c 8b 45 80          	mov    -0x80(%rbp),%r8
    122a:	4c 8b 4d 88          	mov    -0x78(%rbp),%r9
    122e:	4c 89 ca             	mov    %r9,%rdx
    1231:	4c 8b 95 70 ff ff ff 	mov    -0x90(%rbp),%r10
    1238:	4c 8b 9d 78 ff ff ff 	mov    -0x88(%rbp),%r11
    123f:	49 0f af d2          	imul   %r10,%rdx
    1243:	4c 89 d8             	mov    %r11,%rax
    1246:	49 0f af c0          	imul   %r8,%rax
    124a:	48 8d 3c 02          	lea    (%rdx,%rax,1),%rdi
    124e:	4c 89 c0             	mov    %r8,%rax
    1251:	49 f7 e2             	mul    %r10
    1254:	48 01 d7             	add    %rdx,%rdi
    1257:	48 89 fa             	mov    %rdi,%rdx
    125a:	48 89 c8             	mov    %rcx,%rax
    125d:	48 83 c0 01          	add    $0x1,%rax
    1261:	49 89 c6             	mov    %rax,%r14
    1264:	41 bf 00 00 00 00    	mov    $0x0,%r15d
    126a:	48 89 f0             	mov    %rsi,%rax
    126d:	48 83 c0 01          	add    $0x1,%rax
    1271:	49 89 c4             	mov    %rax,%r12
    1274:	41 bd 00 00 00 00    	mov    $0x0,%r13d
    127a:	4c 89 fa             	mov    %r15,%rdx
    127d:	49 0f af d4          	imul   %r12,%rdx
    1281:	4c 89 e8             	mov    %r13,%rax
    1284:	49 0f af c6          	imul   %r14,%rax
    1288:	48 8d 3c 02          	lea    (%rdx,%rax,1),%rdi
    128c:	4c 89 f0             	mov    %r14,%rax
    128f:	49 f7 e4             	mul    %r12
    1292:	48 01 d7             	add    %rdx,%rdi
    1295:	48 89 fa             	mov    %rdi,%rdx
    1298:	48 89 c8             	mov    %rcx,%rax
    129b:	48 8d 50 01          	lea    0x1(%rax),%rdx
    129f:	48 89 f0             	mov    %rsi,%rax
    12a2:	48 83 c0 01          	add    $0x1,%rax
    12a6:	48 0f af c2          	imul   %rdx,%rax
    12aa:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    12b1:	00 
    12b2:	b8 10 00 00 00       	mov    $0x10,%eax
    12b7:	48 83 e8 01          	sub    $0x1,%rax
    12bb:	48 01 d0             	add    %rdx,%rax
    12be:	b9 10 00 00 00       	mov    $0x10,%ecx
    12c3:	ba 00 00 00 00       	mov    $0x0,%edx
    12c8:	48 f7 f1             	div    %rcx
    12cb:	48 6b c0 10          	imul   $0x10,%rax,%rax
    12cf:	48 29 c4             	sub    %rax,%rsp
    12d2:	48 89 e0             	mov    %rsp,%rax
    12d5:	48 83 c0 03          	add    $0x3,%rax
    12d9:	48 c1 e8 02          	shr    $0x2,%rax
    12dd:	48 c1 e0 02          	shl    $0x2,%rax
    12e1:	48 89 45 a0          	mov    %rax,-0x60(%rbp)
    12e5:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%rbp)
    12ec:	8b 45 94             	mov    -0x6c(%rbp),%eax
    12ef:	39 45 bc             	cmp    %eax,-0x44(%rbp)
    12f2:	7d 4b                	jge    133f <main+0x1ca>
    12f4:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%rbp)
    12fb:	8b 45 90             	mov    -0x70(%rbp),%eax
    12fe:	39 45 c0             	cmp    %eax,-0x40(%rbp)
    1301:	7d 36                	jge    1339 <main+0x1c4>
    1303:	8b 45 90             	mov    -0x70(%rbp),%eax
    1306:	0f af 45 bc          	imul   -0x44(%rbp),%eax
    130a:	89 c2                	mov    %eax,%edx
    130c:	48 89 df             	mov    %rbx,%rdi
    130f:	48 c1 ef 02          	shr    $0x2,%rdi
    1313:	8b 45 c0             	mov    -0x40(%rbp),%eax
    1316:	8d 0c 02             	lea    (%rdx,%rax,1),%ecx
    1319:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
    131d:	8b 55 c0             	mov    -0x40(%rbp),%edx
    1320:	48 63 f2             	movslq %edx,%rsi
    1323:	8b 55 bc             	mov    -0x44(%rbp),%edx
    1326:	48 63 d2             	movslq %edx,%rdx
    1329:	48 0f af d7          	imul   %rdi,%rdx
    132d:	48 01 f2             	add    %rsi,%rdx
    1330:	89 0c 90             	mov    %ecx,(%rax,%rdx,4)
    1333:	83 45 c0 01          	addl   $0x1,-0x40(%rbp)
    1337:	eb c2                	jmp    12fb <main+0x186>
    1339:	83 45 bc 01          	addl   $0x1,-0x44(%rbp)
    133d:	eb ad                	jmp    12ec <main+0x177>
    133f:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%rbp)
    1346:	8b 45 94             	mov    -0x6c(%rbp),%eax
    1349:	39 45 c4             	cmp    %eax,-0x3c(%rbp)
    134c:	7d 68                	jge    13b6 <main+0x241>
    134e:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%rbp)
    1355:	8b 45 90             	mov    -0x70(%rbp),%eax
    1358:	39 45 c8             	cmp    %eax,-0x38(%rbp)
    135b:	7d 42                	jge    139f <main+0x22a>
    135d:	48 89 de             	mov    %rbx,%rsi
    1360:	48 c1 ee 02          	shr    $0x2,%rsi
    1364:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
    1368:	8b 55 c8             	mov    -0x38(%rbp),%edx
    136b:	48 63 ca             	movslq %edx,%rcx
    136e:	8b 55 c4             	mov    -0x3c(%rbp),%edx
    1371:	48 63 d2             	movslq %edx,%rdx
    1374:	48 0f af d6          	imul   %rsi,%rdx
    1378:	48 01 ca             	add    %rcx,%rdx
    137b:	8b 04 90             	mov    (%rax,%rdx,4),%eax
    137e:	89 c6                	mov    %eax,%esi
    1380:	48 8d 3d d9 2c 00 00 	lea    0x2cd9(%rip),%rdi        # 4060 <_ZSt4cout@@GLIBCXX_3.4>
    1387:	e8 e4 fc ff ff       	callq  1070 <_ZNSolsEi@plt>
    138c:	be 09 00 00 00       	mov    $0x9,%esi
    1391:	48 89 c7             	mov    %rax,%rdi
    1394:	e8 b7 fc ff ff       	callq  1050 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@plt>
    1399:	83 45 c8 01          	addl   $0x1,-0x38(%rbp)
    139d:	eb b6                	jmp    1355 <main+0x1e0>
    139f:	be 0a 00 00 00       	mov    $0xa,%esi
    13a4:	48 8d 3d b5 2c 00 00 	lea    0x2cb5(%rip),%rdi        # 4060 <_ZSt4cout@@GLIBCXX_3.4>
    13ab:	e8 a0 fc ff ff       	callq  1050 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@plt>
    13b0:	83 45 c4 01          	addl   $0x1,-0x3c(%rbp)
    13b4:	eb 90                	jmp    1346 <main+0x1d1>
    13b6:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
    13ba:	48 89 45 98          	mov    %rax,-0x68(%rbp)
    13be:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%rbp)
    13c5:	8b 55 90             	mov    -0x70(%rbp),%edx
    13c8:	8b 45 94             	mov    -0x6c(%rbp),%eax
    13cb:	0f af c2             	imul   %edx,%eax
    13ce:	39 45 cc             	cmp    %eax,-0x34(%rbp)
    13d1:	7d 37                	jge    140a <main+0x295>
    13d3:	8b 45 cc             	mov    -0x34(%rbp),%eax
    13d6:	48 98                	cltq   
    13d8:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    13df:	00 
    13e0:	48 8b 45 98          	mov    -0x68(%rbp),%rax
    13e4:	48 01 d0             	add    %rdx,%rax
    13e7:	8b 00                	mov    (%rax),%eax
    13e9:	89 c6                	mov    %eax,%esi
    13eb:	48 8d 3d 6e 2c 00 00 	lea    0x2c6e(%rip),%rdi        # 4060 <_ZSt4cout@@GLIBCXX_3.4>
    13f2:	e8 79 fc ff ff       	callq  1070 <_ZNSolsEi@plt>
    13f7:	be 20 00 00 00       	mov    $0x20,%esi
    13fc:	48 89 c7             	mov    %rax,%rdi
    13ff:	e8 4c fc ff ff       	callq  1050 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@plt>
    1404:	83 45 cc 01          	addl   $0x1,-0x34(%rbp)
    1408:	eb bb                	jmp    13c5 <main+0x250>
    140a:	b8 00 00 00 00       	mov    $0x0,%eax
    140f:	48 8b a5 58 ff ff ff 	mov    -0xa8(%rbp),%rsp
    1416:	48 8d 65 d8          	lea    -0x28(%rbp),%rsp
    141a:	5b                   	pop    %rbx
    141b:	41 5c                	pop    %r12
    141d:	41 5d                	pop    %r13
    141f:	41 5e                	pop    %r14
    1421:	41 5f                	pop    %r15
    1423:	5d                   	pop    %rbp
    1424:	c3                   	retq   

0000000000001425 <_Z41__static_initialization_and_destruction_0ii>:
    1425:	55                   	push   %rbp
    1426:	48 89 e5             	mov    %rsp,%rbp
    1429:	48 83 ec 10          	sub    $0x10,%rsp
    142d:	89 7d fc             	mov    %edi,-0x4(%rbp)
    1430:	89 75 f8             	mov    %esi,-0x8(%rbp)
    1433:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
    1437:	75 32                	jne    146b <_Z41__static_initialization_and_destruction_0ii+0x46>
    1439:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
    1440:	75 29                	jne    146b <_Z41__static_initialization_and_destruction_0ii+0x46>
    1442:	48 8d 3d 50 2e 00 00 	lea    0x2e50(%rip),%rdi        # 4299 <_ZStL8__ioinit>
    1449:	e8 12 fc ff ff       	callq  1060 <_ZNSt8ios_base4InitC1Ev@plt>
    144e:	48 8d 15 f3 2b 00 00 	lea    0x2bf3(%rip),%rdx        # 4048 <__dso_handle>
    1455:	48 8d 35 3d 2e 00 00 	lea    0x2e3d(%rip),%rsi        # 4299 <_ZStL8__ioinit>
    145c:	48 8b 05 95 2b 00 00 	mov    0x2b95(%rip),%rax        # 3ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
    1463:	48 89 c7             	mov    %rax,%rdi
    1466:	e8 d5 fb ff ff       	callq  1040 <__cxa_atexit@plt>
    146b:	90                   	nop
    146c:	c9                   	leaveq 
    146d:	c3                   	retq   

000000000000146e <_GLOBAL__sub_I_main>:
    146e:	55                   	push   %rbp
    146f:	48 89 e5             	mov    %rsp,%rbp
    1472:	be ff ff 00 00       	mov    $0xffff,%esi
    1477:	bf 01 00 00 00       	mov    $0x1,%edi
    147c:	e8 a4 ff ff ff       	callq  1425 <_Z41__static_initialization_and_destruction_0ii>
    1481:	5d                   	pop    %rbp
    1482:	c3                   	retq   
    1483:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    148a:	00 00 00 
    148d:	0f 1f 00             	nopl   (%rax)

0000000000001490 <__libc_csu_init>:
    1490:	41 57                	push   %r15
    1492:	49 89 d7             	mov    %rdx,%r15
    1495:	41 56                	push   %r14
    1497:	49 89 f6             	mov    %rsi,%r14
    149a:	41 55                	push   %r13
    149c:	41 89 fd             	mov    %edi,%r13d
    149f:	41 54                	push   %r12
    14a1:	4c 8d 25 00 29 00 00 	lea    0x2900(%rip),%r12        # 3da8 <__frame_dummy_init_array_entry>
    14a8:	55                   	push   %rbp
    14a9:	48 8d 2d 08 29 00 00 	lea    0x2908(%rip),%rbp        # 3db8 <__init_array_end>
    14b0:	53                   	push   %rbx
    14b1:	4c 29 e5             	sub    %r12,%rbp
    14b4:	48 83 ec 08          	sub    $0x8,%rsp
    14b8:	e8 43 fb ff ff       	callq  1000 <_init>
    14bd:	48 c1 fd 03          	sar    $0x3,%rbp
    14c1:	74 1b                	je     14de <__libc_csu_init+0x4e>
    14c3:	31 db                	xor    %ebx,%ebx
    14c5:	0f 1f 00             	nopl   (%rax)
    14c8:	4c 89 fa             	mov    %r15,%rdx
    14cb:	4c 89 f6             	mov    %r14,%rsi
    14ce:	44 89 ef             	mov    %r13d,%edi
    14d1:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
    14d5:	48 83 c3 01          	add    $0x1,%rbx
    14d9:	48 39 dd             	cmp    %rbx,%rbp
    14dc:	75 ea                	jne    14c8 <__libc_csu_init+0x38>
    14de:	48 83 c4 08          	add    $0x8,%rsp
    14e2:	5b                   	pop    %rbx
    14e3:	5d                   	pop    %rbp
    14e4:	41 5c                	pop    %r12
    14e6:	41 5d                	pop    %r13
    14e8:	41 5e                	pop    %r14
    14ea:	41 5f                	pop    %r15
    14ec:	c3                   	retq   
    14ed:	0f 1f 00             	nopl   (%rax)

00000000000014f0 <__libc_csu_fini>:
    14f0:	c3                   	retq   

Дизассемблирование раздела .fini:

00000000000014f4 <_fini>:
    14f4:	48 83 ec 08          	sub    $0x8,%rsp
    14f8:	48 83 c4 08          	add    $0x8,%rsp
    14fc:	c3                   	retq   
