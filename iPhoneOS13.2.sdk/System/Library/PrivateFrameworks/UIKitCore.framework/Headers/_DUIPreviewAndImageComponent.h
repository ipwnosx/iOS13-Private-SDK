//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _DUIImageComponent, _DUIPreview;

@interface _DUIPreviewAndImageComponent : NSObject <NSSecureCoding>
{
    _DUIPreview *_preview;
    _DUIImageComponent *_imageComponent;
    NSUInteger _index;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger index; // @synthesize index=_index;
@property(retain, nonatomic) _DUIImageComponent *imageComponent; // @synthesize imageComponent=_imageComponent;
@property(retain, nonatomic) _DUIPreview *preview; // @synthesize preview=_preview;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

