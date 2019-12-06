//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCSQRCodeParser, NSDictionary;

@interface BCSAVParsingSession : NSObject
{
    BCSQRCodeParser *_parser;
    NSDictionary *_lastScannedCodeBasicDescriptor;
    double _lastScannedTime;
}

// - (void).cxx_destruct;
- (void)updateSessionWithMetadataObjects:(id)arg1;
- (id)_bestObjectForParsing:(id)arg1;
- (double)_temporalStickyFactorForObject:(id)arg1;
- (void)updateSessionWithMetadataObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSessionWithMetadataObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_isLikelyLastScannedObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

