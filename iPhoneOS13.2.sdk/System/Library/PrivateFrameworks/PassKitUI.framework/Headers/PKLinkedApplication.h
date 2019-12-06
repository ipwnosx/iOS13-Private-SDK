//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/SKStoreProductViewControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSNumber, NSString, NSURL, SKStoreProductViewController, SSSoftwareLibraryItem, UIImage;

@interface PKLinkedApplication : NSObject <SKStoreProductViewControllerDelegate>
{
    SSSoftwareLibraryItem *_foundLibraryItem;
    NSDictionary *_foundStoreItem;
    NSUInteger _loadingToken;
    BOOL _loaded;
    BOOL _loading;
    NSHashTable *_observers;
    SKStoreProductViewController *_presentedViewController;
    BOOL _useSmallIcon;
    NSArray *_storeIDs;
    NSURL *_defaultLaunchURL;
    UIImage *_iconImage;
}

+ (id)_openOptionsWithURL:(id)arg1;
@property(readonly, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) BOOL useSmallIcon; // @synthesize useSmallIcon=_useSmallIcon;
@property(copy, nonatomic) NSURL *defaultLaunchURL; // @synthesize defaultLaunchURL=_defaultLaunchURL;
@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
// - (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
@property(readonly, nonatomic) NSString *price;
@property(readonly, nonatomic) NSNumber *averageRating;
@property(readonly, nonatomic) NSString *publisher;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) CGSize expectedIconSize;
- (BOOL)_useLibraryItem;
@property(readonly, nonatomic, getter=isInstalled) BOOL installed;
@property(readonly, nonatomic) long long state;
- (void)installedApplicationsDidChangeNotification:(id)arg1;
- (void)_notifyObserversOfStateChange;
- (int)_iconOptionsForItem:(id)arg1;
- (int)_iconVariantForScale:(double)arg1;
- (id)_imageForSize:(CGSize)arg1 fromArtwork:(id)arg2 requireStrictMatch:(BOOL)arg3;
- (BOOL)_itemArtNeedsShine:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(CGSize)arg2 requireStrictMatch:(BOOL)arg3;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(CGSize)arg2;
- (void)_performStoreLookupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateApplicationStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_unloadApplicationState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)openApplication:(id)arg1;
- (void)reloadApplicationStateIfNecessary;
- (void)reloadApplicationState;
- (void)dealloc;
- (id)initWithStoreIDs:(id)arg1 defaultLaunchURL:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)init;

@end

