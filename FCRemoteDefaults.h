//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCThreadSafeMutableDictionary;

@interface FCRemoteDefaults : NSObject
{
    FCThreadSafeMutableDictionary *_remoteDefaults;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)URLRequest;
- (void)updateRemoteDefaults;
- (void)checkForUpdate;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initInternal;

@end

