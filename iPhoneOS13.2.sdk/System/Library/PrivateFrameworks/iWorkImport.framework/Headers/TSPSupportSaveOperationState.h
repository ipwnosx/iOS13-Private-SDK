//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSUUID, TSUSafeSaveAssistant;

__attribute__((visibility("hidden")))
@interface TSPSupportSaveOperationState : NSObject
{
    BOOL _didWriteSupportBundleSuccessfuly;
    BOOL _shouldLeavePendingEndSave;
    NSUUID *_originalDocumentUUID;
    NSUUID *_originalVersionUUID;
    NSURL *_originalURL;
    long long _updateType;
    TSUSafeSaveAssistant *_safeSaveAssistant;
    NSUUID *_documentUUID;
    NSURL *_URL;
}

@property(nonatomic) BOOL shouldLeavePendingEndSave; // @synthesize shouldLeavePendingEndSave=_shouldLeavePendingEndSave;
@property(nonatomic) BOOL didWriteSupportBundleSuccessfuly; // @synthesize didWriteSupportBundleSuccessfuly=_didWriteSupportBundleSuccessfuly;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSUUID *documentUUID; // @synthesize documentUUID=_documentUUID;
@property(retain, nonatomic) TSUSafeSaveAssistant *safeSaveAssistant; // @synthesize safeSaveAssistant=_safeSaveAssistant;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(copy, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(readonly, nonatomic) NSUUID *originalVersionUUID; // @synthesize originalVersionUUID=_originalVersionUUID;
@property(readonly, nonatomic) NSUUID *originalDocumentUUID; // @synthesize originalDocumentUUID=_originalDocumentUUID;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSameDocumentUpdate;
@property(readonly, nonatomic) BOOL isSavingCurrentDocument;
@property(readonly, nonatomic) BOOL shouldUpdate;
- (id)initWithOriginalDocumentUUID:(id)arg1 originalVersionUUID:(id)arg2 originalURL:(id)arg3 updateType:(long long)arg4;
- (id)init;

@end

