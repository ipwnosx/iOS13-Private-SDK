//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/_MFOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredNewMailboxOperation : _MFOfflineCacheOperation
{
    NSString *_displayName;
    NSString *_parentFolderID;
    NSString *_temporaryFolderID;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)translateToLocalActionWithConnection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

