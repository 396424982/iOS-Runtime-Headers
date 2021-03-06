/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDMediaInfo;

@interface TSDMediaFlagsCommand : TSKCommand {
    unsigned int mFlags;
    TSDMediaInfo *mInfo;
}

- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithInfo:(id)arg1 wasMediaReplaced:(BOOL)arg2 isPlaceholder:(BOOL)arg3;
- (void)p_do;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (void)undo;

@end
