//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSData (InternalUtils)
+ (id)fromUUID:(id)arg1;
+ (id)dataWithRandomBytesOfSize:(NSUInteger)arg1;
- (BOOL)matchesDataAtFilePath:(id)arg1;
@property(readonly, nonatomic) NSData *NRSHA256;
- (void)NRSHA256:(unsigned char [32])arg1;
- (id)toUUID;
@end

