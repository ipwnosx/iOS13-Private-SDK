//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebCoreStatistics : NSObject
{
}

+ (id)javaScriptRootObjectTypeCounts;
+ (NSUInteger)javaScriptInterpretersCount;
+ (id)javaScriptRootObjectClasses;
+ (NSUInteger)javaScriptReferencedObjectsCount;
+ (NSUInteger)javaScriptNoGCAllowedObjectsCount;
+ (int)autoreleasedPageCount;
+ (int)cachedFrameCount;
+ (int)cachedPageCount;
+ (void)returnFreeMemoryToSystem;
+ (id)memoryStatistics;
+ (void)stopIgnoringWebCoreNodeLeaks;
+ (void)startIgnoringWebCoreNodeLeaks;
+ (void)setCacheDisabled:(BOOL)arg1;
+ (void)emptyCache;
+ (void)setShouldPrintExceptions:(BOOL)arg1;
+ (BOOL)shouldPrintExceptions;
+ (NSUInteger)glyphPageCount;
+ (void)purgeInactiveFontData;
+ (NSUInteger)cachedFontDataInactiveCount;
+ (NSUInteger)cachedFontDataCount;
+ (NSUInteger)iconsWithDataCount;
+ (NSUInteger)iconRecordCount;
+ (NSUInteger)iconRetainedPageURLCount;
+ (NSUInteger)iconPageURLMappingCount;
+ (void)setJavaScriptGarbageCollectorTimerEnabled:(BOOL)arg1;
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)arg1;
+ (void)garbageCollectJavaScriptObjects;
+ (id)javaScriptObjectTypeCounts;
+ (id)javaScriptProtectedObjectTypeCounts;
+ (NSUInteger)javaScriptProtectedGlobalObjectsCount;
+ (NSUInteger)javaScriptProtectedObjectsCount;
+ (NSUInteger)javaScriptGlobalObjectsCount;
+ (NSUInteger)javaScriptObjectsCount;
+ (id)statistics;

@end
