//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface _HKInteractiveChartDistributionStyleKey : NSObject <NSCopying>
{
    long long _style;
    long long _timeScope;
    NSString *_predicateName;
}

@property(retain, nonatomic) NSString *predicateName; // @synthesize predicateName=_predicateName;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(nonatomic) long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDistributionStyle:(long long)arg1 timeScope:(long long)arg2 predicateName:(id)arg3;

@end
