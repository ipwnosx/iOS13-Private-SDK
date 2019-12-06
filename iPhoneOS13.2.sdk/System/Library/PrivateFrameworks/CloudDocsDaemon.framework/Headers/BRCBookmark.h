//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCAppLibrary, BRCLocalItem, BRCRelativePath, BRCServerZone, NSData;

__attribute__((visibility("hidden")))
@interface BRCBookmark : NSObject
{
    BRCAccountSession *_session;
    BRCAppLibrary *_appLibrary;
    NSData *_bookmarkData;
    BRCLocalItem *_target;
    BRCServerZone *_targetServerZone;
    BRCRelativePath *_targetRelpath;
    BOOL _targetResolved;
    BOOL _dataResolved;
    BOOL _containsItemID;
}

+ (void)unlinkAliasAtPath:(id)arg1;
+ (id)createName;
// - (void).cxx_destruct;
- (id)writeUnderParent:(id)arg1 name:(id)arg2 error:(id )arg3;
- (BOOL)resolveWithError:(id )arg1;
- (BOOL)_resolveDataWithError:(id )arg1;
- (BOOL)_resolveTargetWithError:(id )arg1;
- (id)initWithTarget:(id)arg1 owningAppLibrary:(id)arg2 path:(id)arg3 session:(id)arg4;
- (id)initWithRelpath:(id)arg1;
- (int)_validateSignatureWithFd:(int)arg1;
- (void)_computeSignature:(unsigned char [32])arg1;
@property(readonly, nonatomic) BRCLocalItem *target;
@property(readonly, nonatomic) BRCServerZone *targetServerZone;
@property(readonly, nonatomic) BOOL containsItemID;

@end

