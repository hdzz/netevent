﻿/*
 * net_errordef.h
 *
 *  Created on: 2013年11月4日
 *      Author: jimm
 */

#ifndef NET_ERRORDEF_H_
#define NET_ERRORDEF_H_


/***************************************************************************************************
* 成功标识：	S_OK
*
* 成功描述：	调用成功
*/
#ifndef S_OK
#define S_OK													0x00000000
#endif


/***************************************************************************************************
* 成功标识：	S_FALSE
*
* 成功描述：	调用成功但执行不完全
*/
#ifndef S_FALSE
#define S_FALSE													0x00000001
#endif


/***************************************************************************************************
* 错误标识：	E_UNKNOWN
*
* 错误描述：	未知错误
*/
#define E_UNKNOWN												0x80000001


/***************************************************************************************************
* 错误标识：	E_NULLPOINTER
*
* 错误描述：	空指针错误
*/
#define E_NULLPOINTER											0x80000002


/***************************************************************************************************
* 错误标识：	E_INVALIDARGUMENT
*
* 错误描述：	无效的参数
*/
#define E_INVALIDARGUMENT										0x80000003

/***************************************************************************************************
* 错误标识：	E_CONNECTSERVER
*
* 错误描述：	连接服务器失败
*/
#define E_CONNECTSERVER											0x80010000


/***************************************************************************************************
* 错误标识：	E_SOCKETCREATE
*
* 错误描述：	套接字创建失败
*/
#define E_SOCKETCREATE											0x80010001


/***************************************************************************************************
* 错误标识：	E_SOCKETOPTION
*
* 错误描述：	套接字选项设置失败
*/
#define E_SOCKETOPTION											0x80010002


/***************************************************************************************************
* 错误标识：	E_SOCKETBIND
*
* 错误描述：	套接字绑定失败
*/
#define E_SOCKETBIND											0x80010003


/***************************************************************************************************
* 错误标识：	E_SOCKETLISTEN
*
* 错误描述：	套接字监听失败
*/
#define E_SOCKETLISTEN											0x80010004


/***************************************************************************************************
* 错误标识：	E_REMOTEIP
*
* 错误描述：	无效的目的IP地址
*/
#define E_REMOTEIP												0x80010005


/***************************************************************************************************
* 错误标识：	E_SOCKETTYPE
*
* 错误描述：	套接字类型错误
*/
#define E_SOCKETTYPE											0x80010006


/***************************************************************************************************
* 错误标识：	E_SOCKETNOTCREATED
*
* 错误描述：	套接字未创建
*/
#define E_SOCKETNOTCREATED										0x80010007


/***************************************************************************************************
* 错误标识：	E_SOCKETCONNECT
*
* 错误描述：	套接字连接失败
*/
#define E_SOCKETCONNECT											0x80010008


/***************************************************************************************************
* 错误标识：	E_SOCKETACCEPT
*
* 错误描述：	套接字接受失败
*/
#define E_SOCKETACCEPT											0x80010009


/***************************************************************************************************
* 错误标识：	E_SOCKETCONTROL
*
* 错误描述：	套接字控制失败
*/
#define E_SOCKETCONTROL											0x8001000A

/***************************************************************************************************
* 错误标识：	E_SOCKETDISCONNECTED
*
* 错误描述：	套接字已断开连接
*/
#define E_SOCKETDISCONNECTED									0x8001000B


/***************************************************************************************************
* 错误标识：	E_SOCKETERROR
*
* 错误描述：	套接字发生错误
*/
#define E_SOCKETERROR											0x8001000C


/***************************************************************************************************
* 错误标识：	S_SENDNOTCOMPLETED
*
* 错误描述：	数据未完全发送
*/
#define S_SENDNOTCOMPLETED										0x8001000D


/***************************************************************************************************
* 错误标识：	S_ALREADYCONNECTED
*
* 错误描述：	连接已经建立
*/
#define S_ALREADYCONNECTED										0x0001000E


/***************************************************************************************************
* 错误标识：	S_NODATA
*
* 错误描述：	没有数据到达
*/
#define S_NODATA												0x0001000F


/***************************************************************************************************
* 错误标识：	E_SOCKET_CONNECTING
*
* 错误描述：	套接字正在连接
*/
#define E_SOCKET_CONNECTING										0x80010010

#endif /* NET_ERRORDEF_H_ */
