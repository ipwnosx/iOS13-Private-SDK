//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IAMModalBackground : NSObject
{
    NSArray *_colors;
    NSArray *_locations;
}

+ (id)background3;
+ (id)background2;
+ (id)background1;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
// - (void).cxx_destruct;
- (id)initWithStartingColor:(id)arg1 endingColor:(id)arg2;
- (id)initWithColors:(id)arg1 atLocations:(id)arg2;

@end

