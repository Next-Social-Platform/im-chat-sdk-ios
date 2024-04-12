// Objective-C API for talking to github.com/openimsdk/openim-sdk-core/v3/open_im_sdk Go package.
//   gobind -lang=objc github.com/openimsdk/openim-sdk-core/v3/open_im_sdk
//
// File is generated by gobind. Do not edit.

#ifndef __Open_im_sdk_H__
#define __Open_im_sdk_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Open_im_sdk_callback.objc.h"

@class Open_im_sdkLoginMgr;

@interface Open_im_sdkLoginMgr : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nullable instancetype)init;
- (id<Open_im_sdk_callbackOnAdvancedMsgListener> _Nullable)advancedMsgListener;
// skipped method LoginMgr.BaseCtx with unsupported parameter or return types

- (id<Open_im_sdk_callbackOnBatchMsgListener> _Nullable)batchMsgListener;
- (id<Open_im_sdk_callbackOnCustomBusinessListener> _Nullable)businessListener;
// skipped method LoginMgr.Context with unsupported parameter or return types

// skipped method LoginMgr.Conversation with unsupported parameter or return types

- (id<Open_im_sdk_callbackOnConversationListener> _Nullable)conversationListener;
- (void)exit;
// skipped method LoginMgr.File with unsupported parameter or return types

// skipped method LoginMgr.Friend with unsupported parameter or return types

- (id<Open_im_sdk_callbackOnFriendshipListener> _Nullable)friendListener;
// skipped method LoginMgr.Full with unsupported parameter or return types

// skipped method LoginMgr.GetLoginStatus with unsupported parameter or return types

- (NSString* _Nonnull)getLoginUserID;
- (NSString* _Nonnull)getToken;
// skipped method LoginMgr.Group with unsupported parameter or return types

- (id<Open_im_sdk_callbackOnGroupListener> _Nullable)groupListener;
// skipped method LoginMgr.ImConfig with unsupported parameter or return types

// skipped method LoginMgr.InitSDK with unsupported parameter or return types

// skipped method LoginMgr.Login with unsupported parameter or return types

// skipped method LoginMgr.Logout with unsupported parameter or return types

- (id<Open_im_sdk_callbackOnMessageKvInfoListener> _Nullable)msgKvListener;
// skipped method LoginMgr.NetworkStatusChanged with unsupported parameter or return types

- (void)setAdvancedMsgListener:(id<Open_im_sdk_callbackOnAdvancedMsgListener> _Nullable)advancedMsgListener;
// skipped method LoginMgr.SetAppBackgroundStatus with unsupported parameter or return types

- (void)setBatchMsgListener:(id<Open_im_sdk_callbackOnBatchMsgListener> _Nullable)batchMsgListener;
- (void)setConversationListener:(id<Open_im_sdk_callbackOnConversationListener> _Nullable)conversationListener;
- (void)setCustomBusinessListener:(id<Open_im_sdk_callbackOnCustomBusinessListener> _Nullable)listener;
- (void)setFriendListener:(id<Open_im_sdk_callbackOnFriendshipListener> _Nullable)friendListener;
- (void)setGroupListener:(id<Open_im_sdk_callbackOnGroupListener> _Nullable)groupListener;
- (void)setMessageKvInfoListener:(id<Open_im_sdk_callbackOnMessageKvInfoListener> _Nullable)messageKvInfoListener;
- (void)setUserListener:(id<Open_im_sdk_callbackOnUserListener> _Nullable)userListener;
- (id<Open_im_sdk_callbackOnSignalingListener> _Nullable)signalingListener;
// skipped method LoginMgr.Third with unsupported parameter or return types

- (void)unInitSDK;
// skipped method LoginMgr.User with unsupported parameter or return types

- (id<Open_im_sdk_callbackOnUserListener> _Nullable)userListener;
@end

FOUNDATION_EXPORT const int64_t Open_im_sdkLogged;
FOUNDATION_EXPORT const int64_t Open_im_sdkLogging;
FOUNDATION_EXPORT const int64_t Open_im_sdkLogoutStatus;
FOUNDATION_EXPORT NSString* _Nonnull const Open_im_sdkLogoutTips;

@interface Open_im_sdk : NSObject
+ (NSError* _Nullable) errNotImplemented;
+ (void) setErrNotImplemented:(NSError* _Nullable)v;

