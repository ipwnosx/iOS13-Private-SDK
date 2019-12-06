//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AnnotationKit/AKInkIsUpdatable-Protocol.h>
#import <AnnotationKit/AKLineWidthChooserUserInterfaceItem-Protocol.h>
#import <AnnotationKit/AKUserInterfaceItem-Protocol.h>

@class UIImageView;

@interface AKUserInterfaceItemTableViewCell : UITableViewCell <AKUserInterfaceItem, AKLineWidthChooserUserInterfaceItem, AKInkIsUpdatable>
{
    UIImageView *_imageView;
    double _lineWidth;
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (BOOL)wantsInkUpdate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

