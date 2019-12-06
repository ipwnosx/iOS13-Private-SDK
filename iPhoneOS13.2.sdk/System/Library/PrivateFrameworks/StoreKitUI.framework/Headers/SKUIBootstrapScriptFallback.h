//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppScriptFallbackHandler-Protocol.h>

@class NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUIBootstrapScriptFallback : NSObject <IKAppScriptFallbackHandler>
{
    NSURL *_cacheFolder;
    NSString *_cacheFilename;
    double _maximumAge;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)cacheFilenameForStoreFrontIdentifier:(id)arg1;
+ (id)defaultCacheFolder;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property double maximumAge; // @synthesize maximumAge=_maximumAge;
@property(readonly, copy, nonatomic) NSString *cacheFilename; // @synthesize cacheFilename=_cacheFilename;
@property(readonly, nonatomic) NSURL *cacheFolder; // @synthesize cacheFolder=_cacheFolder;
// - (void).cxx_destruct;
- (BOOL)_setCacheAge:(id)arg1 error:(id )arg2;
- (void)_runWhenBackgroundWorkFinished:(CDUnknownBlockType)arg1;
- (void)_logError:(id)arg1 forOperation:(id)arg2;
@property(readonly, nonatomic) long long _unsynchronizedState;
- (void)_createCacheDirectoriesIfNeeded;
- (void)invalidate;
- (void)scriptEvaluated:(id)arg1;
- (id)retrieveScript:(id )arg1;
- (BOOL)canFallbackForError:(id)arg1;
@property(readonly) BOOL isBagAvailable;
@property(readonly, copy, nonatomic) NSURL *cachedFileLocation;
@property(readonly) long long state;
- (id)init;
- (id)initWithFilename:(id)arg1;
- (id)initWithCacheFolder:(id)arg1 filename:(id)arg2;

@end

