//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>

@interface SSImageSurface : NSObject <BSXPCCoding>
{
//     struct __IOSurface _backingSurface;
    double _scale;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
// @property(nonatomic) struct __IOSurface backingSurface; // @synthesize backingSurface=_backingSurface;
- (void)dealloc;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;

@end

