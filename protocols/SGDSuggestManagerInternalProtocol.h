/* Generated by RuntimeBrowser.
 */

@protocol SGDSuggestManagerInternalProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerInternalHarvestProtocol>

@required

- (void)addInteractions:(void *)arg1 bundleId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)addSearchableItems:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)clearCachesFully:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)daemonExitWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)deleteCloudKitZoneWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)drainQueueCompletelyWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)emailAddressIsSignificant:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)eventFromRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)eventsInFutureLimitTo:(void *)arg1 options:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)eventsStartingAt:(void *)arg1 endingAt:(void *)arg2 limitTo:(void *)arg3 options:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 10: NSDate *, NSDate *, unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)eventsStartingAt:(void *)arg1 endingAt:(void *)arg2 prefix:(void *)arg3 limitTo:(void *)arg4 options:(void *)arg5 withCompletion:(void *)arg6; // needs 6 arg types, found 11: NSDate *, NSDate *, NSString *, unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)predictedCCEmailAddressesWithToAddresses:(void *)arg1 ccAddresses:(void *)arg2 fromAddress:(void *)arg3 date:(void *)arg4 bounds:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSArray *, NSArray *, NSString *, double, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)predictedToEmailAddressesWithToAddresses:(void *)arg1 ccAddresses:(void *)arg2 fromAddress:(void *)arg3 date:(void *)arg4 bounds:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSArray *, NSArray *, NSString *, double, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)realtimeSuggestionsFromURL:(void *)arg1 title:(void *)arg2 HTMLPayload:(void *)arg3 extractionDate:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 10: NSURL *, NSString *, NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)removeAllStoredPseudoContactsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)resetConfirmationAndRejectionHistory:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)sendRTCLogsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)sleepWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)spotlightReimportFromIdentifier:(void *)arg1 forPersonHandle:(void *)arg2 startDate:(void *)arg3 endDate:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)suggestionsFromEmailContent:(void *)arg1 headers:(void *)arg2 source:(void *)arg3 options:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSData *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)suggestionsFromRFC822Data:(void *)arg1 source:(void *)arg2 options:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*

@end
