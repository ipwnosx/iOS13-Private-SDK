//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUIStarBarViewElement : SKUIViewElement
{
    long long _numberOfRatings;
    long long _numberOfStars;
    float _value;
}

@property(readonly, nonatomic) float value; // @synthesize value=_value;
@property(readonly, nonatomic) long long numberOfStars; // @synthesize numberOfStars=_numberOfStars;
@property(readonly, nonatomic) long long numberOfRatings; // @synthesize numberOfRatings=_numberOfRatings;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

