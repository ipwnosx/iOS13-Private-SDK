//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <CoreUtils/CUByteCodable-Protocol.h>

@interface NSString (CUByteCodable) <CUByteCodable>
+ (id)createWithBytesNoCopy:(void )arg1 length:(NSUInteger)arg2 error:(id )arg3;
- (id)encodedDataAndReturnError:(id )arg1;
- (const char )encodedBytesAndReturnLength:(NSUInteger )arg1 error:(id )arg2;
@end

