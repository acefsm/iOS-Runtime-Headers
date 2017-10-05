/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocol : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NEDNSSettings * _DNSSettings;
    bool  _disconnectOnIdle;
    int  _disconnectOnIdleTimeout;
    bool  _disconnectOnLogout;
    bool  _disconnectOnSleep;
    bool  _disconnectOnUserSwitch;
    bool  _disconnectOnWake;
    int  _disconnectOnWakeTimeout;
    NSUUID * _identifier;
    NEIdentityKeychainItem * _identity;
    NSData * _identityDataHash;
    bool  _identityDataImported;
    NSData * _identityDataInternal;
    NSString * _identityDataPassword;
    NEKeychainItem * _identityDataPasswordKeychainItem;
    NSString * _keychainAccessGroup;
    long long  _keychainDomain;
    NSString * _passwordEncryption;
    NEKeychainItem * _passwordKeychainItem;
    NSData * _passwordReference;
    NEProxySettings * _proxySettings;
    NSString * _serverAddress;
    long long  _type;
    NSString * _username;
}

@property (copy) NEDNSSettings *DNSSettings;
@property bool disconnectOnIdle;
@property int disconnectOnIdleTimeout;
@property bool disconnectOnLogout;
@property bool disconnectOnSleep;
@property bool disconnectOnUserSwitch;
@property bool disconnectOnWake;
@property int disconnectOnWakeTimeout;
@property (copy) NSUUID *identifier;
@property (retain) NEIdentityKeychainItem *identity;
@property (copy) NSData *identityData;
@property (copy) NSData *identityDataHash;
@property bool identityDataImported;
@property (copy) NSData *identityDataInternal;
@property (copy) NSString *identityDataPassword;
@property (copy) NEKeychainItem *identityDataPasswordKeychainItem;
@property (copy) NSData *identityReference;
@property (copy) NSData *identityReferenceInternal;
@property (retain) NSString *keychainAccessGroup;
@property long long keychainDomain;
@property (copy) NSString *passwordEncryption;
@property (copy) NEKeychainItem *passwordKeychainItem;
@property (copy) NSData *passwordReference;
@property (copy) NEProxySettings *proxySettings;
@property (copy) NSString *serverAddress;
@property (readonly) long long type;
@property (copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSSettings;
- (void)addDisconnectOptions:(id)arg1;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (void)copyPasswordsFromKeychainInDomain:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __SCNetworkInterface { }*)createInterface;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)disconnectOnIdle;
- (int)disconnectOnIdleTimeout;
- (bool)disconnectOnLogout;
- (bool)disconnectOnSleep;
- (bool)disconnectOnUserSwitch;
- (bool)disconnectOnWake;
- (int)disconnectOnWakeTimeout;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)identity;
- (id)identityData;
- (id)identityDataHash;
- (bool)identityDataImported;
- (id)identityDataInternal;
- (id)identityDataPassword;
- (id)identityDataPasswordKeychainItem;
- (id)identityReference;
- (id)identityReferenceInternal;
- (void)initDisconnectOptions:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocolIdentifier:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)keychainAccessGroup;
- (long long)keychainDomain;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { }*)arg1;
- (bool)needToUpdateKeychain;
- (id)passwordEncryption;
- (id)passwordKeychainItem;
- (id)passwordReference;
- (id)proxySettings;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(bool)arg2;
- (id)serverAddress;
- (void)setDNSSettings:(id)arg1;
- (void)setDisconnectOnIdle:(bool)arg1;
- (void)setDisconnectOnIdleTimeout:(int)arg1;
- (void)setDisconnectOnLogout:(bool)arg1;
- (void)setDisconnectOnSleep:(bool)arg1;
- (void)setDisconnectOnUserSwitch:(bool)arg1;
- (void)setDisconnectOnWake:(bool)arg1;
- (void)setDisconnectOnWakeTimeout:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setIdentityData:(id)arg1;
- (void)setIdentityDataHash:(id)arg1;
- (void)setIdentityDataImported:(bool)arg1;
- (void)setIdentityDataInternal:(id)arg1;
- (void)setIdentityDataPassword:(id)arg1;
- (void)setIdentityDataPasswordKeychainItem:(id)arg1;
- (void)setIdentityReference:(id)arg1;
- (void)setIdentityReferenceInternal:(id)arg1;
- (void)setKeychainAccessGroup:(id)arg1;
- (void)setKeychainDomain:(long long)arg1;
- (void)setPasswordEncryption:(id)arg1;
- (void)setPasswordKeychainItem:(id)arg1;
- (void)setPasswordReference:(id)arg1;
- (void)setProxySettings:(id)arg1;
- (void)setServerAddress:(id)arg1;
- (bool)setServiceProtocolsInService:(struct __SCNetworkService { }*)arg1;
- (void)setUsername:(id)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (void)syncWithKeychainInDomainCommon:(long long)arg1;
- (long long)type;
- (id)type2str;
- (bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService { }*)arg1;
- (id)username;

@end
