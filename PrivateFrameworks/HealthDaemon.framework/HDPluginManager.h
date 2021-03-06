/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPluginManager : NSObject {
    HDDaemon * _daemon;
    NSArray * _plugins;
    NSDictionary * _pluginsByIdentifier;
}

@property (nonatomic) HDDaemon *daemon;
@property (nonatomic, retain) NSArray *plugins;
@property (nonatomic, retain) NSDictionary *pluginsByIdentifier;

- (void).cxx_destruct;
- (id)_internalPluginsPath;
- (Class)_loadPrincipalClassConformingToProtocol:(id)arg1 fromBundleAtPath:(id)arg2;
- (id)_loadPrincipalClassesConformingToProtocol:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id*)arg3;
- (id)_pluginClasses;
- (id)_pluginsPath;
- (id)daemon;
- (id)initWithDaemon:(id)arg1;
- (void)loadPlugins;
- (id)pluginForIdentifier:(id)arg1;
- (id)plugins;
- (id)pluginsByIdentifier;
- (id)pluginsForProtocol:(id)arg1;
- (id)queryServerForUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(id)arg5 profile:(id)arg6 queryDelegate:(id)arg7;
- (void)setDaemon:(id)arg1;
- (void)setPlugins:(id)arg1;
- (void)setPluginsByIdentifier:(id)arg1;

@end
