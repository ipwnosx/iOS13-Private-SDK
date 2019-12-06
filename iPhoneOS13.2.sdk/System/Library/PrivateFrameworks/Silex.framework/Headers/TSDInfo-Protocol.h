//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/TSDInfoUsingObjectPlaceholderGeometry-Protocol.h>
#import <Silex/TSKModel-Protocol.h>
#import <Silex/TSPCopying-Protocol.h>

@class NSObject, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@protocol TSDInfo <NSObject, TSKModel, TSPCopying, TSDInfoUsingObjectPlaceholderGeometry>
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (BOOL)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(NSObject<TSDContainerInfo> *)arg1;
@end

