//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUDisplay-Protocol.h>

@class CADisplay, NSString, NUColorSpace, NUPixelFormat;

@interface NUDisplay_iOS : NSObject <NUDisplay>
{
    CADisplay *_display;
}

+ (id)mainDisplay;
+ (id)displays;
@property(readonly, nonatomic) CADisplay *display; // @synthesize display=_display;
// - (void).cxx_destruct;
@property(readonly) NUColorSpace *colorSpace;
@property(readonly) NUPixelFormat *pixelFormat;
- (BOOL)wideColor;
// @property(readonly, nonatomic) CDStruct_912cb5d2 size;
@property(readonly, nonatomic) id identifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)initWithCADisplay:(id)arg1;
- (id)init;

@end

