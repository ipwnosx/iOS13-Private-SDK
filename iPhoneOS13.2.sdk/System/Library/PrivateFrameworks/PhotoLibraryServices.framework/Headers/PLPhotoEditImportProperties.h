//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoEditImportProperties : NSObject
{
    long long _baseEXIFOrientation;
    double _baseDuration;
}

+ (id)importPropertiesWithEXIFOrientation:(long long)arg1 duration:(double)arg2;
+ (id)importPropertiesWithEXIFOrientation:(long long)arg1;
@property(readonly, nonatomic) double baseDuration; // @synthesize baseDuration=_baseDuration;
@property(readonly, nonatomic) long long baseEXIFOrientation; // @synthesize baseEXIFOrientation=_baseEXIFOrientation;

@end

