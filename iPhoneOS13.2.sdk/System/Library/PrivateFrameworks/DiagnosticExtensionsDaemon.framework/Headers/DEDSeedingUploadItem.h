//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem
{
    BOOL _completed;
    NSString *_extensionID;
    NSUInteger _bytesUploaded;
    NSURLSessionUploadTask *_uploadTask;
}

+ (id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3;
@property(retain) NSURLSessionUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property BOOL completed; // @synthesize completed=_completed;
@property NSUInteger bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property(retain) NSString *extensionID; // @synthesize extensionID=_extensionID;
// - (void).cxx_destruct;
- (id)description;
- (id)publicDescription;
- (id)promiseFilename;

@end

