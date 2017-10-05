/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFBulletin : NSObject <NSSecureCoding> {
    bool  _allDay;
    BBBulletin * _bbBulletin;
    NSString * _bulletinID;
    NSDate * _date;
    NSString * _displayName;
    NSDate * _endDate;
    NSArray * _intentIDs;
    NSString * _message;
    NSString * _modalAlertContentMessage;
    NSString * _publisherBulletinID;
    bool  _read;
    NSDate * _recencyDate;
    NSString * _recordID;
    NSString * _sectionID;
    long long  _sectionSubtype;
    NSString * _subtitle;
    NSString * _timeZone;
    NSString * _title;
}

@property (getter=isAllDay, nonatomic, readonly) bool allDay;
@property (nonatomic, readonly) BBBulletin *bbBulletin;
@property (nonatomic, readonly, copy) NSString *bulletinID;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *intentIDs;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *modalAlertContentMessage;
@property (nonatomic, readonly, copy) NSString *publisherBulletinID;
@property (getter=isRead, nonatomic) bool read;
@property (nonatomic, readonly, copy) NSDate *recencyDate;
@property (nonatomic, readonly, copy) NSString *recordID;
@property (nonatomic, readonly, copy) NSString *sectionID;
@property (nonatomic, readonly) long long sectionSubtype;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *timeZone;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bbBulletin;
- (id)bulletinID;
- (id)date;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)intentIDs;
- (bool)isAllDay;
- (bool)isRead;
- (id)message;
- (id)modalAlertContentMessage;
- (id)publisherBulletinID;
- (id)recencyDate;
- (id)recordID;
- (id)sectionID;
- (long long)sectionSubtype;
- (void)setBulletin:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setRead:(bool)arg1;
- (id)subtitle;
- (id)timeZone;
- (id)title;

@end
