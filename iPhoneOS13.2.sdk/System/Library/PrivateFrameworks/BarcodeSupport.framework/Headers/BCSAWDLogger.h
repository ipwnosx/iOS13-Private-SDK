//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BCSAWDLogger : NSObject
{
}

+ (id)sharedLogger;
- (int)_awdBarcodePreferredAppLinkOpenStrategyFromURLAction:(id)arg1;
- (int)_awdBarcodeURLTypeFromURLAction:(id)arg1;
- (int)_awdInvalidBarcodeDataTypeFromInvalidData:(id)arg1;
- (int)_awdBarcodeSourceTypeForAction:(id)arg1;
- (int)_awdBarcodeClientType;
- (int)_awdBarcodeDataTypeFromAction:(id)arg1;
- (void)logBarcodePreviewedEventForContentType:(long long)arg1;
- (void)logBarcodeActivatedEventForAction:(id)arg1;
- (void)logBarcodeDetectedEventForAction:(id)arg1 startTime:(NSUInteger)arg2;
- (void)logBarcodeDetectedEvent:(id)arg1 startTime:(NSUInteger)arg2;
- (id)barcodeDetectedEventForAction:(id)arg1;

@end

