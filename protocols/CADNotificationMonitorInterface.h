/* Generated by RuntimeBrowser.
 */

@protocol CADNotificationMonitorInterface

@required

- (void)CADCalendar:(void *)arg1 setAlertedWithError:(void *)arg2; // needs 2 arg types, found 7: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADCalendarSetClearedFromNotificationCenter:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 7: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseGetEventNotificationItems:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, NSArray *, NSArray *, void*
- (void)CADDatabaseGetInboxRepliedSectionItems:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, NSArray *, void*
- (void)CADDatabaseGetInviteReplyNotifications:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetReminderNotificationItems:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, NSArray *, NSArray *, void*
- (void)CADDatabaseGetResourceChanges:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADEvent:(void *)arg1 setAlertedWithError:(void *)arg2; // needs 2 arg types, found 7: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADEventSetInvitationStatus:(void *)arg1 forEvent:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 8: int, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADInviteReplyNotification:(void *)arg1 setAlertedWithError:(void *)arg2; // needs 2 arg types, found 7: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADResourceChange:(void *)arg1 setAlertedWithError:(void *)arg2; // needs 2 arg types, found 7: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
