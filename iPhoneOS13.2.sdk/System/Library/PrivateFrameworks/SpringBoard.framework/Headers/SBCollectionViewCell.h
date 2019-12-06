//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBCollectionViewCellDelegate;

@interface SBCollectionViewCell : UICollectionViewCell
{
    BOOL _performSetHighlighted;
    BOOL _protectDelayedUnhighlights;
    id <SBCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SBCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL protectDelayedUnhighlights; // @synthesize protectDelayedUnhighlights=_protectDelayedUnhighlights;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 afterDelay:(double)arg2;
- (void)_performSetHighlighted;
- (void)_didSetHighlighted:(BOOL)arg1;

@end

