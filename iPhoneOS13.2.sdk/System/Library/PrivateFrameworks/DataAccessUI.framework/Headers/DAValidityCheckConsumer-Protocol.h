//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DAAccount, NSError;

@protocol DAValidityCheckConsumer <NSObject>
- (void)account:(DAAccount *)arg1 isValid:(BOOL)arg2 validationError:(NSError *)arg3;
@end

