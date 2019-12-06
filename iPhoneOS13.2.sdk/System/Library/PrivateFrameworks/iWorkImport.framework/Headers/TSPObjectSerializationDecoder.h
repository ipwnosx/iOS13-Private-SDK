//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoder-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationDecoder : NSObject <TSPDecoder>
{
    NSObject<OS_dispatch_data> *_encodedData;
    NSUInteger _encodedDataLength;
    NSMutableDictionary *_directory;
}

// - (void).cxx_destruct;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForLocator:(id)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)init;

@end

