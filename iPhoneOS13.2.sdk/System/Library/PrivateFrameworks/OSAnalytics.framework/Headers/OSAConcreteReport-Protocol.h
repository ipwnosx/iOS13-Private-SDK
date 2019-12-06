//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSString;

@protocol OSAConcreteReport <NSObject>
- (void)generateLogAtLevel:(BOOL)arg1 withBlock:(void (^)(NSDictionary *))arg2;
- (NSString *)reportNamePrefix;
- (NSArray *)appleCareDetails;
- (NSString *)problemType;

@optional
- (NSDictionary *)additionalIPSMetadata;
- (BOOL)isActionable;
@end

