/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDAccountDelegate> * _delegate;
    NSString * _destination;
    NSMutableSet * _devices;
    NSUUID * _identifier;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (getter=isCurrentAccount, nonatomic, readonly) bool currentAccount;
@property (readonly, copy) NSString *debugDescription;
@property <HMDAccountDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *destination;
@property (nonatomic, readonly) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;

+ (id)accountDestinationForDestination:(id)arg1;
+ (id)accountWithDestination:(id)arg1;
+ (id)destinationForAccount:(id)arg1;
+ (id)iCloudAccountDestination;
+ (id)identifierFromAccount:(id)arg1 error:(id*)arg2;
+ (id)identifierFromAddressDestination:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (bool)isValidAccountDestination:(id)arg1;
+ (id)logCategory;
+ (id)namespace;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDevice:(id)arg1;
- (id)clientQueue;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)destination;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIDSService:(id)arg1;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 devices:(id)arg3;
- (bool)isCurrentAccount;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (bool)mergeObject:(id)arg1;
- (void)notifyDelegateAddedDevice:(id)arg1;
- (void)notifyDelegateOfUpdatedDevice:(id)arg1;
- (void)notifyDelegateRemovedDevice:(id)arg1;
- (id)propertyQueue;
- (void)removeDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)shortDescription;

@end
