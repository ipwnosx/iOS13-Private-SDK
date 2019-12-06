//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSPDataStorage-Protocol.h>

@class NSData, NSString;

@interface TSPReadOnlyMemoryDataStorage : NSObject <TSPDataStorage>
{
    NSData *_NSData;
}

// - (void).cxx_destruct;
- (BOOL)isInPackage:(id)arg1;
@property(readonly, nonatomic) BOOL readOnly;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSUInteger encodedLength;
- (id)filenameForPreferredFilename:(id)arg1;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
- (id)NSDataWithOptions:(NSUInteger)arg1;
- (CGImageSource )newCGImageSource;
- (CGDataProvider )newCGDataProvider;
- (id)bookmarkDataWithOptions:(NSUInteger)arg1;
- (id)initWithNSData:(id)arg1;

@end

