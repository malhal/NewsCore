//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCKeyValueStore, NSString;

@protocol FCKeyValueStoreMigrating <NSObject>
- (id)keyValueStore:(FCKeyValueStore *)arg1 migrateObject:(id)arg2 forKey:(NSString *)arg3 fromVersion:(unsigned long long)arg4;
- (_Bool)keyValueStore:(FCKeyValueStore *)arg1 canMigrateFromVersion:(unsigned long long)arg2;
@end

