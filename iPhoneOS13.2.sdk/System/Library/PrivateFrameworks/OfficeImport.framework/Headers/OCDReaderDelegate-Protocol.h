//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol OCDReaderDelegate <NSObject>
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(NSUInteger)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
@end

