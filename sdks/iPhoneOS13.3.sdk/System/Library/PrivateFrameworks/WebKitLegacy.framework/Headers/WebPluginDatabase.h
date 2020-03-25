//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject
{
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (void)setAdditionalWebPlugInPaths:(id)arg1;
+ (void)closeSharedDatabase;
+ (id)sharedDatabaseIfExists;
+ (id)sharedDatabase;
+ (id)_defaultPlugInPaths;
- (void)destroyAllPluginInstanceViews;
- (void)removePluginInstanceViewsFor:(id)arg1;
- (void)removePluginInstanceView:(id)arg1;
- (void)addPluginInstanceView:(id)arg1;
- (BOOL)isMIMETypeRegistered:(id)arg1;
- (void)refresh;
- (void)dealloc;
- (id)init;
- (void)close;
- (void)setPlugInPaths:(id)arg1;
- (id)plugins;
- (id)pluginForExtension:(id)arg1;
- (id)pluginForMIMEType:(id)arg1;
- (id)_scanForNewPlugins;
- (void)_removePlugin:(id)arg1;
- (void)_addPlugin:(id)arg1;
- (id)_plugInPaths;

@end
