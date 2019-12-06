//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PLImageDataInfo : NSObject
{
    BOOL _deliveredPlaceholder;
    BOOL _canDownloadFromCloud;
    long long _deliveredFormat;
    NSURL *_URL;
    NSString *_sandboxExtensionToken;
    NSString *_UTI;
    long long _EXIFOrientation;
}

@property long long EXIFOrientation; // @synthesize EXIFOrientation=_EXIFOrientation;
@property(retain) NSString *UTI; // @synthesize UTI=_UTI;
@property(retain) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property BOOL canDownloadFromCloud; // @synthesize canDownloadFromCloud=_canDownloadFromCloud;
@property BOOL deliveredPlaceholder; // @synthesize deliveredPlaceholder=_deliveredPlaceholder;
@property long long deliveredFormat; // @synthesize deliveredFormat=_deliveredFormat;
// - (void).cxx_destruct;
- (id)description;

@end

