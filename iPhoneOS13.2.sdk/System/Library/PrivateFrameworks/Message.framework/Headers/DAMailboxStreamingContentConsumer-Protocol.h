//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DAMailMessage;

@protocol DAMailboxStreamingContentConsumer
- (void)didEndStreamingForMailMessage:(DAMailMessage *)arg1;
- (void)consumeData:(char )arg1 length:(int)arg2 format:(int)arg3 mailMessage:(DAMailMessage *)arg4;
- (BOOL)shouldBeginStreamingForMailMessage:(DAMailMessage *)arg1 format:(int)arg2;
@end

