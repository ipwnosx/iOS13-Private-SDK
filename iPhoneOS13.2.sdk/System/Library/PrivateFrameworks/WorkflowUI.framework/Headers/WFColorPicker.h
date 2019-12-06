//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSArray, UICollectionView, WFColor;
@protocol WFColorPickerDelegate;

@interface WFColorPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    WFColor *_selectedColor;
    id <WFColorPickerDelegate> _delegate;
    NSArray *_colors;
    NSArray *_colorNames;
    UICollectionView *_colorCollectionView;
}

@property(retain, nonatomic) UICollectionView *colorCollectionView; // @synthesize colorCollectionView=_colorCollectionView;
@property(retain, nonatomic) NSArray *colorNames; // @synthesize colorNames=_colorNames;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) __weak id <WFColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WFColor *selectedColor; // @synthesize selectedColor=_selectedColor;
// - (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)safeAreaInsetsDidChange;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

