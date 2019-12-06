//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

@interface PCSCKKS : NSObject
{
//    struct _PCSIdentitySetData _set;
    NSOperationQueue *_queue;
    NSString *_dsid;
}

@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
// property struct _PCSIdentitySetData set; // @synthesize set=_set;
// - (void).cxx_destruct;
- (id)stripOperationErrorIfPCSError:(id)arg1;
- (void)createIdentity:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)createNewIdentity:(id)arg1 roll:(BOOL)arg2 sync:(BOOL)arg3 complete:(CDUnknownBlockType)arg4;
- (BOOL)shouldRetryWithSync:(id)arg1;
- (void)submitRequest:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)createIdentityOperation:(id)arg1;
- (id)ensurePCSFieldsOperation:(id)arg1;
- (id)fetchCurrentOperation:(id)arg1;
- (id)syncViewOperation:(id)arg1;
- (void)dealloc;
//  (id)initWithIdentitySet:(struct _PCSIdentitySetData )arg1 dsid:(id)arg2;

@end

