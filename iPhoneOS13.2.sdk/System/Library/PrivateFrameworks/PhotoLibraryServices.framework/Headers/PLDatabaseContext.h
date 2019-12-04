//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLLazyObject, PLPhotoLibraryBundle;

@interface PLDatabaseContext : NSObject
{
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyHighPriorityTransientLibrary;
    PLLazyObject *_lazyLowPriorityTransientLibrary;
    PLLazyObject *_lazyCplLibrary;
    PLLazyObject *_lazyMomentLibrary;
    PLLazyObject *_lazyNonTransientLibrary;
}

- (id)nonTransientLibrary;
- (id)newNonTransientLibrary;
- (id)momentLibrary;
- (id)newMomentLibrary;
- (id)cplLibrary;
- (id)newCplLibrary;
- (void)performTransactionSync:(id /* block */)arg1;
- (void)performSync:(id /* block */)arg1;
- (void)performTransaction:(id /* block */)arg1;
- (void)perform:(id /* block */)arg1;
- (id)transientLibraryWithCurrentQoS;
- (id)lowPriorityTransientLibrary;
- (id)newLowPriorityTransientLibrary;
- (id)highPriorityTransientLibrary;
- (id)newHighPriorityTransientLibrary;
- (id)initWithLibraryBundle:(id)arg1;

@end
