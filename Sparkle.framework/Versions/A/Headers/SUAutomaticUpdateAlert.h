//
//  SUAutomaticUpdateAlert.h
//  Sparkle
//
//  Created by Andy Matuschak on 3/18/06.
//  Copyright 2006 Andy Matuschak. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class SUAppcastItem, SUUtilities;
@interface SUAutomaticUpdateAlert : NSWindowController {
	SUAppcastItem *updateItem;
	SUUtilities *utilities;
}

- initWithAppcastItem:(SUAppcastItem *)item andUtilities:(SUUtilities *)aUtility;;

- (IBAction)relaunchNow:sender;
- (IBAction)relaunchLater:sender;

@end
