//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@protocol HFIconDescriptor;

@interface HFServiceIconItem : HFItem
{
    id <HFIconDescriptor> _iconDescriptor;
}

@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithIconDescriptor:(id)arg1;

@end

