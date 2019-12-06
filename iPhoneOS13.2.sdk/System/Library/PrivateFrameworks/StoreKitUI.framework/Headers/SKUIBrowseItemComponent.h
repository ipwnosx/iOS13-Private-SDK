//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUIBrowseItemComponent : SKUIPageComponent
{
    NSString *_title;
    NSString *_subtitle;
    long long _index;
    SKUIImageViewElement *_decorationImage;
    BOOL _showTopBorder;
}

@property(readonly, nonatomic) SKUIImageViewElement *decorationImage; // @synthesize decorationImage=_decorationImage;
@property(nonatomic) BOOL showTopBorder; // @synthesize showTopBorder=_showTopBorder;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;

@end

