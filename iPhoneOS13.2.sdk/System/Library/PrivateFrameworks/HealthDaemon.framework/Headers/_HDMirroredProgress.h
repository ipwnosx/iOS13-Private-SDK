//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface _HDMirroredProgress : NSProgress
{
    NSProgress *_originalProgress;
}

+ (id)_KVOKeyPaths;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_update;
- (void)_unregisterForKVO;
- (void)_registerForKVO;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)arg1;

@end

