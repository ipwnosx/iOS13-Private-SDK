//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/AAUIServerHook-Protocol.h>
#import <FamilyCircleUI/PSCloudStorageOffersManagerDelegate-Protocol.h>

@class PSCloudStorageOffersManager;
@protocol AAUIServerHookDelegate;

@interface FABuyStorageHook : NSObject <PSCloudStorageOffersManagerDelegate, AAUIServerHook>
{
    PSCloudStorageOffersManager *_storageOffersManager;
    id /* CDUnknownBlockType */ _completion;
    BOOL _loadingStorage;
    id <AAUIServerHookDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_completionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)_invokeBuyStorageWithServerAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)shouldMatchModel:(id)arg1;
- (BOOL)shouldMatchElement:(id)arg1;

@end

