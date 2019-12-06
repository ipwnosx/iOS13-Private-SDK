//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppNavigationController-Protocol.h>

@class NSArray, NSMutableArray, SKUIClientContext, UINavigationController;
@protocol SKUINavigationDocumentDelegate;

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController>
{
    NSMutableArray *_pendingNavigationStackEnsureConsistencyRequests;
    NSMutableArray *_stackItems;
    UINavigationController *_navigationController;
    SKUIClientContext *_clientContext;
    id <SKUINavigationDocumentDelegate> _delegate;
    UINavigationController *_overrideNavigationController;
    UINavigationController *_moreNavigationController;
}

@property(retain, nonatomic) UINavigationController *moreNavigationController; // @synthesize moreNavigationController=_moreNavigationController;
@property(retain, nonatomic) UINavigationController *overrideNavigationController; // @synthesize overrideNavigationController=_overrideNavigationController;
@property(nonatomic) __weak id <SKUINavigationDocumentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, copy, nonatomic) NSArray *documentStackItems; // @synthesize documentStackItems=_stackItems;
// - (void).cxx_destruct;
- (void)_unloadAllStackItems;
- (void)_scheduleFlushingPendingNavigationStackEnsureConsistencyRequestsWithTransitionCoordinator:(id)arg1;
- (void)_handleStackDidChange;
- (void)_ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(BOOL)arg2;
- (void)_applyDocumentReplacementForOldStackItem:(id)arg1 atOldIndex:(long long)arg2 withStackItem:(id)arg3;
- (id)_activeNavigationController;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)removeDocument:(id)arg1;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)popDocument;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (id)documents;
- (void)clear;
- (void)setStackItems:(id)arg1 animated:(BOOL)arg2;
- (void)popAllDocuments;
- (void)ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(BOOL)arg2;
- (id)initWithNavigationController:(id)arg1;

@end

