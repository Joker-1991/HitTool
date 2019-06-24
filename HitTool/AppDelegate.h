//
//  AppDelegate.h
//  HitTool
//
//  Created by dillon on 2019/3/29.
//  Copyright © 2019 dillon. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SpeedProvider.h"

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    
    NSStatusItem *statusItem;
    NSMutableAttributedString *speedString;
    struct if_data64 ifdata;
    
    NSWindow *window;

}

@property (weak) IBOutlet NSMenuItem *triggerDisktopIconsMenuItem;
@property (weak) IBOutlet NSMenuItem *preventFromSleepingMenuItem;

@end

