//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MFAttachmentDataProvider : NSObject
{
    NSURL *_url;
}

+ (id)dataProviderWithPath:(id)arg1;
+ (id)dataProviderWithURL:(id)arg1;
@property(retain) NSURL *url; // @synthesize url=_url;
- (id)data;
- (BOOL)save:(id)arg1;
- (id)_fileAttributes:(id)arg1;
- (BOOL)exists;
- (BOOL)_isFileURL;
- (id)_path;
- (id)errorWithMessage:(id)arg1 code:(long long)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

