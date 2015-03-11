/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class <HKSwitchTableViewCellDelegate>, UIImageView, UILabel, UISwitch;

@interface HKSwitchTableViewCell : UITableViewCell {
    <HKSwitchTableViewCellDelegate> *_delegate;
    UILabel *_displayLabel;
    UIImageView *_iconImageView;
    UISwitch *_switch;
    bool_centersIcon;
    bool_enabled;
}

@property bool centersIcon;
@property <HKSwitchTableViewCellDelegate> * delegate;
@property(getter=isEnabled) bool enabled;
@property(readonly) struct CGSize { double x1; double x2; } iconSize;
@property(getter=isOn) bool on;

- (void).cxx_destruct;
- (void)_setupUI;
- (bool)centersIcon;
- (id)delegate;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEnabled;
- (bool)isOn;
- (void)layoutSubviews;
- (void)setCentersIcon:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)switchValueChanged:(id)arg1;

@end