/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMPeople : NSObject {
    int  _coalesceCount;
    bool  _hidePeople;
    NSMutableArray * _people;
}

@property (nonatomic, readonly) bool coalescingChanges;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *groups;
@property (setter=setShouldHidePeople:, nonatomic) bool hidePeople;
@property (nonatomic, readonly) NSArray *people;

- (void).cxx_destruct;
- (void)_addedPeople:(id)arg1;
- (bool)addIMHandle:(id)arg1;
- (void)addNotificationObserver:(id)arg1 selector:(SEL)arg2;
- (bool)addPeopleFromArray:(id)arg1;
- (bool)addPeopleFromArray:(id)arg1 skipMe:(bool)arg2;
- (void)addedIMHandle:(id)arg1;
- (void)beginCoalescedChanges;
- (bool)coalescingChanges;
- (bool)containsIMHandle:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)endCoalescedChanges;
- (id)groups;
- (bool)hidePeople;
- (void)imHandle:(id)arg1 buddyStatusChanged:(bool)arg2;
- (id)people;
- (bool)removeIMHandle:(id)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (bool)removePeopleFromArray:(id)arg1;
- (void)removedIMHandle:(id)arg1;
- (void)setShouldHidePeople:(bool)arg1;

@end
