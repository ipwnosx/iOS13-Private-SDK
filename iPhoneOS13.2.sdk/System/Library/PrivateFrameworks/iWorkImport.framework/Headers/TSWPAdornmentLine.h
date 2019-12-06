//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol TSKCGColorProvider;

__attribute__((visibility("hidden")))
@interface TSWPAdornmentLine : NSObject <NSCopying>
{
    BOOL _isWhitespace;
    BOOL _allowAntialiasing;
    int _underline;
    int _adornmentLocation;
    CGColorRef _color;
    double _length;
    double _thickness;
    NSUInteger _lineCount;
    double _underlineAdjustment;
    id <TSKCGColorProvider> _colorProvider;
    CGPoint _start;
}

@property(readonly, nonatomic) id <TSKCGColorProvider> colorProvider; // @synthesize colorProvider=_colorProvider;
@property(readonly, nonatomic) BOOL allowAntialiasing; // @synthesize allowAntialiasing=_allowAntialiasing;
@property(readonly, nonatomic) BOOL isWhitespace; // @synthesize isWhitespace=_isWhitespace;
@property(readonly, nonatomic) double underlineAdjustment; // @synthesize underlineAdjustment=_underlineAdjustment;
@property(readonly, nonatomic) int adornmentLocation; // @synthesize adornmentLocation=_adornmentLocation;
@property(readonly, nonatomic) int underline; // @synthesize underline=_underline;
@property(readonly, nonatomic) NSUInteger lineCount; // @synthesize lineCount=_lineCount;
@property(readonly, nonatomic) double thickness; // @synthesize thickness=_thickness;
@property(readonly, nonatomic) double length; // @synthesize length=_length;
@property(readonly, nonatomic) CGPoint start; // @synthesize start=_start;
// - (void).cxx_destruct;
- (BOOL)merge:(id)arg1;
@property(readonly, nonatomic) CGColorRef color; // @synthesize color=_color;
- (id)copyWithColor:(CGColorRef)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithStart:(CGPoint)arg1 length:(double)arg2 color:(CGColorRef)arg3 thickness:(double)arg4 lineCount:(NSUInteger)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8;
- (id)initWithStart:(CGPoint)arg1 length:(double)arg2 color:(CGColorRef)arg3 thickness:(double)arg4 lineCount:(NSUInteger)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8 isWhitespace:(BOOL)arg9 colorProvider:(id)arg10 allowAntialiasing:(BOOL)arg11;

@end