/**
 * UserForSDK Client-independent user class
 */
+ (Open_im_sdkLoginMgr* _Nullable) userForSDK;
+ (void) setUserForSDK:(Open_im_sdkLoginMgr* _Nullable)v;

@end

FOUNDATION_EXPORT void Open_im_sdkAcceptFriendApplication(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDHandleMsg);

FOUNDATION_EXPORT void Open_im_sdkAcceptGroupApplication(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable fromUserID, NSString* _Nullable handleMsg);

FOUNDATION_EXPORT void Open_im_sdkAddBlack(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable blackUserID, NSString* _Nullable ex);

FOUNDATION_EXPORT void Open_im_sdkAddFriend(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDReqMsg);

/**
 * AddUserCommand add to user's favorite
 */
FOUNDATION_EXPORT void Open_im_sdkAddUserCommand(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, int32_t Type, NSString* _Nullable uuid, NSString* _Nullable value);

FOUNDATION_EXPORT void Open_im_sdkChangeGroupMemberMute(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable userID, long mutedSeconds);

FOUNDATION_EXPORT void Open_im_sdkChangeGroupMute(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, BOOL isMute);

FOUNDATION_EXPORT void Open_im_sdkChangeInputStates(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, BOOL focus);

FOUNDATION_EXPORT void Open_im_sdkCheckFriend(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDList);

/**
 * CheckResourceLoad checks the SDK is resource load status.
 */
FOUNDATION_EXPORT BOOL Open_im_sdkCheckResourceLoad(Open_im_sdkLoginMgr* _Nullable uSDK, NSString* _Nullable funcName, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT void Open_im_sdkClearConversationAndDeleteAllMsg(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateAdvancedQuoteMessage(NSString* _Nullable operationID, NSString* _Nullable text, NSString* _Nullable message, NSString* _Nullable messageEntityList);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateAdvancedTextMessage(NSString* _Nullable operationID, NSString* _Nullable text, NSString* _Nullable messageEntityList);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateCardMessage(NSString* _Nullable operationID, NSString* _Nullable cardInfo);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateCustomMessage(NSString* _Nullable operationID, NSString* _Nullable data, NSString* _Nullable extension, NSString* _Nullable description);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateFaceMessage(NSString* _Nullable operationID, long index, NSString* _Nullable data);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateFileMessage(NSString* _Nullable operationID, NSString* _Nullable filePath, NSString* _Nullable fileName);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateFileMessageByURL(NSString* _Nullable operationID, NSString* _Nullable fileBaseInfo);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateFileMessageFromFullPath(NSString* _Nullable operationID, NSString* _Nullable fileFullPath, NSString* _Nullable fileName);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateForwardMessage(NSString* _Nullable operationID, NSString* _Nullable m);

FOUNDATION_EXPORT void Open_im_sdkCreateGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupReqInfo);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateImageMessage(NSString* _Nullable operationID, NSString* _Nullable imagePath);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateImageMessageByURL(NSString* _Nullable operationID, NSString* _Nullable sourcePath, NSString* _Nullable sourcePicture, NSString* _Nullable bigPicture, NSString* _Nullable snapshotPicture);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateImageMessageFromFullPath(NSString* _Nullable operationID, NSString* _Nullable imageFullPath);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateLocationMessage(NSString* _Nullable operationID, NSString* _Nullable description, double longitude, double latitude);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateMergerMessage(NSString* _Nullable operationID, NSString* _Nullable messageList, NSString* _Nullable title, NSString* _Nullable summaryList);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateQuoteMessage(NSString* _Nullable operationID, NSString* _Nullable text, NSString* _Nullable message);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateSoundMessage(NSString* _Nullable operationID, NSString* _Nullable soundPath, int64_t duration);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateSoundMessageByURL(NSString* _Nullable operationID, NSString* _Nullable soundBaseInfo);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateSoundMessageFromFullPath(NSString* _Nullable operationID, NSString* _Nullable soundPath, int64_t duration);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateTextAtMessage(NSString* _Nullable operationID, NSString* _Nullable text, NSString* _Nullable atUserList, NSString* _Nullable atUsersInfo, NSString* _Nullable message);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateTextMessage(NSString* _Nullable operationID, NSString* _Nullable text);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateVideoMessage(NSString* _Nullable operationID, NSString* _Nullable videoPath, NSString* _Nullable videoType, int64_t duration, NSString* _Nullable snapshotPath);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateVideoMessageByURL(NSString* _Nullable operationID, NSString* _Nullable videoBaseInfo);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateVideoMessageFromFullPath(NSString* _Nullable operationID, NSString* _Nullable videoFullPath, NSString* _Nullable videoType, int64_t duration, NSString* _Nullable snapshotFullPath);

FOUNDATION_EXPORT void Open_im_sdkDeleteAllMsgFromLocal(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkDeleteAllMsgFromLocalAndSvr(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkDeleteConversationAndDeleteAllMsg(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID);

FOUNDATION_EXPORT void Open_im_sdkDeleteFriend(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable friendUserID);

FOUNDATION_EXPORT void Open_im_sdkDeleteMessage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable clientMsgID);

FOUNDATION_EXPORT void Open_im_sdkDeleteMessageFromLocalStorage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable clientMsgID);

/**
 * DeleteUserCommand delete from user's favorite
 */
FOUNDATION_EXPORT void Open_im_sdkDeleteUserCommand(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, int32_t Type, NSString* _Nullable uuid);

FOUNDATION_EXPORT void Open_im_sdkDismissGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkFindMessageList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable findMessageOptions);

