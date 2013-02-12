/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class ML3QueryResultSet, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface IURentalDataStore : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_localNotifications;
    NSOperationQueue *_operationQueue;
    int _pendingRentalEventCount;
    NSMutableDictionary *_rentalDataByPID;
    ML3QueryResultSet *_resultSet;
    BOOL _shouldReloadRentalData;
}

+ (id)existingInstance;
+ (id)sharedInstance;

- (void)_enqueueOperation:(id)arg1;
- (void)_handleFinishedOperation:(id)arg1;
- (BOOL)_isLoadingRentalData:(id)arg1;
- (void)_libraryDidChangeNotification:(id)arg1;
- (void)_libraryDisplayValuesDidChange:(id)arg1;
- (void)_loadRentalDataFromLibrary;
- (id)_rentalDataForMediaItem:(id)arg1;
- (id)_rentalItems;
- (void)_resetLocalNotifications;
- (void)_scheduleRentalEvents;
- (void)dealloc;
- (BOOL)handleLocalNotification:(id)arg1;
- (id)init;
- (void)loadRentalData:(id)arg1 withReason:(int)arg2;
- (void)loadRentalDataFromLibrary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)rentalDataForMediaItem:(id)arg1;
- (void)resetAllDataForReason:(unsigned int)arg1;
- (void)resetRentalDataForMediaItem:(id)arg1 reason:(unsigned int)arg2;

@end