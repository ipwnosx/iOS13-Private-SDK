//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol DNDSBackingStoreDelegate, DNDSBackingStoreRecord;

@protocol DNDSBackingStore <NSObject>
@property(nonatomic) __weak id <DNDSBackingStoreDelegate> delegate;
- (NSUInteger)writeRecord:(id <DNDSBackingStoreRecord>)arg1 error:(id )arg2;
- (id)readRecordWithError:(id )arg1;
@end