FOUNDATION_EXPORT void Open_im_sdkGetAdvancedHistoryMessageList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable getMessageOptions);

FOUNDATION_EXPORT void Open_im_sdkGetAdvancedHistoryMessageListReverse(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable getMessageOptions);

FOUNDATION_EXPORT void Open_im_sdkGetAllConversationList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

/**
 * GetAllUserCommands get user's favorite
 */
FOUNDATION_EXPORT void Open_im_sdkGetAllUserCommands(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, int32_t Type);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkGetAtAllTag(NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetBlackList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkGetConversationIDBySessionType(NSString* _Nullable operationID, NSString* _Nullable sourceID, long sessionType);

FOUNDATION_EXPORT void Open_im_sdkGetConversationListSplit(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, long offset, long count);

/**
 * deprecated
 */
FOUNDATION_EXPORT void Open_im_sdkGetConversationRecvMessageOpt(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationIDList);

FOUNDATION_EXPORT void Open_im_sdkGetFriendApplicationListAsApplicant(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetFriendApplicationListAsRecipient(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetFriendList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetFriendListPage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, int32_t offset, int32_t count);

FOUNDATION_EXPORT void Open_im_sdkGetGroupApplicationListAsApplicant(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetGroupApplicationListAsRecipient(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetGroupMemberList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, int32_t filter, int32_t offset, int32_t count);

FOUNDATION_EXPORT void Open_im_sdkGetGroupMemberListByJoinTimeFilter(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, int32_t offset, int32_t count, int64_t joinTimeBegin, int64_t joinTimeEnd, NSString* _Nullable filterUserIDList);

FOUNDATION_EXPORT void Open_im_sdkGetGroupMemberOwnerAndAdmin(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkGetInputStates(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable userID);

FOUNDATION_EXPORT void Open_im_sdkGetJoinedGroupList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT long Open_im_sdkGetLoginStatus(NSString* _Nullable operationID);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkGetLoginUserID(void);

FOUNDATION_EXPORT void Open_im_sdkGetMultipleConversation(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationIDList);

FOUNDATION_EXPORT void Open_im_sdkGetOneConversation(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, int32_t sessionType, NSString* _Nullable sourceID);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkGetSdkVersion(void);

/**
 * GetSelfUserInfo obtains the user's own information.
 */
FOUNDATION_EXPORT void Open_im_sdkGetSelfUserInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetSpecifiedFriendsInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDList);

FOUNDATION_EXPORT void Open_im_sdkGetSpecifiedGroupMembersInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable userIDList);

FOUNDATION_EXPORT void Open_im_sdkGetSpecifiedGroupsInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupIDList);

/**
 * GetSubscribeUsersStatus Get the online status of subscribers.
 */
FOUNDATION_EXPORT void Open_im_sdkGetSubscribeUsersStatus(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetTotalUnreadMsgCount(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

/**
 * GetUserStatus Get the online status of users.
 */
FOUNDATION_EXPORT void Open_im_sdkGetUserStatus(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDs);

FOUNDATION_EXPORT void Open_im_sdkGetUsersInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDs);

/**
 * GetUsersInfoFromSrv obtains the information about multiple users.
 */
FOUNDATION_EXPORT void Open_im_sdkGetUsersInfoFromSrv(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDs);

FOUNDATION_EXPORT void Open_im_sdkGetUsersInfoWithCache(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDs, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkHideAllConversations(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkHideConversation(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID);

FOUNDATION_EXPORT BOOL Open_im_sdkInitSDK(id<Open_im_sdk_callbackOnConnListener> _Nullable listener, NSString* _Nullable operationID, NSString* _Nullable config);

FOUNDATION_EXPORT void Open_im_sdkInsertGroupMessageToLocalStorage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message, NSString* _Nullable groupID, NSString* _Nullable sendID);

FOUNDATION_EXPORT void Open_im_sdkInsertSingleMessageToLocalStorage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message, NSString* _Nullable recvID, NSString* _Nullable sendID);

FOUNDATION_EXPORT void Open_im_sdkInviteUserToGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable reason, NSString* _Nullable userIDList);

FOUNDATION_EXPORT void Open_im_sdkIsJoinGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkJoinGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable reqMsg, int32_t joinSource, NSString* _Nullable ex);

