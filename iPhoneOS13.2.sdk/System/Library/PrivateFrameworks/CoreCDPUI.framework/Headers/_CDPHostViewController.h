//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <CoreCDPUI/CDPHostInterface-Protocol.h>

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface>
{
    id /* CDUnknownBlockType */ _viewServiceTerminationBlock;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(copy, nonatomic) id /* CDUnknownBlockType */ viewServiceTerminationBlock; // @synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock;
// - (void).cxx_destruct;
- (double)_keyboardHeightOffset;
- (void)hostKeyboardOffset:(CDUnknownBlockType)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

