//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKImageCompare : NSObject
{
}

+ (id)stringFromSize:(struct CGSize)arg1;
+ (_Bool)saveImage:(struct CGImage *)arg1 toPath:(id)arg2;
+ (CDStruct_c5e6d23b)compareImage:(struct CGImage *)arg1 toMasterImage:(struct CGImage *)arg2 filename:(id)arg3 differenceImageOutputPath:(id)arg4 diffWhite:(_Bool)arg5 stdDevThreshhold:(double)arg6;
+ (id)filterImage:(struct CGImage *)arg1;

@end
