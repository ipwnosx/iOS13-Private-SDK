//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIProgressIndicatorViewElement;

__attribute__((visibility("hidden")))
@interface SKUICarouselViewElement : SKUIViewElement
{
    double _displayInterval;
}

@property(readonly, nonatomic) double displayInterval; // @synthesize displayInterval=_displayInterval;
@property(readonly, nonatomic) SKUIProgressIndicatorViewElement *progressIndicatorElement;
- (long long)pageComponentType;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

