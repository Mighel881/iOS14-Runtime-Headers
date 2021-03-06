/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DBManager;

@interface CallDBManager : NSObject {

	BOOL _deviceUnlocked;
	unsigned char _dataStoreType;
	unsigned char _notifyDataStoreChangeReason;
	DBManager* _dbManager;
	id _deviceUnlockNotificationRef;

}

@property (retain) id deviceUnlockNotificationRef;                         //@synthesize deviceUnlockNotificationRef=_deviceUnlockNotificationRef - In the implementation block
@property (nonatomic,retain) DBManager * dbManager;                        //@synthesize dbManager=_dbManager - In the implementation block
@property (assign) BOOL deviceUnlocked;                                    //@synthesize deviceUnlocked=_deviceUnlocked - In the implementation block
@property (assign) unsigned char dataStoreType;                            //@synthesize dataStoreType=_dataStoreType - In the implementation block
@property (assign) unsigned char notifyDataStoreChangeReason;              //@synthesize notifyDataStoreChangeReason=_notifyDataStoreChangeReason - In the implementation block
+(id)getDBLocationIsSandboxed:(BOOL)arg1 isTemporary:(BOOL)arg2 error:(unsigned char*)arg3 ;
+(id)modelURL;
+(id)dataStoreName;
-(void)handlePermanentCreated;
-(id)createManagedObjectContext;
-(BOOL)deviceUnlocked;
-(void)dealloc;
-(DBManager *)dbManager;
-(void)setDeviceUnlocked:(BOOL)arg1 ;
-(id)init;
-(void)moveCallsFromTempDatabase;
-(void)createTemporary;
-(void)createPermanent;
-(BOOL)notifyDataStoreChanged;
-(unsigned char)notifyDataStoreChangeReason;
-(unsigned char)dataStoreType;
-(void)setNotifyDataStoreChangeReason:(unsigned char)arg1 ;
-(void)createDataStore;
-(void)handleTemporaryCreated;
-(BOOL)shouldCreatePermanent;
-(BOOL)shouldCreateTemporary;
-(void)setDeviceUnlockNotificationRef:(id)arg1 ;
-(void)setDataStoreType:(unsigned char)arg1 ;
-(id)deviceUnlockNotificationRef;
-(void)reFetchState;
-(void)setDbManager:(DBManager *)arg1 ;
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)registerForNotifications;
@end

