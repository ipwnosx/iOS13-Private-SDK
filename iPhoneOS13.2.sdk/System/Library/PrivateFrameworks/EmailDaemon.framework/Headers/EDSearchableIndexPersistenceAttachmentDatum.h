//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EDSearchableIndexPersistenceAttachmentDatum : NSObject
{
    NSString *_attachmentPersistentID;
    NSString *_messagePersistentID;
    NSString *_attachmentID;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(copy, nonatomic) NSString *messagePersistentID; // @synthesize messagePersistentID=_messagePersistentID;
@property(copy, nonatomic) NSString *attachmentPersistentID; // @synthesize attachmentPersistentID=_attachmentPersistentID;
// - (void).cxx_destruct;

@end

