//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CCUICAPackageDescription : NSObject
{
    BOOL _flipsForRightToLeftLayoutDirection;
    NSURL *_packageURL;
}

+ (id)descriptionForPackageNamed:(id)arg1 inBundle:(id)arg2;
@property(readonly, copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
@property(nonatomic) BOOL flipsForRightToLeftLayoutDirection; // @synthesize flipsForRightToLeftLayoutDirection=_flipsForRightToLeftLayoutDirection;
// - (void).cxx_destruct;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;

@end

