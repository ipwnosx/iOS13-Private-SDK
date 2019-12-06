//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeyboardServices/_KSFileEntry.h>

#import <KeyboardServices/_KSBlobSaver-Protocol.h>

@class NSDate, NSURL;

@interface _KSFileFile : _KSFileEntry <NSSecureCoding, _KSBlobSaver>
{
    int _protectionClass;
    NSURL *_url;
    NSDate *_lastModified;
    NSUInteger _offset;
    NSUInteger _size;
}

+ (BOOL)supportsSecureCoding;
+ (int)protectionFromURL:(id)arg1;
// - (void).cxx_destruct;
- (void)restoreToPath:(id)arg1;
- (void)consistencyCheck;
- (id)description;
- (id)URL;
- (id)lastModified;
- (NSUInteger)size;
- (id)contents;
- (void)saveTo:(id)arg1;
- (void)saveAttributesToURL:(id)arg1;
- (void)loadAttributesFromURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

