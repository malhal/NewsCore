//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface FCBlobFileCache : NSObject
{
    _Bool _currentlyEnqueuedCacheSizeEnforcement;
    long long _countLimit;
    NSURL *_cacheDirectory;
    NSString *_identifier;
    long long _currentSize;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSObject<OS_dispatch_queue> *_touchQueue;
    NSObject<OS_dispatch_group> *_cacheSizeEnforcementThrottlingGroup;
    NSMutableOrderedSet *_keys;
    NSMutableDictionary *_keysToItems;
}

+ (void)clearCacheForIdentifier:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *keysToItems; // @synthesize keysToItems=_keysToItems;
@property(retain, nonatomic) NSMutableOrderedSet *keys; // @synthesize keys=_keys;
@property _Bool currentlyEnqueuedCacheSizeEnforcement; // @synthesize currentlyEnqueuedCacheSizeEnforcement=_currentlyEnqueuedCacheSizeEnforcement;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *cacheSizeEnforcementThrottlingGroup; // @synthesize cacheSizeEnforcementThrottlingGroup=_cacheSizeEnforcementThrottlingGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *touchQueue; // @synthesize touchQueue=_touchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue; // @synthesize storageQueue=_storageQueue;
@property(nonatomic) long long currentSize; // @synthesize currentSize=_currentSize;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSURL *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property long long countLimit; // @synthesize countLimit=_countLimit;
- (void).cxx_destruct;
- (_Bool)_removeFileWithKey:(id)arg1 error:(id *)arg2;
- (void)_removeItemInMemoryForKey:(id)arg1;
- (void)_insertItemInMemory:(id)arg1 forKey:(id)arg2;
- (void)_touchItemForKey:(id)arg1;
- (void)_clearCache;
- (void)_enforceCacheSize;
- (void)_enqueueCacheSizeEnforcement;
- (void)_loadItemsFromCacheState;
- (void)clearCache;
- (void)enforceCacheSize;
- (void)removeDataForKey:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hasDataForKey:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)touchDataForKey:(id)arg1;
- (void)dataForKey:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setData:(id)arg1 forKey:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)init;

@end
