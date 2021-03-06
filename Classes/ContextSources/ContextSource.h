//
//  ContextSource.h
//  ContextFramework
//
//  Created by Felix on 11.12.09.
//  Copyright 2009 Felix Mueller (felixmueller@mac.com). All rights reserved.
//
//	This superclass represents a context source.
//	Specific context sources are derived from this class.
//

#import <Foundation/Foundation.h>
#import "IContextSource.h"


@interface ContextSource : NSObject <IContextSource> {

	NSMutableDictionary *attributes;
	
}

@property (nonatomic, retain) NSMutableDictionary *attributes;

@end
