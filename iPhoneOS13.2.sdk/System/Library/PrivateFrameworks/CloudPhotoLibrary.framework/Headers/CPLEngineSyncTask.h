//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLEngineLibrary, CPLSyncSession, NSString;
@protocol CPLEngineSyncTaskDelegate, NSCoding;

@interface CPLEngineSyncTask : NSObject
{
    BOOL _foreground;
    BOOL _forceSync;
    BOOL _cancelled;
    id <CPLEngineSyncTaskDelegate> _delegate;
    CPLEngineLibrary *_engineLibrary;
    CPLSyncSession *_session;
    id <NSCoding> _transportUserIdentifier;
    NSString *_phaseDescription;
}

+ (id)taskWithEngineLibrary:(id)arg1 session:(id)arg2;
@property(readonly) NSString *phaseDescription; // @synthesize phaseDescription=_phaseDescription;
@property(getter=isCancelled, setter=_setCancelled:) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) BOOL forceSync; // @synthesize forceSync=_forceSync;
@property(nonatomic) BOOL foreground; // @synthesize foreground=_foreground;
@property(retain, nonatomic) id <NSCoding> transportUserIdentifier; // @synthesize transportUserIdentifier=_transportUserIdentifier;
@property(readonly, nonatomic) CPLSyncSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(retain) id <CPLEngineSyncTaskDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)description;
- (void)taskDidProgress:(float)arg1 userInfo:(id)arg2;
- (void)taskDidFinishWithError:(id)arg1;
- (void)cancel;
- (void)launch;
@property(readonly, nonatomic) NSString *taskIdentifier;
- (NSUInteger)diskPressureState;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;

@end

