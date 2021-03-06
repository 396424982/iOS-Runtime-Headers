/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSSet, NSString, UIButton, UIFont, UILabel;

@interface MFCaptionLabel : UIView {
    void *_addressBook;
    NSArray *_bccRecipients;
    NSArray *_ccRecipients;
    UIButton *_moreButton;
    BOOL _needsLabelUpdate;
    NSSet *_receivingEmailAddresses;
    UILabel *_recipientLabel;
    NSArray *_toRecipients;
}

@property void* addressBook;
@property(readonly) struct CGPoint { float x1; float x2; } baselinePoint;
@property(retain) NSArray * bccRecipients;
@property(retain) NSArray * ccRecipients;
@property(retain) UIFont * font;
@property(readonly) UIButton * moreButton;
@property(retain) NSSet * receivingEmailAddresses;
@property(readonly) UILabel * recipientLabel;
@property(retain) NSString * text;
@property(retain) NSArray * toRecipients;

+ (id)_propertiesThatNeedLabelUpdates;
+ (id)defaultFont;

- (id)_arrangedRecipients:(id)arg1;
- (void)_setNeedsLabelUpdate;
- (void)_updateLabel;
- (void*)addressBook;
- (struct CGPoint { float x1; float x2; })baselinePoint;
- (id)bccRecipients;
- (id)ccRecipients;
- (void)clear;
- (void)dealloc;
- (id)font;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)moreButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)receivingEmailAddresses;
- (id)recipientLabel;
- (void)setAddressBook:(void*)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setReceivingEmailAddresses:(id)arg1;
- (void)setText:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (id)text;
- (id)toRecipients;
- (id)viewForBaselineLayout;

@end
