//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/TSUEncodedBlockInfoInternal.h>

__attribute__((visibility("hidden")))
@interface TSUEncodedBlockInfoWithDecodedLengthInternal : TSUEncodedBlockInfoInternal
{
    NSUInteger _decodedLength;
}

- (NSUInteger)decodedLength;
- (id)initWithEncodedLength:(NSUInteger)arg1 decodedLength:(NSUInteger)arg2;

@end

