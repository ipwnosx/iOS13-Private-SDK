//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUIPSDLayer : NSObject
{
    double _opacity;
    int _blendMode;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (void)dealloc;
- (id)init;

@end

