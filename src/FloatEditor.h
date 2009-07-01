//
//  FloatEditor.h
//  TTStyleBuilder
//
//  Created by Keith Lazuka on 6/16/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "PropertyEditorSystem.h"

@interface FloatEditor : TTTableViewController <ValueEditor>
{
    // ValueEditor
    id object;
    NSString *propertyName;
    
    // float editor specific
    TTTextFieldTableField *numberField;
}

@end
