//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSStateDumpService : SBSAbstractSystemService
{
}

- (void)disableRemoteStateDumpWithCompletion:(id /* block */)arg1;
- (void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(id /* block */)arg2;
- (void)requestStateDump:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;

@end
