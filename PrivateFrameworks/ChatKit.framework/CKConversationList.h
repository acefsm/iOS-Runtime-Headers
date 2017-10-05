/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationList : NSObject {
    bool  _loadedConversations;
    bool  _loadingConversations;
    CKConversation * _pendingConversation;
    NSMutableArray * _trackedConversations;
}

@property (nonatomic, readonly) bool loadedConversations;
@property (nonatomic, readonly) bool loadingConversations;
@property (nonatomic, retain) CKConversation *pendingConversation;

+ (void)_handleRegistryDidLoadNotification:(id)arg1;
+ (void)initialize;
+ (id)sharedConversationList;

- (void).cxx_destruct;
- (void)_abChanged:(id)arg1;
- (id)_alreadyTrackedConversationForChat:(id)arg1;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (void)_beginTrackingAllExistingChatsIfNeededAsync;
- (id)_beginTrackingConversationWithChat:(id)arg1;
- (void)_beginTrackingConversationWithChat:(id)arg1 completion:(id /* block */)arg2;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (id)_conversationForChat:(id)arg1;
- (id)_copyEntitiesForAddressStrings:(id)arg1;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_handleEngroupFinishedUpdating:(id)arg1;
- (void)_handleMemoryWarning:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_postConversationListChangedNotification;
- (bool)_shouldFilterForParticipants:(id)arg1;
- (id)activeConversations;
- (void)beginTrackingConversation:(id)arg1 forChat:(id)arg2;
- (id)conversationForExistingChat:(id)arg1;
- (id)conversationForExistingChatWithGUID:(id)arg1;
- (id)conversationForExistingChatWithGroupID:(id)arg1;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(bool)arg3 create:(bool)arg4;
- (id)conversations;
- (void)dealloc;
- (void)deleteConversation:(id)arg1;
- (void)deleteConversations:(id)arg1;
- (id)description;
- (id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1;
- (bool)hasActiveConversations;
- (id)init;
- (bool)loadedConversations;
- (bool)loadingConversations;
- (id)pendingConversation;
- (id)pendingConversationCreatingIfNecessary;
- (void)resetCaches;
- (void)resort;
- (void)setNeedsReload;
- (void)setPendingConversation:(id)arg1;
- (void)stopTrackingConversation:(id)arg1;
- (id)topMostConversation;
- (void)unpendConversation;
- (long long)unreadCount;
- (long long)unreadFilteredConversationCountIgnoringMessages:(id)arg1;
- (id)unreadLastMessages;

@end