FOUNDATION_EXPORT void Open_im_sdkKickGroupMember(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable reason, NSString* _Nullable userIDList);

FOUNDATION_EXPORT void Open_im_sdkLogin(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userID, NSString* _Nullable token);

FOUNDATION_EXPORT void Open_im_sdkLogout(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

/**
 * mark as read
 */
FOUNDATION_EXPORT void Open_im_sdkMarkConversationMessageAsRead(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID);

FOUNDATION_EXPORT void Open_im_sdkMarkMessagesAsReadByMsgID(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable clientMsgIDs);

FOUNDATION_EXPORT void Open_im_sdkNetworkStatusChanged(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT Open_im_sdkLoginMgr* _Nullable Open_im_sdkNewLoginMgr(void);

FOUNDATION_EXPORT void Open_im_sdkPinConversation(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, BOOL isPinned);

FOUNDATION_EXPORT void Open_im_sdkPinFriends(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable pinFriendsParams);

FOUNDATION_EXPORT void Open_im_sdkQuitGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkRefuseFriendApplication(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDHandleMsg);

FOUNDATION_EXPORT void Open_im_sdkRefuseGroupApplication(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable fromUserID, NSString* _Nullable handleMsg);

FOUNDATION_EXPORT void Open_im_sdkRemoveBlack(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable removeUserID);

FOUNDATION_EXPORT void Open_im_sdkResetConversationGroupAtType(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID);

FOUNDATION_EXPORT void Open_im_sdkRevokeMessage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable clientMsgID);

FOUNDATION_EXPORT void Open_im_sdkSearchConversation(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable searchParam);

FOUNDATION_EXPORT void Open_im_sdkSearchFriends(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable searchParam);

FOUNDATION_EXPORT void Open_im_sdkSearchGroupMembers(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable searchParam);

FOUNDATION_EXPORT void Open_im_sdkSearchGroups(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable searchParam);

FOUNDATION_EXPORT void Open_im_sdkSearchLocalMessages(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable searchParam);

FOUNDATION_EXPORT void Open_im_sdkSendMessage(id<Open_im_sdk_callbackSendMsgCallBack> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message, NSString* _Nullable recvID, NSString* _Nullable groupID, NSString* _Nullable offlinePushInfo, BOOL isOnlineOnly);

FOUNDATION_EXPORT void Open_im_sdkSendMessageNotOss(id<Open_im_sdk_callbackSendMsgCallBack> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message, NSString* _Nullable recvID, NSString* _Nullable groupID, NSString* _Nullable offlinePushInfo, BOOL isOnlineOnly);

FOUNDATION_EXPORT void Open_im_sdkSetAdvancedMsgListener(id<Open_im_sdk_callbackOnAdvancedMsgListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetAppBackgroundStatus(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, BOOL isBackground);

FOUNDATION_EXPORT void Open_im_sdkSetAppBadge(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, int32_t appUnreadCount);

FOUNDATION_EXPORT void Open_im_sdkSetBatchMsgListener(id<Open_im_sdk_callbackOnBatchMsgListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetConversationBurnDuration(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, int32_t duration);

FOUNDATION_EXPORT void Open_im_sdkSetConversationDraft(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable draftText);

FOUNDATION_EXPORT void Open_im_sdkSetConversationEx(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable ex);

FOUNDATION_EXPORT void Open_im_sdkSetConversationIsMsgDestruct(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, BOOL isMsgDestruct);

FOUNDATION_EXPORT void Open_im_sdkSetConversationListener(id<Open_im_sdk_callbackOnConversationListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetConversationMsgDestructTime(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, int64_t msgDestructTime);

FOUNDATION_EXPORT void Open_im_sdkSetConversationPrivateChat(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, BOOL isPrivate);

FOUNDATION_EXPORT void Open_im_sdkSetConversationRecvMessageOpt(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, long opt);

FOUNDATION_EXPORT void Open_im_sdkSetCustomBusinessListener(id<Open_im_sdk_callbackOnCustomBusinessListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetFriendListener(id<Open_im_sdk_callbackOnFriendshipListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetFriendRemark(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDRemark);

FOUNDATION_EXPORT void Open_im_sdkSetFriendsEx(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable friendIDs, NSString* _Nullable ex);

FOUNDATION_EXPORT void Open_im_sdkSetGlobalRecvMessageOpt(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, long opt);

FOUNDATION_EXPORT void Open_im_sdkSetGroupApplyMemberFriend(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, int32_t rule);

FOUNDATION_EXPORT void Open_im_sdkSetGroupInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupInfo);

FOUNDATION_EXPORT void Open_im_sdkSetGroupListener(id<Open_im_sdk_callbackOnGroupListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetGroupLookMemberInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, int32_t rule);

FOUNDATION_EXPORT void Open_im_sdkSetGroupMemberInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupMemberInfo);

FOUNDATION_EXPORT void Open_im_sdkSetGroupMemberNickname(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable userID, NSString* _Nullable groupMemberNickname);

FOUNDATION_EXPORT void Open_im_sdkSetGroupMemberRoleLevel(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable userID, long roleLevel);

FOUNDATION_EXPORT void Open_im_sdkSetGroupVerification(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, int32_t verification);

FOUNDATION_EXPORT void Open_im_sdkSetHeartbeatInterval(long heartbeatInterval);

FOUNDATION_EXPORT void Open_im_sdkSetMessageKvInfoListener(id<Open_im_sdk_callbackOnMessageKvInfoListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetMessageLocalEx(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable clientMsgID, NSString* _Nullable localEx);

/**
 * SetSelfInfo sets the user's own information.
Deprecated: user SetSelfInfoEx instead
 */
FOUNDATION_EXPORT void Open_im_sdkSetSelfInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userInfo);

/**
 * SetSelfInfoEx sets the user's own information with Ex field.
 */
FOUNDATION_EXPORT void Open_im_sdkSetSelfInfoEx(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userInfo);

FOUNDATION_EXPORT void Open_im_sdkSetUserListener(id<Open_im_sdk_callbackOnUserListener> _Nullable listener);

/**
 * SubscribeUsersStatus Presence status of subscribed users.
 */
FOUNDATION_EXPORT void Open_im_sdkSubscribeUsersStatus(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDs);

FOUNDATION_EXPORT void Open_im_sdkTransferGroupOwner(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable newOwnerUserID);

FOUNDATION_EXPORT void Open_im_sdkTypingStatusUpdate(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable recvID, NSString* _Nullable msgTip);

FOUNDATION_EXPORT void Open_im_sdkUnInitSDK(NSString* _Nullable operationID);

/**
 * UnsubscribeUsersStatus Unsubscribe a user's presence.
 */
FOUNDATION_EXPORT void Open_im_sdkUnsubscribeUsersStatus(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDs);

FOUNDATION_EXPORT void Open_im_sdkUpdateFcmToken(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable fcmToken, int64_t expireTime);

/**
 * UpdateMsgSenderInfo updates the message sender's nickname and face URL.
 */
FOUNDATION_EXPORT void Open_im_sdkUpdateMsgSenderInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable nickname, NSString* _Nullable faceURL);

FOUNDATION_EXPORT void Open_im_sdkUploadFile(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable req, id<Open_im_sdk_callbackUploadFileCallback> _Nullable progress);

FOUNDATION_EXPORT void Open_im_sdkUploadLogs(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, id<Open_im_sdk_callbackUploadLogProgress> _Nullable progress);

#endif