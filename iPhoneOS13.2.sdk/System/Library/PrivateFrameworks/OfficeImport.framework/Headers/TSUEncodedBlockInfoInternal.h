//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUEncodedBlockInfo-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUEncodedBlockInfoInternal : NSObject <TSUEncodedBlockInfo>
{
    NSUInteger _encodedLength;
}

@property(readonly, nonatomic) NSUInteger encodedLength; // @synthesize encodedLength=_encodedLength;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSUInteger decodedLength;
- (id)initWithEncodedLength:(NSUInteger)arg1;

@end

